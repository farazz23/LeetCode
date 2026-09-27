class Solution {
public:
    bool binarySearch(vector<int> arr, int target){
        int low = 0;
        int right = arr.size() -1;

        while(low <= right){
            int mid = low + (right - low) /2;

            if(arr[mid] == target) return true;
            else if(arr[mid] < target) low = mid + 1;
            else right = mid -1;
        }
        return false;
    }
    
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int> result;

        for(int i=0; i<nums1.size() ; i++){
            if(i > 0 && nums1[i] == nums1[i-1]){
                continue;
            }

            if(binarySearch(nums2, nums1[i])){
                result.push_back(nums1[i]);
            }
        }

        return result;
    }
};