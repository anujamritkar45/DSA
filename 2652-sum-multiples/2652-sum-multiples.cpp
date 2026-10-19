class Solution {
public:
    int sumOfMultiples(int n) {
        int sum=0;
        int key=1;
        while(key<=n){
            if(key%3==0||key%5==0||key%7==0){
                sum=sum+key;
            }
            key++;
        }
    return sum;
    }
};