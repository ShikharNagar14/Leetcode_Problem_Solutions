class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>>s;
        vector<vector<int>>v;
        for(int i=0;i<nums.size();i++){
            int l=i+1;
            int r=nums.size()-1;
            while(l<r){
                int sum=nums[i]+nums[l]+nums[r];
                if(sum==0){
                   s.insert({nums[i],nums[l],nums[r]});
                   l++;
                   r--;
                   
                }
                else if(sum<0){
                    l++;
                }
                else{
                    r--;
                }
            }
        }
        for(auto triplets:s){
            v.push_back(triplets);
        
        }return v;
        
    }
};
