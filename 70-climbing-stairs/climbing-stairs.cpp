class Solution {
public:
    int climbStairs(int n) {
        vector<int> step = {1,2,3};
        if(n<3){
            return step[n-1];
        }
        for(int i=4;i<=n;i++){
            int x = step.size();
            int a = step[x-1] + step[x-2];
            step.push_back(a);
        }
        return step[n-1];
    }
};