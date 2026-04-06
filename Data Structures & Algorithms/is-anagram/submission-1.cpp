class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length()!=t.length()){
            return false;
        }
        unordered_map<char,int>mp;
        for(int i = 0;i<s.length();i++){
            mp[s[i]]++;
        }
        for(int i = 0; i<t.length();i++){

            // found first string char
            if(--mp[t[i]]<0){
              return false;
            }
        }
        return true;
    }
};
