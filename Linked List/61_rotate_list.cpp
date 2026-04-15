/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr || head->next == nullptr || k == 0)
            return head;
        ListNode* temp = head;
        int c = 1;
        while (temp->next != nullptr) {
            c++;
            temp = temp->next;
        }
        int n = k % c;
        if (n == 0) return head;
        temp->next = head;
        temp = head;
        for (int i = 0; i < c - n - 1; i++) {
            temp = temp->next;
        }
        head = temp->next;
        temp->next = nullptr;
        return head;
    }
};