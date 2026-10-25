
class Solution {
public:
    int totalMoney(int n) {

        int sum = 0;
        int monday = 1;

        while(n > 0){

            int day = monday;

            for(int i = 1; i <= 7 && n > 0; i++){

                sum = sum + day;

                day++;
                n--;
            }

            monday++;
        }

        return sum;
    }
};
