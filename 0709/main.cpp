/* LeetCode
 * 0709  - To Lower Case - https://leetcode.com/problems/to-lower-case/
 * Nilton Gomes Martins Junior
 * 09/07/2019
 */

#include <iostream>
#include <string>

using namespace std;

class Solution
{
public:
    string toLowerCase(string str)
    {
        string lower_str("");
        for (auto &ch : str)
        {
            if (ch >= 'A' && ch <= 'Z')
                lower_str += ch - 'Z' + 'z';
            else
                lower_str += ch;
        }
        return lower_str;
    }
};

int main(int argc, char const *argv[])
{
    Solution test;
    std::cout << test.toLowerCase("HELLO World") << '\n';
    return 0;
}
