class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
        //find num[i] from num
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i] == nums[j]){
                    nums.erase(nums.begin()+i);
                    j--;
                }
            }

        }
        return nums.size(); 
    }
};
