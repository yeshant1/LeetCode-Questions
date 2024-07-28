//coding ninjas-https://www.naukri.com/code360/problems/queue-using-array-or-singly-linked-list_2099908?interviewProblemRedirection=true&search=imple&leftPanelTabValue=SUBMISSION
#include <bits/stdc++.h> 
class Queue {
      int *arr;
      int qsize;
      int qfront;
      int qrear;
public:
    Queue() {
        // Implement the Constructor
        qsize = 100001;
        arr = new int[qsize];
        qfront = 0;
        qrear = 0;
    }

  bool isEmpty() {
        // Implement the isEmpty() function
        if(qfront == qrear)
        {
            return true;
        }
        else
        {
            return false;
        }
  }
 void enqueue(int data) {
        // Implement the enqueue() function
        if(qrear == qsize){
            cout<<"Queue is full "<<endl;
        }
        else
        {
          arr[qrear] = data;
          qrear++;
        }

    }

 int dequeue() {
        // Implement the dequeue() function
        if(qfront == qrear){
            return -1;
        }
  else
       {
            int ans = arr[qfront];
           arr[qfront] = -1;
           qfront++;
           if(qfront == qrear) {
              qfront = 0;
              qrear = 0;
           }
           return ans;
       }
 }

int front() {
        // Implement the front() function
        if(qfront == qrear){
            return -1;
        }
        else
        {
            return arr[qfront];
        }
    }
};
