class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        if(nums.size() < 2) return {};
        unordered_map<int, int> table ;

        for(int i=0; i<nums.size() ; i++){
            const int complement = target - nums[i];

            // check if complement present in the hash table 
            if(table.count(complement)){
                return {i, table[complement] };
            }

            // storing the index value into the hash table
            table[nums[i]] = i;
        }

        return {};
    }
};