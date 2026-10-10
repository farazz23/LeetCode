class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int maxCapacity = 0;
        int left = 0;
        int right = n - 1;

        while(left < right){
            const int breadth = right - left;
            const int length = min(height[left], height[right]);
            const int volume = length * breadth;
            
            maxCapacity = max(maxCapacity , volume);

            if(height[left] <= height[right]){
                left++;
            }else{
                right--;
            }
        }

        return maxCapacity;
    }
};