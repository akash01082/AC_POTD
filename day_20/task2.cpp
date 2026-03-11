

class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int maxBottles=numBottles;
        int emptyBottles=numBottles;
        while(emptyBottles/numExchange > 0){
            maxBottles+=(emptyBottles/numExchange);
            emptyBottles= (emptyBottles/numExchange) + (emptyBottles%numExchange);
        }
        return maxBottles;
    }
};