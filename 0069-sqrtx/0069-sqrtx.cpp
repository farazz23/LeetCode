class Solution {
public:
    int mySqrt(int x) {
        if(x==0 || x==1) return x;

        int low = 1;
        int high = x;
        long long mid = -1;   

        while(low <= high){
            mid = low + (high- low) /2;

            long long sqrt = mid * mid;

            if(sqrt == x) return mid;

            if(sqrt < x){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }

    return high;
    }
};