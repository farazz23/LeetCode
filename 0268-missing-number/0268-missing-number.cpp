class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sumOfNNUmber = n * (n+1) / 2;
        int sumofallNumber = 0;

        for(int i=0; i<n; i++){
            sumofallNumber+=nums[i];
        }

        return sumOfNNUmber - sumofallNumber;

    }
};