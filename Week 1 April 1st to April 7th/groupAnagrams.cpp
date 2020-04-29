class Solution {
public:    
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        vector<string> listStr;

        for(int i=0; i<strs.size(); i++) {
            string s = strs[i];
            sort(s.begin(), s.end());

            auto pos = find(listStr.begin(), listStr.end(), s);

            if(pos != listStr.end()) {
                result[pos-listStr.begin()].push_back(strs[i]);
            }
            
            else {
                vector<string> temp;
                temp.push_back(strs[i]);
                result.push_back(temp);
                listStr.push_back(s);
            }
        }

        return result;
    }
};