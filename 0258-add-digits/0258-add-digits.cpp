class Solution {
public:
    int addDigits(int num) {
        int sum=0;
        int key=num;
        while(key!=0){
           sum=sum + key%10;
           key=key/10;           
        }
        if(sum>9){
           return addDigits(sum); 
        }
    return sum;
    }   
};