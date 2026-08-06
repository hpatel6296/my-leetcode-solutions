class Solution {
public:
    int smallestNumber(int n, int t) {
     if(n == 0){
        return 0;
     }   
     if(t == 0){
        return 0;
     }
     if(t == 1){
        return n;
     }
     while(n < INT_MAX){
        int mul = 1;
        int i=n;
        while(i > 0){
            mul *= i%10;
            i = i/10;
        }
        if(mul % t == 0){
            return n;
        }
        n++;
     }
     return 0;
    }
};