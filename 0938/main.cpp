/* LeetCode
 * 0938  - Range Sum of BST - https://leetcode.com/problems/range-sum-of-bst/
 * Nilton Gomes Martins Junior
 * 09/07/2019
 */

#include <iostream>

using namespace std;

// Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution
{
public:
    int rangeSumBST(TreeNode *root, int L, int R)
    {
        int sum = 0;
        if (!root)
            return sum;
        if (root->val >= L && root->val <= R)
            sum += root->val;
        return sum + rangeSumBST(root->left, L, R) + rangeSumBST(root->right, L, R);
    }
};

int main(int argc, char const *argv[])
{
    return 0;
}
