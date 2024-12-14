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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
     ListNode dummy;
     ListNode* tail = &dummy;
    
     ListNode* prev = nullptr;

     while(list1 != nullptr && list2 != nullptr){
        if(list1->val > list2->val){
            ListNode* temp = new ListNode(list2->val);
            tail->next = temp;
            tail = tail->next;
            list2 = list2->next;
        }else{
            ListNode* temp = new ListNode( list1->val);
            tail->next = temp;
            tail = tail->next;
            list1= list1->next;
        }
     }
     if(list1 != nullptr){
        tail->next = list1;
     }else if( list2 != nullptr){
        tail->next = list2;
     }
        return dummy.next;
    }
};