class Solution {
public:
    void sortColors(vector<int>& nums) {
        //0=red
        //1=white
        //2=blue
        //bubble sort
        for (int i = 0; i < nums.size() - 1; i++){ 
            for (int j = 0; j < nums.size()-i-1; j++) 
            {
                if (nums[j] > nums[j + 1]){
                    swap(nums[j], nums[j + 1]); 
                }  
            }
        } 
    }
};
