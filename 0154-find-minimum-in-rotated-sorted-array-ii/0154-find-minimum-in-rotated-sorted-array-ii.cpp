class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];

        int left = 0;
        int right = nums.size() - 1;
        int smallestElem = INT_MAX;

        while(left < right){
            const int mid = left + (right - left) / 2;

            // if Left element is smaller
            if(nums[mid] > nums[right]) left = mid + 1;

            // if right element id smaller
            else if(nums[mid] < nums[right]) right = mid;

            // (The Duplicate Case)
            else right--;
        }

        return nums[left];
    }
};