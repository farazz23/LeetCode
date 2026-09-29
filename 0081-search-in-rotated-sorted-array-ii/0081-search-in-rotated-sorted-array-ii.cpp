class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() -1;

        while(low <= high){
            const int mid = low + (high - low) / 2;

            // Found the target
            if(nums[mid] == target) return true;

            // Duplicats element at left, mid, and right 
            if(nums[low] == nums[mid] && nums[mid] == nums[high]){
                ++low;
                --high;
            }
            // Left half is normally sorted
            else if(nums[low] <= nums[mid]){
                if(target >= nums[low] && target < nums[mid]){
                    high = mid - 1; //search left part
                }else{
                    low = mid + 1;  // search right part
                }
            // Right half is normally sorted
            }else{
                if(target > nums[mid] && target <= nums[high]){
                    low = mid + 1; //search right part
                }else{
                    high = mid - 1; //search left part
                }
            }
        }

        return false;
    }
};