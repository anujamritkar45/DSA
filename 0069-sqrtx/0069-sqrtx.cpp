class Solution {
public:
    int mySqrt(int x) {
        int start=0;
        int end=x;
        int ans=0;
         while(start<=end){
            long long int mid=(start+end)/2;
            if(mid*mid==x){
                return mid;
                break;
            }else if(mid*mid > x){
                end=mid-1;
            }else{
                ans=mid;
                start=mid+1;
            }
         }
          return ans;
    }
};