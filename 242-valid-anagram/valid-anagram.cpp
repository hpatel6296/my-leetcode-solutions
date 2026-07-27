class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        unordered_map<char,int> sString;
        unordered_map<char,int> tString;
        for(char c : s){
            sString[c]++;
        }
        for(char c : t){
            tString[c]++;
        }
        if(sString.size() != tString.size()){
            return false;
        }
        for(auto pair : sString){
            char key = pair.first;
            int value = pair.second;

            auto it = tString.find(key);
            if(it == tString.end() || it->second != value){
                return false;
            }
        }
        return true;
    }
};