//leetcode 21
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
 
    ListNode* solve(ListNode* list1, ListNode* list2){

        if(list1->next == NULL){
            list1->next = list2;
            return list1;
        }

         ListNode* curr1 = list1;
         ListNode* next1 = curr1->next;

         ListNode* curr2 = list2;
         ListNode* next2 = curr2->next;

         while((curr2 != NULL) && (next1 != NULL)){

            if((curr2->val >= curr1->val) && (curr2->val <= next1->val)){
                //adding pointers
                curr1->next = curr2;
                next2 = curr2->next;
                curr2->next = next1;

                //updating pointers
                curr1 = curr2;
                curr2 = next2;
            }
            else{
                curr1 = next1;
                next1 = next1->next;
                if(next1 == NULL){
                    curr1->next = curr2;
                    return list1;
                }
            }
         }
         return list1;

    }


    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        if(list1 == NULL){
            return list2;
        }
        if(list2 == NULL){
            return list1;
        }

        if(list1->val <= list2->val){
            return solve(list1,list2);
        }
        else{
            return solve(list2,list1);
        }
        
    }
};


or



Node<int>* solve(Node<int>* first, Node<int>* second){
       //if only one element is present at first list
       if(first->next == NULL){
           first->next = second;
           return first;
       }

       Node<int>* curr1 = first;
       Node<int>* next1 = curr1->next;
       Node<int>* curr2 = second;
       Node<int>* next2 = curr2->next;
    while(next1 != NULL && curr2 != NULL){
           if((curr2->data >= curr1->data) && (curr2->data <= next1->data)){
               curr1->next = curr2;
               next2 = curr2->next;
               curr2->next = next1;
               curr1 = curr2;
               curr2 = next2;

           }
          else{
               curr1 = curr1->next;
               next1 = next1->next;
               if(next1 == NULL){
                   curr1->next = curr2;
                   return first;
               }
           }
       }
       return first;
}

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // Write your code here.
        if(first == NULL){
             return second;
        }
        if(second == NULL){
             return first;
        }

        if(first->data <= second ->data){
             return solve(first,second);
        }
        else{
             return solve(second,first);
        }
}




