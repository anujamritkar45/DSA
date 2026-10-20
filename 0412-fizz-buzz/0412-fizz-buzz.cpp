class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> arr(n);
        int i=n;
        while(i>=1){
            if(i%5==0 && i%3==0){
                arr[i-1]="FizzBuzz";
            }
            else if(i%3==0){
                arr[i-1]="Fizz";
            }
            else if(i%5==0){
                arr[i-1]="Buzz";
            }
            else{
                arr[i-1]=to_string(i);
            }
            i--;
        }
    return arr;
    }
};