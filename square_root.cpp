int floorSqrt(int n)
{
    if (n == 0 || n == 1)
        return n;

    int start = 1, end = n, ans;
    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (mid * mid == n)
            return mid;

        if (mid <= n / mid) {
            start = mid + 1;
            ans = mid;
        } else {
            end = mid - 1;
        }
    }
    return ans;
}
