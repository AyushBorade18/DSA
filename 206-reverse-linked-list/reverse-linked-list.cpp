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

ListNode* arr_to_ll(vector<int>& arr){
    if(arr.empty()) return nullptr;

    ListNode* head = new ListNode(arr[0]);
    ListNode* mover = head;

    for(int i = 1; i < arr.size(); i++){
        ListNode* temp = new ListNode(arr[i]);
        mover->next = temp;
        mover = temp;
    }

    return head;
}

vector<int> ll_to_arr(ListNode* head){
    vector<int> arr;

    while(head != nullptr){
        arr.push_back(head->val);
        head = head->next;
    }

    return arr;
}

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        vector<int> arr=ll_to_arr(head);
        reverse(arr.begin(),arr.end());
        ListNode* ans=arr_to_ll(arr);
        return ans;
    }
};