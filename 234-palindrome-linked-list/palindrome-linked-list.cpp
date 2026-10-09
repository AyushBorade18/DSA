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
ListNode* reverseList(ListNode* head) {
        ListNode* prev=nullptr;
        ListNode* curr=head;
        
        while(curr!=nullptr){
            ListNode* next=curr->next;

            curr->next=prev;

            prev=curr;
            curr=next;
        }

        return prev;
    }
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;

        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }

        if(fast!=nullptr){
            slow=slow->next;
        }

        ListNode* rev=reverseList(slow);
        ListNode* temp=head;

        while(rev!=nullptr){
            if(temp->val!=rev->val){
                return false;
            }
            temp=temp->next;
            rev=rev->next;
        }

        return true;
    }
};