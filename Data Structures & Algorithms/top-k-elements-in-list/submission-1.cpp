class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>freq(2002,0);
        for(int i=0;i<nums.size();i++){
            int idx=nums[i]+1000;
            freq[idx]++;
        }
        vector<int>ans;
        for(int i=0;i<k;i++){
            int big=0;
            for(int i=1;i<2002;i++){
                if(freq[big]<freq[i]){
                    big=i;
                }
            }
            freq[big]=0;
            ans.push_back(big-1000);
        }
        return ans;
        
    }
};
