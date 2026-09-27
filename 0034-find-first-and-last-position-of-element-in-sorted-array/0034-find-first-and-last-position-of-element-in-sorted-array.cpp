class Solution {
private:
    int leftSearch(vector<int>& nums, int size, int target){
        int low = 0 ;
        int high = size - 1;
        int answer = -1;

        while(low <= high){
            int mid = low + (high - low) / 2;
            
            if(nums[mid] == target){
                answer = mid;
                high= mid-1;
            }else if (nums[mid] < target) {
                low = mid + 1;
            }else{
                high = mid-1;
            }
        }

        return answer;
    }
    int rightSearch(vector<int>& nums, int size, int target){
        int low = 0 ;
        int high = size - 1;
        int answer = -1;

        while(low <= high){
            int mid = low + (high - low) / 2;
            
            if(nums[mid] == target){
                answer = mid;
                low = mid + 1;
            }else if (nums[mid] < target) {
                low = mid + 1;
            }else{
                high = mid-1;
            }
        }

        return answer;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       return {leftSearch(nums, nums.size(), target) , rightSearch(nums, nums.size(), target)};
    }
};