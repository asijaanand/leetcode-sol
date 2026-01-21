#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
  public:
    ListNode *removeElements(ListNode *head, int val) {
        if (head == nullptr) {
            return head;
        }
        ListNode *p = head;
        ListNode *q = head;

        while (q->next) {
            q = q->next;
            if (q->val != val) {
                p->next = q;
            }
            if (p->next->val != val) {
                p = p->next;
            }
        }
        p->next = nullptr;

        if (head->val == val) {
            head = head->next;
        }
        return head;
    }
};
