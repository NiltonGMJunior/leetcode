/* LeetCode
 * 0977  - Squares of a Sorted Array - https://leetcode.com/problems/squares-of-a-sorted-array/
 * Nilton Gomes Martins Junior
 * 29/07/2019
 */

#include <iostream>
#include <vector>

using namespace std;

#define absolute(x) x >= 0 ? x : -x

class Solution
{
public:
    int findLeastAbsoluteValue(vector <int> &A, const unsigned int start, const unsigned int end)
    {
        if (start == end)
            return start;
        
        unsigned int mid = start + (end - start + 1) / 2;

        if (absolute(A[mid]) > absolute(A[mid + 1]))
            return findLeastAbsoluteValue(A, mid + 1, end);
        else
            return findLeastAbsoluteValue(A, start, mid);
    }

    vector<int> sortedSquares(vector<int> &A)
    {
        vector<int> output;
        if (A.size() == 1)
        {
            output.push_back(A[0]);
            return output;
        }

        unsigned int left = findLeastAbsoluteValue(A, 0, A.size() - 1);
        unsigned int right = left;
        output.push_back(A[left] * A[left]);
        

        while (left != 0 || right != A.size() - 1)
        {
            if (left == 0)
            {
                output.push_back(A[right + 1] * A[right + 1]);
                right++;
            }
            else if (right == A.size() - 1)
            {
                output.push_back(A[left - 1] * A[left - 1]);
                left--;
            }
            else
            {
                if (absolute(A[left - 1]) <= absolute(A[right + 1]))
                {
                    output.push_back(A[left - 1] * A[left - 1]);
                    left--;
                }
                else
                {
                    output.push_back(A[right + 1] * A[right + 1]);
                    right++;
                }
            }
        }
        
        return output;
    }
};

int main(int argc, char const *argv[])
{

    return 0;
}
