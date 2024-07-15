//coding ninjas 
//Iteratively
LinkedListNode<int>* reverseLinkedList(LinkedListNode<int>* head{
  //base case
  if(head == NULL || head -> next == NULL){

        return head;

    }

 

    LinkedListNode<int>* prev = NULL;

    LinkedListNode<int>* curr = head;

    LinkedListNode<int>* forward = NULL;

    while(curr != NULL){

        forward = curr -> next;

        curr -> next = prev;

        prev = curr;

        curr = forward;

    }

    return prev;
}


//recursively

    //base case
 LinkedListNode<int>* reverse1(LinkedListNode<int>* head){
    if(head == NULL || head->next == NULL){
        return head;
    }

    LinkedListNode<int>* chotaHead = reverse1(head->next);

    head->next->next = head;
    head->next = NULL;

    return chotaHead;
}
LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    return reverse1(head);
    // Write your code here
}
