//coding ninjas - https://www.naukri.com/code360/problems/reverse-list-in-k-groups_983644?leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbar_codestudio_26thjan&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar_codestudio_26thjan&count=25&page=2&search=reverse%20&sort_entity=order&sort_order=ASC&leftPanelTabValue=PROBLEM&customSource=studio_nav
// Write your code here.

    if(head == NULL){

        return NULL;

    }

 

    // 1. step Reverse the first K nodes

   

    int len =0;

    Node* check = head;

    while(check != NULL){

        len++;

        check = check->next;

    }

 

    if(len<k ){

        return head;

    }

 

    Node *prev = NULL;

    Node *curr = head;

    Node *forward = NULL;

    int count = 0;

    while (curr != NULL && count<k){

        forward = curr->next;

        curr->next = prev;

        prev = curr;

        curr = forward;

        count++;

    }

 

    //2.Step recursive call for entire node

 

    if (forward != NULL) {

        head->next = kReverse(forward, k);

    }

 

    return prev;

    
