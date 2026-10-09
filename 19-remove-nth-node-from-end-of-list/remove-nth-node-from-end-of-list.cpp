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
int size_of_ll(ListNode* temp){
    int count = 0;

    while(temp != nullptr){
        temp = temp->next;
        count++;
    }

    return count;
}


class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size=size_of_ll(head);
        int k=size-n;
        if(head==nullptr) return head;

        if(k==0){
            ListNode* temp=head;
            head=head->next;
            delete temp;
            return head;
        }
        ListNode* temp=head;
    
        int count=0;
        ListNode* temp2=nullptr;
        while(temp!=nullptr && temp->next!=nullptr){
            if(count==k-1){
                temp2=temp->next;
                temp->next=temp->next->next;
                delete temp2;
                break;
            }
            count++;
            temp=temp->next; 
        

        }
        return head;
    }
};