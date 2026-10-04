class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int *slow=&nums[0];
        int *fast=&nums[1];
        while((fast-&nums[0])<nums.size()){
            if(*slow==0){
             if(*fast!=0){
                *slow=*fast;
                *fast=0;
                slow++;
             }         
             fast++;
            }
            else{
                slow++;
                fast++;
            }
        }
        
    }
   
};