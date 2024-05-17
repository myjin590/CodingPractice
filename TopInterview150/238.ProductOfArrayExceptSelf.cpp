vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> answer;
        int total = 1;
        for(int i=0; i<nums.size(); i++){
            for(int j=0; j<nums.size(); j++){
                if(j!=i){
                    total *= nums[j];
                }
            }
            answer.push_back(total);
            total = 1;
        }
        return answer;
}
