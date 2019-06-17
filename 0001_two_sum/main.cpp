/* LeetCode
 * 0001 - Two Sum - https://leetcode.com/problems/two-sum/
 * Nilton Gomes Martins Junior
 * 17/06/2019
 */

#include <vector>
#include <algorithm>

class Solution
{
public:
    std::vector<int> twoSum(std::vector<int> &nums, int target)
    {
        // Naive solution: for each element of the nums array, search for its complement.
        std::vector<int> indexes;
        for (unsigned long long int i = 0; i < nums.size() - 1; ++i)
            for (unsigned long long int j = i + 1; j < nums.size(); ++j)
                if (nums[i] + nums[j] == target)
                {
                    indexes.push_back(i);
                    indexes.push_back(j);
                    break;
                }
        return indexes;
    }
};

int main(int argc, char const *argv[])
{

    return 0;
}
