/* LeetCode
 * 1021  - Remove Outermost Parentheses - https://leetcode.com/problems/remove-outermost-parentheses/
 * Nilton Gomes Martins Junior
 * 09/07/2019
 */

#include <iostream>
#include <string>
#include <stack>

using namespace std;

class Solution
{
public:
    string removeOuterParentheses(string S)
    {
        string output_string("");

        int count = 0;
        for (int i = 0; i < S.size(); ++i)
        {
            if (count == 1 && S[i] == ')')
                count--;
            else if (count > 0)
            {
                if (S[i] == '(')
                    count++;
                else
                    count--;
                output_string += S[i];
            }
            else
                count++;
        }

        return output_string;
    }
};

int main(int argc, char const *argv[])
{
    Solution test;
    std::cout << test.removeOuterParentheses(argv[1]) << '\n';
    return 0;
}
