class Solution {
private:
    bool binarySearch(vector<int>& arr, int target){
        int low = 0, high = arr.size() - 1;
        while(low <= high){
            const int mid = low + (high - low) / 2;
            if (arr[mid] == target) return true ;
            arr[mid] < target ? low= mid + 1 : high = mid-1 ;
        }
        return false;
    }
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        
        for(int elem: nums1){
            if(binarySearch(nums2, elem)){
                return elem;
            }
        }

        return -1;
    }
};