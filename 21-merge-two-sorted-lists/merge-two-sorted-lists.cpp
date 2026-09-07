ListNode *arr_to_ll(vector<int> &arr){
    ListNode *head = new ListNode(arr[0]);
    ListNode *mover = head;
    for (unsigned int i = 1; i < arr.size(); i++){
        ListNode *temp=new ListNode(arr[i]);
        mover->next=temp;
        mover=mover->next;
    }
    return head;
}

vector<int> ll_to_arr(ListNode* head){
    vector<int> arr;
    ListNode* temp=head;
    while(temp != nullptr){
        arr.push_back(temp->val);
        temp = temp->next;
    }
    return arr;
}

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == nullptr) return list2;
        if(list2 == nullptr) return list1;
        ListNode* temp1=list1;
        while(temp1->next!=nullptr){
            temp1=temp1->next;
        }
        temp1->next=list2;
        vector<int> merged_arr=ll_to_arr(list1);
        sort(merged_arr.begin(),merged_arr.end());
        ListNode* list3=arr_to_ll(merged_arr);
        return list3;
    }
};