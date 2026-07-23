// Process String with Special Operations I
// Difficulty: Medium
// https://leetcode.com/problems/process-string-with-special-operations-i/

class Solution {
public:

    string removelast(string &result){
        if(!result.empty()){
            result.pop_back();
        }
        return result;
    }

    string duplicate(string &result){
        if(!result.empty()){
            result.append(result);
        }
        
        return result;
    }

    string reversestring(string &result){
        if(!result.empty()){
            reverse(result.begin(), result.end());
        }
        return result;
    }

    string processStr(string s) {
        string result = "";

        for(int i=0; i<s.size(); i++){
            if(s[i] >= 'a' && s[i] <= 'z'){
                result.push_back(s[i]);
            }
            if(s[i] == '*'){
                removelast(result);
            }

            if(s[i] == '#'){
                duplicate(result);
            }

            if(s[i] == '%'){
                reversestring(result);
            }
        }
        return result;
    }
};