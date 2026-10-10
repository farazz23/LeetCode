class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> result;

        if(n < 4) return result;

        // sorting element to implement the two pointer
        sort(nums.begin(), nums.end());

        //outer loop for the track of first element's index
        for(size_t i=0; i<n-3 ; ++i){
            // edge case for the duplicate element;
            if(i > 0 && nums[i] == nums[i-1]) continue;

            for(size_t j=i + 1; j<n-2; ++j){
            // edge case for the duplicate element;
                if(j> i+1 && nums[j] == nums[j-1]) continue;

                // initializing the two pointers
                int left = j+1;
                int right = n-1;
                
            //    traversing betweem the two pointer
                while(left < right){
                    long long sum =  (long long)nums[i] + nums[j] +
                                     nums[left] + nums[right];

                    if(sum == target){
                        result.push_back({
                            nums[i], nums[j], nums[left], nums[right]
                        });
                        ++left;
                        --right;

                        // skiping the duplicate element on left side
                        while(left< right && nums[left] == nums[left-1]){
                            ++left;
                        }

                        // skiping the duplicate element on right side
                        while(left < right && nums[right] == nums[right+1]){
                            --right;
                        }
                    }else if(sum < target){
                        ++left;
                    }else{
                        --right;
                    }

                }
            }
        }

        return result;

    }
};