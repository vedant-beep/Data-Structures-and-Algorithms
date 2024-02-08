long long maxSubarraySum(vector<int> arr, int n)
{
    long long max_sum = 0;
    long long curr_sum = 0;
    for(int i=0; i<n; i++){
        curr_sum += arr[i];
        if(curr_sum<0){
            curr_sum = 0;                 
        }
        max_sum = max(curr_sum,max_sum);
    }
    return max_sum;
}
