class Solution {
public:
    int sumBase(int n, int k) {
       int sum=0;
       int key=n;
       while(key!=0){
        sum=sum + key%k;
        key=key/k;
       }
    return sum; 
    }
};