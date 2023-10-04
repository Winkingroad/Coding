class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n, vector<int>& nums) {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;

        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums[k--] = nums1[i--];
            } else {
                nums[k--] = nums2[j--];
            }
        }

        while (j >= 0) {
            nums[k--] = nums2[j--];
        }

        while (i >= 0) {
            nums[k--] = nums1[i--];
        }
    }

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int totalElements = nums1.size() + nums2.size();
        vector<int> nums(totalElements);
        merge(nums1, nums1.size(), nums2, nums2.size(), nums);
        int k = totalElements;

        if (k % 2 == 0) {
            return (nums[k / 2] + nums[k / 2 - 1]) / 2.0;
        } else {
            return nums[k / 2];
        }
    }
};