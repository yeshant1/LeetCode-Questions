#include<iostream>
using namespace std;

void swpAlternate(int arr[],int size){

    for(int i = 0;i<size;i=i+2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main()
{

    int arr[5] = {1,3,6,2,9};
    int brr[6] = {2,32,343,13,124,12};
    
    swpAlternate(arr,5);
    swpAlternate(brr,6);

      for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;

       for (int i = 0; i < 6; i++)
    {
        cout << brr[i] << " ";
    }

   return 0;
}
