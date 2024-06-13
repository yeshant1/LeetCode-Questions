#include<iostream>
using namespace std;

int getMax(int arr[],int size){

      int max = arr[0];

      for(int i = 0;i<size;i++){
        if(arr[i] > max){
            max = arr[i];
        }
      }
      return max;
}

int getMin(int arr[],int size){

      int min = arr[0];

      for(int i = 0;i<size;i++){
        if(arr[i] < min){
            min = arr[i];
        }
      }
      return min;
}
int main()
{

   int size;
   cin>>size;

   int arr[100];

   for(int i = 0;i<size;i++){
        cin>>arr[i];
   }

   for(int i = 0;i<size;i++){
    cout<<arr[i]<<" ";
   }
   cout<<endl;
    
    int maximum = getMax(arr,size);
   cout<<"Maximum element in the array : "<<maximum<<endl;

    int minimum = getMin(arr,size);
   cout<<"Minimum element in the array : "<<minimum<<endl;
   return 0;
}
