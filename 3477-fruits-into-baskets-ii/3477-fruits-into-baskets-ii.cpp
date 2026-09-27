class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        const int n = fruits.size();
        int unplacedCount = 0;

        for (int i = 0; i < n; ++i) {
            const int currentFruit = fruits[i]; // Local variable caching
            bool placed = false;

            for (int j = 0; j < n; ++j) {
                if (baskets[j] >= currentFruit) {
                    baskets[j] = 0; // Mark basket as used
                    placed = true;
                    break;
                }
            }

            if (!placed) {
                unplacedCount++;
            }
        }

        return unplacedCount;
    }
};