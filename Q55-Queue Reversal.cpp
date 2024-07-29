//gfg - https://www.geeksforgeeks.org/problems/queue-reversal/1
//Function to reverse the queue.
class Solution
{
  public:
queue<int> rev(queue<int> q)
{
  stack<int> s;

  while(!q.empty()){
   int element = q.front();
   s.push(element);
   q.pop();
  }

  while(!s.empty()){
   int element = s.top();
   q.push(element);
   s.pop();
  }

  return q;
 }
};
