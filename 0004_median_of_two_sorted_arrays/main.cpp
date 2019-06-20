/* LeetCode
 * 0004 - Median of Two Sorted Arrays - https://leetcode.com/problems/median-of-two-sorted-arrays/
 * Nilton Gomes Martins Junior
 * 20/06/2019
 */

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // Length of the arrays
        int length_nums1 = nums1.empty() ? 0 : nums1.size();
        int length_nums2 = nums2.empty() ? 0 : nums2.size();

        // Target value
        int target = (length_nums1 + length_nums2 - 1) / 2;
        
        // Stack for the values
        std::stack<int> ordered_stack;
        int stack_size = 0;

        while (stack_size < target)
        {
            if (!nums1.empty() && !nums2.empty())
            {
                if (nums1[0] <= nums2[0])
                {
                    ordered_stack.push(nums1[0]);
                    nums1.erase(nums1.begin());
                }
                else
                {
                    ordered_stack.push(nums2[0]);
                    nums2.erase(nums2.begin());
                }
            }
            else if (nums1.empty())
            {
                ordered_stack.push(nums2[0]);
                nums2.erase(nums2.begin());
            }
            else
            {
                ordered_stack.push(nums1[0]);
                nums1.erase(nums1.begin());  
            }
            stack_size++;
        }
    }
};

int main(int argc, char const *argv[])
{
    
    return 0;
}
