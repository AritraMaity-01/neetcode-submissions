class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int st=0,end=0,n=s.size();
        if(n==0)return 0;
        int ans=1;
        unordered_map<char,bool>repeat;
        repeat[s[0]]=true;
        for(int i=1;i<n;i++){
            if(repeat[s[i]]){
                while(repeat[s[i]]){
                    repeat[s[st]]=false;
                    st++;
                }
            }
            end=i;
            repeat[s[end]]=true;
            ans=max(ans,1+end-st);
        }
        return ans;
    }
};
