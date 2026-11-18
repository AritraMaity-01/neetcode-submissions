class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>pos(nums.begin(),nums.end());
        
        int ans=0;
        for(int ele:pos){
            if(!pos.count(ele-1)){
                int curr=ele;
                int curr_size=1;
                while(pos.count(curr+1)){
                    curr=curr+1;
                    curr_size++;
                }
                ans=max(ans,curr_size);
            }
        }
        return ans;

    }

    
};
