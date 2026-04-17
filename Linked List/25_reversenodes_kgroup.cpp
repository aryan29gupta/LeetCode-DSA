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
    ListNode* reverselist(ListNode* temp) {
        ListNode* prev = nullptr;
        while (temp != nullptr) {
            ListNode* front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
    }
    ListNode* getkthnode(ListNode* temp, int k) {
        k -= 1;
        while (temp != nullptr && k > 0) {
            k--;
            temp = temp->next;
        }
        return temp;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* prev = head;
        while (temp != nullptr) {
            ListNode* kthnode = getkthnode(temp, k);
            if (kthnode == nullptr) {
                if (prev)
                    prev->next = temp;
                break;
            }
            ListNode* nextNode = kthnode->next;
            kthnode->next = nullptr;
            reverselist(temp);
            if (temp == head) {
                head = kthnode;
            } else {
                prev->next = kthnode;
            }
            prev = temp;
            temp = nextNode;
        }
        return head;
    }
};