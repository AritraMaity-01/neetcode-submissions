class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=0,n=numbers.size(),r=n-1;
        vector<int>ans;
        while(l<r){
            if(numbers[l]+numbers[r]==target){
                ans.push_back(l+1);
                ans.push_back(r+1);
                l++;r--;
            }else if(numbers[l]+numbers[r]>target)r--;
            else l++;
        }
        return ans;
    }
};
