/* LeetCode
 * 0961  - N-Repeated Element in Size 2N Array - https://leetcode.com/problems/n-repeated-element-in-size-2n-array/
 * Nilton Gomes Martins Junior
 * 20/07/2019
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        vector<int> visited;
        vector<int>::iterator visited_it;
        int repeated;
        for (auto &elem : A)
        {
            visited_it = find(visited.begin(), visited.end(), elem);
            if (visited_it == visited.end())
                visited.push_back(elem);
            else
                repeated = elem;
        }
        return repeated;
    }
};

int main(int argc, char const *argv[])
{
    return 0;
}
