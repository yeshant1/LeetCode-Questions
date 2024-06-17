/* 
#include<iostream>
using namespace std;

  long long  int sqrtInteger(int n){
        int s = 0;
        int e = n;
        long long int mid = s + (e-s)/2;
        long long int ans = -1; 

        while(s<=e){
             long long int square = mid * mid;

            if(square == n) return mid;
            
            if(square < n){
                ans = mid;
                s = mid + 1;
            }
            else{ // square > num
               e = mid -1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }

double morePrecision(int n,int precision,int tempSol){
     double factor = 1;
     double ans = tempSol;
     for(int i = 0;i<precision;i++){
        factor = factor / 10;      //0.1 now add with tempSol and check square
        
        /* 
           0.1
           0.01
           0.001
           */
        for(double j = ans;j*j < n; j = j + factor){
            ans = j;
        }
     }
     return ans;
}

int main()
{
    int n;
    cout<<"Enter the number : "<<endl;
    cin>>n;

    int tempSol = sqrtInteger(n);

    cout<<"Answer is "<<morePrecision(n,3,tempSol)<<endl;
   return 0;
}

*/
class Solution {
public:
    
    int binarySearch(int n){
        int s = 0;
        int e = n;
        long long int mid = s + (e-s)/2;
        long long int ans = -1; 

        while(s<=e){
             long long int square = mid * mid;

            if(square == n) return mid;
            
            if(square < n){
                ans = mid;
                s = mid + 1;
            }
            else{ // square > num
               e = mid -1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }

 
    int mySqrt(int x) {

        return binarySearch(x);

        
    }
};
