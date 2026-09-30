class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;

        while(left < right){
            const int mid = left + (right - left) / 2;

            // case 1: if right side element is smaller than the pivot
            if(nums[mid] > nums[right]) left = mid + 1;

            // case 2: if left side element is smaller than the pivot
            else if(nums[mid] < nums[right]) right = mid;

            // case 3: if both the side we have the smaller element than pivot
            else right--;
        }

        return nums[left];
    }
};