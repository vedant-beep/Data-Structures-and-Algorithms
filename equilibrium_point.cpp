#include <bits/stdc++.h> 
int findEquilibriumIndex(vector<int> &arr) {                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
    int n = arr.size();
    if(n==1){
        return 0;
    }
    int get_sum = 0;
    for(int i=1; i<n; i++){
        get_sum += arr[i];
    }
    if(get_sum==0){
        return 0;
    }
    int left_window = 0;
    int right_window = get_sum;
    int ans = -1;
    for(int i =1; i<n; i++){
        left_window += arr[i-1];
        right_window -= arr[i];
        if(left_window == right_window){
            ans = i;
            return ans;
        }
    }
    return ans;
}
