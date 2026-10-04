class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1,ListNode* l2){
        ListNode* h1=l1;
        ListNode* h2=l2;

        ListNode* ans=nullptr;
        ListNode* mover=nullptr;

        int carry=0;

        while(h1!=nullptr || h2!=nullptr || carry!=0){
            int sum=carry;

            if(h1!=nullptr){
                sum+=h1->val;
                h1=h1->next;
            }

            if(h2!=nullptr){
                sum+=h2->val;
                h2=h2->next;
            }

            ListNode* temp=new ListNode(sum%10);
            carry=sum/10;

            if(ans==nullptr){
                ans=temp;
                mover=ans;
            }
            else{
                mover->next=temp;
                mover=temp;
            }
        }

        return ans;
    }
};