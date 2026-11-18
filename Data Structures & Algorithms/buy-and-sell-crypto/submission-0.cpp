class Solution {
public:
   int maxProfit(vector<int>& prices) {
        int buy=prices[0],sell=prices[0],n=prices.size();
        int pro=0;
        for(int i=1;i<n;i++){
            sell=prices[i];
            if(sell<buy)buy=sell;
            pro=max(pro,sell-buy);
        }
        return pro;
    }
};
