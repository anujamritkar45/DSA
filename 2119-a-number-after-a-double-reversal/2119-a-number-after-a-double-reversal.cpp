class Solution {
public:
    bool isSameAfterReversals(int num) {
        while(num>0){
         if(num%10==0){
            return false;
         }else{
            return true;
         }
        }
        return true;
    }
};