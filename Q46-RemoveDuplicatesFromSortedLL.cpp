//coding ninjas - https://www.naukri.com/code360/problems/unique-sorted-list_2420283?leftPanelTab=0%3Fsource%3Dyoutube&campaign=YouTube_Lovebabbar29thJan&utm_source=youtube&utm_medium=affiliate&utm_campaign=YouTube_Lovebabbar29thJan&leftPanelTabValue=SUBMISSION
Node * removeDuplicates(Node *head)
{
    // Write your code here
    if(head == NULL){
        return NULL;
    }
    Node* curr = head;
    while(curr != NULL && curr->next != NULL){
        if(curr->data == curr->next->data ){
            Node* next_next = curr->next->next;
            Node* nodeTodelete = curr->next;
            delete(nodeTodelete);
            curr->next = next_next;
            
        }else{
           curr = curr->next;

        }
    }
    return head;

}
