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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr) return head;
        ListNode* temp = head;
        ListNode* value = head;
        temp = temp->next;
        while(temp!=nullptr){
            if(value->val == temp->val){
                value->next = value->next->next;
                ListNode* del = temp;
                temp = temp->next;
                del->next = nullptr;
                delete del;
            }
            else{
                temp = temp->next;
                value = value->next;
            }
        }
        return head;
    }
};