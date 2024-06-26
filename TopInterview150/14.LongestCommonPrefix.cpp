class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string first = strs[0];
        string answer = "";
        bool isGood = true;
        if(strs.size() <= 1) {
            return strs[0];
        }
     a  for(int i=0; i<first.length(); i++){
            if(isGood == false){
                break;
            }
            for(int j=1; j<strs.size(); j++){
                if(strs[j][i] != first[i]){
                    isGood = false;
                    break;
                }
                else if((strs[j][i] == first[i]) &&(j == strs.size()-1)) {
                    answer += first[i];
                }
            }
        }
        return answer;
    }
};
