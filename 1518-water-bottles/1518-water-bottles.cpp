class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
       int count=numBottles;
       int bottle=numBottles;
       while(bottle>=numExchange){
        count=count+bottle/numExchange;
        bottle=bottle-numExchange*(bottle/numExchange)+bottle/numExchange;
       }
    return count;
    }
};