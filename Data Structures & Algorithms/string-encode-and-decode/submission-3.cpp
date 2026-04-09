class Solution {
public:

    string encode(vector<string>& strs) {

    if(strs.size()==0) return "0S";
        string encodedString = "";
        for(int i = 0; i<strs.size();i++){
            encodedString += strs[i];
            if(i<strs.size()-1){
                encodedString +="&G";
            }
        }
        return encodedString;
    }

    vector<string> decode(string s) {

        if(s.length()==2 && s[0]=='0' && s[1]=='S')return {};
        // cout<<s;
        vector<string>ans;
        string temp = "";
        for(int i =0; i<s.length();i++){
            
            if(s[i]=='&' && s[i+1]=='G'){
                ans.push_back(temp);
                temp = "";
                i++;
            }else{
                temp +=s[i];
            }
           
        }
        ans.push_back(temp);
        return ans;
    }
};
