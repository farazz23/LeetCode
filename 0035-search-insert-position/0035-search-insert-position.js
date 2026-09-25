/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var searchInsert = function(nums, target) {
    let low = 0;
    let high = nums.length;
    let mid;

    if(target > nums[high-1]) return high;

    while(low <= high){
        mid = Math.floor(low + (high - low)/2);

        if(nums[mid] === target) {
            return mid;
        }

        // search left half
        if(nums[mid] < target){
             low = mid+1;
        }
        // search right half
        else {
            high = mid-1;
        }
    }
    return low;
};