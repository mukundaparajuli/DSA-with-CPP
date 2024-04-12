class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size() - 1;
        int mid = (e - s) / 2 + s;
        while (s <= e) {
            if (nums[mid] == target)
                return mid;
            if (nums[mid] < target) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
            mid = (e - s) / 2 + s;
        }
        return mid;
    }
};