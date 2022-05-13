#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/add-two-numbers-ii/
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *reverseIt(ListNode *head)
    {
        ListNode *curr = head, *prev = NULL, *next = NULL;
        while (curr)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
        return head;
    }

    ListNode *addTwoNumbers(ListNode *first, ListNode *second)
    {
        if (!first and !second)
            return NULL;
        if (!first)
            return second;
        if (!second)
            return first;
        first = reverseIt(first);
        second = reverseIt(second);
        ListNode *headd = new ListNode(0);
        ListNode *temp = headd;
        int carry = 0;
        while (first or second or carry)
        {
            int sum = 0;
            if (first)
            {
                sum += first->val;
                first = first->next;
            }
            if (second)
            {
                sum += second->val;
                second = second->next;
            }
            sum += carry;
            carry = sum / 10;
            ListNode *newnode = new ListNode(sum % 10);
            temp->next = newnode;
            temp = temp->next;
        }
        headd = reverseIt(headd->next);
        return headd;
    }
};

int main(){
    ListNode *first = new ListNode(2);
    first->next = new ListNode(4);
    first->next->next = new ListNode(3);
    ListNode *second = new ListNode(5);
    second->next = new ListNode(6);
    second->next->next = new ListNode(4);
    Solution sol;
    ListNode *res = sol.addTwoNumbers(first, second);
    while (res)
    {
        cout << res->val << " ";
        res = res->next;
    }
    return 0;
}