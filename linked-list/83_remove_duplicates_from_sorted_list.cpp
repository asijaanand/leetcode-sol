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
    ListNode *deleteDuplicates(ListNode *head) {
        if (head == nullptr) {
            return head;
        }
        ListNode *p = head;
        ListNode *q = head;
        ListNode *temp = nullptr;

        while (true) {
            if (p->val != q->val) {
                p->next = q;
                p = q;
            }

            if (q->next == nullptr) {
                p->next = nullptr;
                break;
            } else {
                q = q->next;
            }
        }
        return head;
    }
};
