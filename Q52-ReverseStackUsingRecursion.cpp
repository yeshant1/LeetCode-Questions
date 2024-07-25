//coding ninjas - https://www.naukri.com/code360/problems/reverse-stack-using-recursion_631875?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0%3Fsource%3Dyoutube&campaign=Lovebabbarcodestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio&leftPanelTabValue=SUBMISSION
void insertAtBottom(stack<int> &s,int element){
    //base case
    if(s.empty()){
        s.push(element);
        return ;
    }
   int num = s.top();
    s.pop();

    insertAtBottom(s,element);

    s.push(num);
}

void reverseStack(stack<int> &stack) {
    
    //base case
    if(stack.empty()){
        return ;
    }
    int num = stack.top();
    stack.pop();

    //recursive call
    reverseStack(stack);

    insertAtBottom(stack,num);
 }
