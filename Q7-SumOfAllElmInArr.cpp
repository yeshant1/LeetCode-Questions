#include<iostream>
using namespace std;

int sum(int arr[],int size){
    int sum = 0;
    for(int i = 0;i<size;i++){
        sum += arr[i];
    }
    return sum;
}
int main()
{
   cout<<"Enter the size of the array: "<<endl;
   int size;
   cin>>size;

    int arr[100];

   for(int i = 0;i<size;i++){
        cin>>arr[i];
   }
   cout<<"The array you input: "<<endl;
   for(int i = 0;i<size;i++){
    cout<<arr[i]<<" ";
   }
   cout<<endl;
   
   int Sum = sum(arr,size);
   cout<<"The sum of the elements in the array is "<<Sum;

   return 0;
}
