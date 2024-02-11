#include <bits/stdc++.h> 
using namespace std;
vector<int> getArrayIntersection(vector<int> &smallArr, vector<int> &bigArr, int x, int y){
	vector<int>res;
	int i=0;
	int j=0;
	while(i<y && j<x)	{
		if(bigArr[i] > smallArr[j]){
			j++;
		}
		else if(bigArr[i] < smallArr[j]){
			i++;
		}
		else{
			res.push_back(smallArr[j]);
			i++;
			j++;
		}
		
	}
	return res;
}
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	if(n>=m){
		return getArrayIntersection(arr2, arr1, m, n);
	}
	else{
		return getArrayIntersection(arr1, arr2, n, m);
	}
}
