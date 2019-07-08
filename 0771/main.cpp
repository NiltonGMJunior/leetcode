/* LeetCode
 * 0771 - Jewels and Stones - https://leetcode.com/problems/jewels-and-stones/
 * Nilton Gomes Martins Junior
 * 08/07/2019
 */

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class Solution
{
public:
    int numJewelsInStones(string J, string S)
    {
        // Returns the count of chars in S that are also in J.
        int count = 0;
        for (int i = 0; i < S.size(); ++i)
            for (int j = 0; j < J.size(); ++j)
            {
                if (S[i] == J[j])
                {
                    count++;
                    break;
                }
            }
        return count;
    }
};

int main(int argc, char const *argv[])
{
    return 0;
}
