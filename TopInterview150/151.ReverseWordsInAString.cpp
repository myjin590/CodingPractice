class Solution {
public:
    string reverseWords(string s) {
        string str = "";
        vector<string> st;
        for(int i=0; i<s.length(); i++){
            if(s[i] != ' ')
            {
                str += s[i];
            }
            if((s[i] == ' ' && str.length() != 0) || 
                (s[i] != ' ' && i == s.length()-1))
            {
                st.push_back(str);
                str = "";
            }
        }
    
        for(int i=st.size()-1; i>=0; i--){
            str += st[i];
            if(i != 0){
                str += ' ';
            }
        }
        return str;
    }
};
