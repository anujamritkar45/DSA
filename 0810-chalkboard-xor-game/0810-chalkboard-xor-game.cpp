class Solution {
public:
    bool xorGame(vector<int>& nums) {
        int xorSum = 0;
        
        for(int i = 0; i < nums.size(); i++){
            xorSum = xorSum ^ nums[i];
        }

        if(xorSum==0||nums.size() % 2 == 0){
            return true;
        }
    return false;
    }
};