class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int i=0;
        int larger=0;
        vector<bool> result(candies.size());
        for(int i=0;i<candies.size();i++){
            if(larger<=candies[i]){
                larger=candies[i];
            }
        }
        for(int i=0;i<candies.size();i++){
         if(larger<=(candies[i]+extraCandies)){
                    result[i]=true;
         }else{
                    result[i]=false;
         }
        }
            
    return result;
    }
    
};