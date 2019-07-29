/* LeetCode
 * 0905  - Sort Array By Parity - https://leetcode.com/problems/sort-array-by-parity/
 * Nilton Gomes Martins Junior
 * 14/07/2019
 */

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Solution
{
public:
    vector<int> sortArrayByParity(vector<int> &A)
    {
        vector<int> sorted_array;
        
        // Inserts all even elements.
        for (auto &elem : A)
            if (elem % 2 == 0)
                sorted_array.push_back(elem);

        // Inserts all odd elements.
        for (auto &elem : A)
            if (elem % 2 != 0)
                sorted_array.push_back(elem);

        return sorted_array; 
    }
};

int main(int argc, char const *argv[])
{
    return 0;
}
