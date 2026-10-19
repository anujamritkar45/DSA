class Solution {
public:
    int countDigits(int num) {
     int count=0;
     int dup=num;
     int val=0;
     while(dup!=0){
        val=dup%10;
        if(num%val==0){
            count++;
        }
        dup=dup/10;
     }
     return count;   
    }
};