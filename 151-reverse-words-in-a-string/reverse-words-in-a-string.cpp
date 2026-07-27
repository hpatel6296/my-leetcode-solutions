class Solution {
public:
    string reverseWords(string s) {
       int i=0;
       int n=s.length();
       vector<string> ans;
       while(i<n){
         while (i < n && s[i] == ' ' ) {
                i++;
            }
          string a="";
          while(i<n && s[i] != ' '){
              a += s[i];
              i++;
          }
          if(!s.empty()){
             ans.push_back(a);
          }
       } 
       if(s.empty()){
        return "";
       }
       string an = "";
       int x = ans.size()-1;
       while(ans[x].empty()){
          x--;
       }
       while(x>0){
          an += ans[x]+" ";
          x--;   
       }
       an += ans[0];
       return an;
    }
};