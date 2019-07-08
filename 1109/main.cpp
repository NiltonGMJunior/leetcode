/* LeetCode
 * 1108 - Defangin IP Address - https://leetcode.com/problems/defanging-an-ip-address/
 * Nilton Gomes Martins Junior
 * 07/07/2019
 */

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class Solution
{
public:
    string defangIPaddr(string address)
    {
        string defangedIP = "";
        for (auto &ch : address)
        {
            if (ch == '.')
                defangedIP += "[.]";
            else
                defangedIP += ch;
        }
        return defangedIP;
    }
};

int main(int argc, char const *argv[])
{
    Solution test;
    std::cout << test.defangIPaddr(argv[1]) << '\n';
    return 0;
}
