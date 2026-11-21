class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size())return false;
        int n=s1.size(),m=s2.size();
        vector<int>freq(26,0);
        for(int i=0;i<n;i++){
            freq[(int)s1[i]-(int)'a']++;
        }
        int l=0,r=n-1;
        vector<int>check(26,0);
        for(int i=0;i<n;i++){
            check[(int)s2[i]-(int)'a']++;
        }
        while(r<m){
            if(freq==check)return true;
            check[(int)s2[l]-(int)'a']--;
            l++;r++;
            if(r==m)return false;
            check[(int)s2[r]-(int)'a']++;
        }

        return false;
    }
};
