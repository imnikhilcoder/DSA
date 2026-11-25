class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int s=accumulate(nums.begin(),nums.end(),0), l=0;
        for(int i=0;i<nums.size();i++){
            if(l==s-l-nums[i]) return i;
            l+=nums[i];
        }
        return -1;
    }
};