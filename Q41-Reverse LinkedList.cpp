//leetcode 206
//Iteratively
class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        ListNode *prev = NULL;
        ListNode *forward = NULL;
        ListNode *curr = head;

        while(curr != NULL){
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }

        return prev;
        
    }
};
