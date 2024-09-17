
class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
        
      int n = arr.size();

    // Handle edge case for only one tower
    if (n == 1) return 0;

    // Sort the array
    sort(arr.begin(), arr.end());

    // Initialize minimum difference between maximum and minimum heights
    int ans = arr[n-1] - arr[0];

    // Traverse and calculate new differences after adjustments
    for (int i = 1; i < n; i++) {
        // Skip the case where arr[i] - k < 0
        if (arr[i] - k < 0) continue;

        int mn = min(arr[0] + k, arr[i] - k);
        int mx = max(arr[n-1] - k, arr[i-1] + k);
        ans = min(ans, mx - mn);
    }

    return ans;
    }
