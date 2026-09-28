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
    ListNode* middleNode(ListNode* head) {
        int n=size_of_ll(head);
        int mid=(n/2)+1;
        int count=1;
        ListNode* temp=head;
        while(temp!=nullptr){
            if(count==mid){
                return temp;
            }
            count++;
            temp=temp->next;
    
        }
        return temp;
    }
};