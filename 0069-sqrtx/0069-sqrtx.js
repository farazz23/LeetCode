/**
 * @param {number} x
 * @return {number}
 */
var mySqrt = function(x) {
    if(x === 0 || x === 1) return x;

    let low= 1;
    let high = x;
    let mid = -1;

    while(low <= high){
        mid= Math.floor(low+(high-low) / 2)
        let sqrt = mid * mid;

        if(sqrt === x) return mid;
        if(sqrt < x){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }

    return high
};