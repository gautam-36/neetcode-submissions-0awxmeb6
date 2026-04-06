class Solution {
public:

    string findMatchingChars(string first, string second){
        string res = "";
        int i = 0;
        while(i<first.length() && i<second.length()){
            if(first[i]==second[i]){
                res+=first[i];
            }else{
                break;
            }
            i++;
        }
        return res;
    }
    string longestCommonPrefix(vector<string>& strs) {
        string longestCommonPrefix =  strs[0];

        for(int i = 1; i<strs.size();i++){
            longestCommonPrefix = findMatchingChars(longestCommonPrefix,strs[i]);
        }
        return longestCommonPrefix;
    }
};