#include<bits/stdc++.h> 
using namespace std;

typedef vector<int> vi;
typedef vector<string> vst;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* partition(ListNode* head, int x) {
    ListNode* before_head = new ListNode(0);
    ListNode* before = before_head;
    ListNode* after_head = new ListNode(0);
    ListNode* after = after_head;
    while (head != nullptr) {
        if (head->val < x) {
            before->next = head;
            before = before->next;
        } else {
            after->next = head;
            after = after->next;
        }
        head = head->next;
    }
    after->next = nullptr;
    before->next = after_head->next;
    return before_head->next;
}

int main() {

ListNode* head = new ListNode(1);
    ListNode* curr = head;
    curr->next = new ListNode(4);
    curr = curr->next;
    curr->next = new ListNode(3);
    curr = curr->next;
    curr->next = new ListNode(2);
    curr = curr->next;
    curr->next = new ListNode(5);
    curr = curr->next;
    curr->next = new ListNode(2);
    curr = curr->next;
    curr->next = nullptr;
    ListNode* ans = partition(head, 3);
    while (ans != nullptr) {
        cout << ans->val << " ";
        ans = ans->next;
    }

return 0;
}