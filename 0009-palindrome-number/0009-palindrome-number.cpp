class Solution {
public:
    bool isPalindrome(int x) {
        long int rev=0;
        int dig=x;
        if(x<0 || (x!=0 && x%10==0)){
            return false;
        }
        while(dig!=0){
            rev=rev*10+dig%10;
            dig=dig/10;
        }
        if(x==rev){
            return true;
        }
        return false;
    }
};