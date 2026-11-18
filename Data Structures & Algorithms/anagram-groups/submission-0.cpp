class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>store;
        vector<int>key(27,0);
        for(int i=0;i<strs.size();i++){
            for(int j=0;j<strs[i].size();j++){
                int idx=int(strs[i][j]-'a') +1;
                key[idx]++;
            }
            string place="";
            for(int k=1;k<27;k++){
                string pos="";
                while(key[k]>0){
                    pos+=('0'+ k);
                    key[k]--;
                }
                place+=pos;
            }
            store[place].push_back(strs[i]);
        }
        vector<vector<string>>ans;
        
        for(pair<string,vector<string>>ele:store){
           ans.push_back(ele.second);
        }
        return ans;
    }
};
