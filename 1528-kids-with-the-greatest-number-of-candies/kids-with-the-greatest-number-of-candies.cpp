class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxcandies=0;
        for(int c:candies){
            maxcandies=max(maxcandies,c);
        }
         vector<bool> result;
        for(int c:candies){
        result.push_back(c+ extraCandies >= maxcandies);
    }
    return result;
}
};