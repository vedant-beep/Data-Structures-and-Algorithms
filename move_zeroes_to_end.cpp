#include<bits/stdc++.h>
using namespace std;
void pushZerosAtEnd(vector<int> &arr) 
{
	int n = arr.size();
	int zeroes = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == 0){
            zeroes++;
        }
    }
    if(zeroes != 0){
        int k = 0;
        for (int j = 0; j < n; j++)
        {
            if(arr[j] == 0){
                k++;
            }
            if(k<=zeroes && (j-k)>=0 && arr[j]!=0){
                arr[j-k] = arr[j];
            }
        }
        int m = n-zeroes;
        while(m<n){
            arr[m] = 0;
            m++;
        }
        
    }
}
