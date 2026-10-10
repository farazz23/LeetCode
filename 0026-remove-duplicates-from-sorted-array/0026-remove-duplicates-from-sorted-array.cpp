class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();

        int low = 0;
        int high = 1;

        while(high < n){
            if(nums[low] == nums[high]){
                high++;
            }else{
                nums[low+1] = nums[high];
                low++;
                high++;
            }
        }

        return low + 1;
    }
};