#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
    for(int i =0; i<n; i++){
        bool isSwapped = false;
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwapped = true;
            }
        }
        if(isSwapped == false){
            return;
        }
    }
}
