class Solution {
public:
    bool isPalindrome(int x) {
        long int rev=0;
        int dig=x;
        int var=x;
        if(x<0){
            return false;
        }
        while(x!=0){
            dig=x%10;
            rev=rev*10+dig;
            x=x/10;
        }
        if(var==rev){
            return true;
        }else{
            return false;
        }
    }
};