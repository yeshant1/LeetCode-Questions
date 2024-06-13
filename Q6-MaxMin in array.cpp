#include<iostream>
using namespace std;

int getMax(int arr[],int size){

      int maxi = arr[0];

    for(int i = 0;i<size;i++){
       maxi = max(maxi,arr[i]);
    //     if(arr[i] > max){
    //         max = arr[i];
    //     }
       }
       
      return maxi;
}

int getMin(int arr[],int size){

      int mini = arr[0];

      for(int i = 0;i<size;i++){
        mini = min(mini,arr[i]);
        // if(arr[i] < min){
        //     min = arr[i];
        // }
      }
      return mini;
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
