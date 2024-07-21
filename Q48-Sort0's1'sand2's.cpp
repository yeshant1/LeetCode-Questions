//coding ninjas -https://www.naukri.com/code360/problems/sort-linked-list-of-0s-1s-2s_1071937?leftPanelTab=0%3Fsource%3Dyoutube&campaign=YouTube_Lovebabbar31stJan2021&utm_source=youtube&utm_medium=affiliate&utm_campaign=YouTube_Lovebabbar31stJan2021&leftPanelTabValue=PROBLEM

Node* sortList(Node *head){
    // Write your code here.

    Node* temp = head;
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;

    while(temp != NULL){
        if(temp->data == 0)
            zeroCount++;
 else if(temp->data == 1)
            oneCount++;
        else 
            twoCount++;
       
        temp = temp->next;
    }

   temp = head;
    while(temp != NULL){
        if(zeroCount != 0){
            temp->data = 0;
            zeroCount--;
  }else if (oneCount != 0){
            temp->data = 1;
            oneCount--;
        }else{
            temp->data = 2;
            twoCount--;
        }
        temp = temp->next;
    }
   return head;

}

