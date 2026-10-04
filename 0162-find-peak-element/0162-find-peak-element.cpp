class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int start=0;
        int mid;
        int end=nums.size()-1;
        while(start<end){
            mid=start+(end-start)/2;
            if(nums[mid]<nums[mid+1]){
                start=mid+1;
            }else if(nums[mid]>nums[mid+1]){
                end=mid;                
            }else{
                end=mid-1;                            
            }
        }
        return start;
    }
};
