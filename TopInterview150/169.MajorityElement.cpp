class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int mycount = 0;
        for(int i=0; i<nums.size(); i++){
            mycount = std::count(nums.begin(), nums.end(), nums[i]);
            if(mycount > (nums.size()/2)){
                return nums[i];
            }
        }
        return mycount;
    }
};
