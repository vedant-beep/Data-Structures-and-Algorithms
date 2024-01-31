#include <bits/stdc++.h> 
int pairSum(vector<int> &arr, int n, int target){

	sort(arr.begin(), arr.end());
	int count =0;
	int start = 0;
	int end = n-1;
	while(start<end){
		int pair_sum = arr[start]+arr[end];
		if(pair_sum == target){
			count++;
			start++;
			end--;
			
		}
		else if(pair_sum > target){
			end--;
		}
		else if(pair_sum<target){
			start++;
		}
	}
	if(count==0){
		return -1;
	}
	return count;
}
