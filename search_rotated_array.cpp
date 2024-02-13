int findPivotInd(int* arr, int n){
    int s = 0;
    int e = n-1;
    while(s<e){
        int mid = s + (e-s)/2;
        if(arr[mid]>arr[n-1]){
            s = mid+1;
            
        }
        else if(arr[mid]<arr[n-1]){
            e = mid;
        }
    }
    return e;
}

int searchInSortedArray(int* arr, int n, int start, int limit, int k){
    int ans = -1;
    int s = start;
    int e = limit-1;
    while(s<=e){
        int mid = s + (e-s)/2;
        if(arr[mid]<k){
            s =  mid +1;
        }
        else if(arr[mid]>k){
            e = mid-1;
        }
        else{
            ans = mid;
            return ans;
        }
    }
    return ans;
}

int search(int* arr, int n, int key) {
    int pivot = findPivotInd(arr, n);
    int getInd;
   if(key>arr[n-1]){
        getInd = searchInSortedArray(arr, n, 0, pivot, key);
   }
   else{
        getInd = searchInSortedArray(arr, n, pivot, n, key);
   }
   return getInd;
}
