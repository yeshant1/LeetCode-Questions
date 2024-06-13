#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    cout << "Reversed Array is : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reverse(int arr[], int size)
{

    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main()
{

    int arr[5] = {5, 6, 7, 8, 9};
    cout << "Input Odd Array:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
    int brr[6] = {1, 2, 3, 4, 5, 6};
    cout << "Input Even Array:" << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << brr[i] << " ";
    }
    cout<<endl;

    reverse(arr, 5);
    reverse(brr, 6);

    printArray(arr, 5);
    printArray(brr, 6);

    return 0;
}
