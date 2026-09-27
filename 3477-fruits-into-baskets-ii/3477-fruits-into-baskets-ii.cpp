class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int unplacedFruits = 0;

        for(int i=0 ; i< fruits.size(); i++){
            int placed = false;

            for(int j=0; j< baskets.size(); j++){
                if(fruits[i] <= baskets[j]) {
                    baskets[j] = 0;
                    placed = true;
                    break;
                }
            }

            if(!placed){
                unplacedFruits++;
            }
        }

        return unplacedFruits;
    }
};