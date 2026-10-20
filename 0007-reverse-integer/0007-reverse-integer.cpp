class Solution {
public:
    int reverse(int x) {
       int dig=x;
       long int rev=0;
       while(x!=0){
        dig=x%10;
        rev=rev*10 + dig;
        x=x/10;
       }
       if(rev<=pow(2,31)-1 && rev>=-pow(2,31)){
        return rev;
       }else{
        return 0;
       }
    }
};