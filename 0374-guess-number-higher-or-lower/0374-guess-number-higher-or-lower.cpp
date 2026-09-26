/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int low = 1;
        int high = n;
        int mid = 0;
        int guessedValue = 0;

        while(low <= high){
            mid = low + (high - low) / 2;
            guessedValue = guess(mid);

            if(guessedValue == 0) return mid;
            else if(guessedValue == -1) high = mid - 1;
            else low = mid + 1;
        }

        return guessedValue;
    }
};