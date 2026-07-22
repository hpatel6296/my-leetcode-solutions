class Solution {
public:
    double myPow(double x, int n) {
        return pow(x,n);
        /*
        if(n == 0){
            return 1;
        }
        if(x == 1){
            return 1;
        }
        if(x == 0){
            return 0;
        }
        double pow = 1;
        if(n > 0){
           for(int i=0;i<n;i++){
            pow *= x;
        }  
        }
        if(n < 0){
            if(n == INT_MIN){
                pow = 1/x;
                n = INT_MAX;
            }
            else{
            n = -n;
            }
            for(int i=0;i<n;i++){
                pow = pow/x;
            }
        }
        return pow;
        */
    }
};