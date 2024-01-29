#include <bits/stdc++.h> 
int minElementsToRemove(vector<int> &arr)
{
	int n = arr.size();
	if(n==1){
		return 0;
	}
	sort(arr.begin(), arr.end());
	int i=0;
	int j=1;
	int count =0;
	while(i<n && j<n){
		if(arr[i]==arr[j]){
			count++;
			j++;
		}
		else{
			i = j;
			j = i+1;
		}
	}
	return count;
}
