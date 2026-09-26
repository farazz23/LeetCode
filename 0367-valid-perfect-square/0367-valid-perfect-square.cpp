class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num == 0 || num == 1) return true;

        int low = 1;
        int high = num;
        long long mid= 0;


        while(low <=high){
            long long mid = low + (high - low) / 2;
            long long sqrt = mid * mid;

            if(sqrt == num) return true;
            else if(sqrt > num) high = mid - 1;
            else low = mid + 1;
        }


        return false;
    }
};