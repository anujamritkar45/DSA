class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=1;
        int *slow=&nums[0];
        int *fast=&nums[1];
        while((fast - &nums[0]) < nums.size()){
         if(*fast!=*slow){
            slow++;
            *slow=*fast;
            n++;
         }
         fast++;
         
        }
    return n;
    }
};