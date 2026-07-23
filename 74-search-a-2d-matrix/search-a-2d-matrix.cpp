class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       int r = matrix.size();
       int c = matrix[0].size();
       int i=0,j=0;
       if(r == 1 && c == 1){
           if(matrix[0][0] == target){
             return true;
             }
             else{
                return false;
             }  
        }

        while(i<r && j<c){
           if(target < matrix[i][0]){
               return false;
           }
           if(target == matrix[i][0] || target == matrix[i][c-1] || target == matrix[0][j] || target == matrix[r-1][j]){
            return true;
           }
           if(target > matrix[i][0] && target < matrix[i][c-1]){
               while(j<c){
                  if(target == matrix[i][j]){
                    return true;
                  }
                  else{
                    j++;
                  }
               }
           }
           
           i++;
       }
       return false;
    }
};