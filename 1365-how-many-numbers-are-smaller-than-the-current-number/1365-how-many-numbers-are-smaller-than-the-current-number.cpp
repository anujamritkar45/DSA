class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int i=0;
        int j=0;
        vector<int> result(nums.size());
        for(int i=0;i<nums.size();i++){
            int index=0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]<nums[i]){
                 index++;   
                }
            }
            result[i]=index;
        }
    return result;
    }
};