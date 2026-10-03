class Solution {
public:
    int FindFirst(vector<int>& nums, int target){
        int start=0;
        int mid;
        int end=nums.size()-1;
        int ans=-1;
        while(start<=end){
            mid=start+(end-start)/2;
            if(nums[mid]==target){
                ans=mid;
                end=mid-1;
            }else if(nums[mid]>target){
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        return ans;
    }
    int FindLast(vector<int>& nums, int target){
        int start=0;
        int mid;
        int end=nums.size()-1;
        int res=-1;
        while(start<=end){
            mid=start+(end-start)/2;
            if(nums[mid]==target){
                res=mid;
                start=mid+1;
            }else if(nums[mid]>target){
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        return res;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int ans=FindFirst(nums,target);
        int res=FindLast(nums,target);
        return {ans,res};         
    }    
};