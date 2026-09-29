class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() -1;

        while(low <= high){ 
            const int mid = low + (high - low) / 2;

            if(nums[mid] == target) return mid;

            if(nums[low] <= nums[mid]){
                if(target >= nums[low] && target < nums[mid]){
                    high = mid - 1;    // Search Left
                }else{
                    low = mid + 1;      // Search Right
                }
            }else{
                if(target > nums[mid] && target <= nums[high]){
                    low = mid + 1 ;
                }else{
                    high = mid -1;
                }
            }
        }

        return -1;
    }
};