// Using two set to find an rpeted DNA first store unique sequance and other store repeted string
class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {

        unordered_set<string> seen;
        unordered_set<string> repeted;

        for(int i=0;i<s.size();i++){
            string sub = s.substr(i,10);

            if(seen.count(sub)){
                repeted.insert(sub);
            }
            else{
                seen.insert(sub);
            }
        }
        return vector<string>(repeted.begin(),repeted.end());
    }
};