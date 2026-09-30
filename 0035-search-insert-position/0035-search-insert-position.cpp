class Solution {
public:
    int searchInsert(vector<int>& nums, int target){
        int mid;
        bool found=false;
        int start=0;
        int end=nums.size() - 1;
        while(start<=end){
            int mid=(start+end)/2;
          if(nums[mid]==target){
            found=true;
            return mid;
          }else if(nums[mid]>target){
            end=mid-1;
          }else{
            start=mid+1;
          }
        }
        return start;
            
        
    }
};