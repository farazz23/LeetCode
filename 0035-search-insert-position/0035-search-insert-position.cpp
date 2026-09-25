class Solution {
public:
    int searchInsert(vector<int>& nums, int target) { 
        int start = 0;
        int end = nums.size();
        int mid; 
        // if the targeted element is bigger than the last element of array than the last index is the answer.
        if(target > nums[end-1]) return end;

        while(start <= end){
            // calculating the mid index
            mid = start + (end - start) /2;

            // if the middle indexed element is the targated element
            if(nums[mid] == target){
                return mid;
            }

            // if the mid indexed element is smaller 
            if(nums[mid] < target){
                start = mid + 1; 
            }
            // if the mid indexed element is bigger 
            else{
                end = mid - 1;
            }
        }

        // if we traversed the whole array and didnt find the element then start index is the answer. 
        return start;
    }
};