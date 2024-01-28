#include <bits/stdc++.h> 
int firstMissing(int arr[], int n)
{
    for(int i=0; i<n; i++){
        if(arr[i]<0){
            arr[i] = 0;
        }
    }

    for(int i=0; i<n; i++){
        int val = abs(arr[i]);
        if((val>0 && val<=n) && arr[val-1]>0){
            arr[val-1] *= -1;
        }
        else if((val>0 && val<=n) && arr[val-1] == 0){
            arr[val-1] = -(n+1);
        }
    }

    int k=1;
    for(k=1; k<=n; k++){
        if(arr[k-1]>=0){
            return k;
        }
    }
    return k;
}
