class Solution {
public:
    int binarySearch(vector<int>& nums, int l, int r, int target) {
        while (l <= r) {
            int m = l + (r - l) / 2;

            if (nums[m] == target)
                return m;
            else if (nums[m] < target)
                l = m + 1;
            else
                r = m - 1;
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int n = nums.size();

        // Find pivot
        int p = -1;
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                p = i + 1;      // smallest element
                break;
            }
        }

        // Not rotated
        if (p == -1)
            return binarySearch(nums, 0, n - 1, target);

        // Decide which half to search
        if (target >= nums[0] && target <= nums[p - 1]) {
            return binarySearch(nums, 0, p - 1, target);
        } else {
            return binarySearch(nums, p, n - 1, target);
        }
    }
};