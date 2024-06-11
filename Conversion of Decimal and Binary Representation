-> DECIMAL TO BINARY REPRESENTATION
#include<iostream>
#include<math.h>

using namespace std;

int main(){

    int n;
    cout<<"Enter the number :"<<endl;
    cin>>n;

    int ans = 0;
    int i = 0;

    while(n!=0){

         int bit = n & 1;

         ans = (bit * pow(10,i)) + ans;

         n = n >> 1;

         i++;
    }

    cout<<"The output will be : " << ans<<endl;
}


-> BINARY TO DECIMAL REPRESENTATION

#include<iostream>
#include<math.h>

using namespace std;

int main(){

    int n;
    cout<<"Enter the number :"<<endl; //the computer will take the number as decimal to we have to find the digit instead of bit in conversion of Binary to Decimal.
    cin>>n;

    int ans = 0;
    int i = 0;

    while(n!=0){

         int digit = n % 10;

         if(digit == 1){

         ans = (ans + pow(2,i));

         }
         n = n / 10;

         i++;
    }

    cout<<"The output will be : " << ans<<endl;
}
