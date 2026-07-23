// Count Valid Word Occurrences
// Difficulty: Medium
// https://leetcode.com/problems/count-valid-word-occurrences/

class Solution {
public:

    bool isLetter(char c){
        return c >= 'a' && c <= 'z';
    }
    
    vector<int> countWordOccurrences(vector<string>& chunks, vector<string>& queries) {
        string s = "";

        for(string &z : chunks){
            s+=z;
        }

        unordered_map<string,int> mp;
        string curr = "";

        int n = s.size();

        for(int i = 0; i < n; i++){
            char c = s[i];
            if(isLetter(c)){
                curr+=c;
            }
            else if(c == '-'){
                if(!curr.empty() && i+1 < n && isLetter(s[i+1])){
                    curr+='-';
                }
                else{
                    if(!curr.empty()){
                        mp[curr]++;
                    }
                    curr = "";
                }
            }
            else{
                if(!curr.empty()){
                    mp[curr]++;
                }
                curr = "";
            }
        }
        if(!curr.empty()){
            mp[curr]++;
        }
        vector<int> ans;

        for(string &q : queries){
            ans.push_back(mp[q]);
        }
        return ans;
    }
};