//https://www.naukri.com/code360/problems/reverse-the-array_1262298?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio3&leftPanelTabValue=PROBLEM
#include<bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &arr,int m)
{
    int start = m+1;
    int end = arr.size()- 1;
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

/*

#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int> arr){
    int s = 0;
    int e = arr.size() - 1;

    while(s <= e){
        swap(arr[s], arr[e]);
        s++;
        e--;
    }

    return arr;
}

void print(vector<int> v){
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    int size;
    cin >> size;

    vector<int> arr(size); // Create a vector of size 'size'

    // Read elements into the vector
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    // Reverse the vector
    vector<int> reversed = reverse(arr);

    // Print the reversed vector
    print(reversed);

    return 0;
}

*/
