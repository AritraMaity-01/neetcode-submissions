class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        if(n==0)return 0;
        vector<int>freq(26,0);
        int st=0,end=0,ans=1;
        freq[(int)s[0]-(int)'A']++;
        for(int i=1;i<n;i++){
            freq[(int)s[i]-(int)'A']++;
            end=i;
            int chance=(1+end-st)-*max_element(freq.begin(),freq.end());
            if(chance>k){
                while(chance>k){
                    freq[(int)s[st]-(int)'A']--;
                    st++;
                    chance=(1+end-st)-*max_element(freq.begin(),freq.end());
                }
            }
            ans=max(ans,(1+end-st));
        }
        return ans;

    }
};
