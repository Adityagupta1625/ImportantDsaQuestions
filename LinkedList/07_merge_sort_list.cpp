// You are given the heads of two sorted linked lists list1 and list2.

// Merge the two lists in a one sorted list. The list should be made by splicing together the nodes of the first two lists.

// Return the head of the merged linked list.

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL && list2==NULL) return NULL;
        
        if(list1==NULL) return list2;
        
        if(list2==NULL) return list1;
        
        ListNode* head=NULL;
        if(list1->val<list2->val){
            head=list1;
            head->next=mergeTwoLists(list1->next,list2);
        }
        else{
            head=list2;
            head->next=mergeTwoLists(list1,list2->next);
        }
        return head;
    }
};