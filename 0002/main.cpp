/* LeetCode
 * 0002 - Add Two Numbers - https://leetcode.com/problems/add-two-numbers/
 * Nilton Gomes Martins Junior
 * 17/06/2019
 */

#include <cmath>

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution
{
public:
    ListNode *insertNode(ListNode *head, int value)
    {
        ListNode *new_node = new ListNode(value);
        if (!head)
        {
            head = new_node;
        }
        else
        {
            ListNode *current = head;
            while (current->next)
                current = current->next;
            current->next = new_node; 
        }
        return head;
    }

    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *head = nullptr;
        int sum, carry = 0, l1_value, l2_value;
        while (l1 || l2 || carry)
        {
            l1_value = (l1) ? l1->val : 0;
            l2_value = (l2) ? l2->val : 0;
            sum = l1_value + l2_value + carry;
            carry = sum / 10;
            head = insertNode(head, sum % 10);
            l1 = (l1) ? l1->next : nullptr;
            l2 = (l2) ? l2->next : nullptr;
        }
        return head;
    }
};

int main(int argc, char const *argv[])
{
    ListNode *l1 = nullptr;
    ListNode *l2 = nullptr;

    return 0;
}
