// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        // so every number is in monotonic function, so we can apply the binary search here

        int low= 1;
        int high = n;
        int bad=-1;
        while(low <= high){
            int mid = low + (high - low ) / 2;

            if(isBadVersion(mid)){
                bad=mid;
                high = mid -1;
            }else{
                low = mid + 1;
            }
        }

        return bad;
    }
};