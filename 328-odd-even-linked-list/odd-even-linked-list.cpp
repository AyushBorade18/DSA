class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==nullptr || head->next==nullptr)
            return head;

        ListNode* oddHead=head;
        ListNode* evenHead=head->next;
        ListNode* evenStart=evenHead;

        while(evenHead!=nullptr && evenHead->next!=nullptr){
            oddHead->next=oddHead->next->next;
            evenHead->next=evenHead->next->next;

            oddHead=oddHead->next;
            evenHead=evenHead->next;
        }

        oddHead->next=evenStart;

        return head;
    }
};