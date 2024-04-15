vector<vector<int>> permute(vector<int>& nums) {
    
      vector<vector<int>> after;
      sort(nums.begin(), nums.end());

      do{
          after.push_back(nums);
      }while(std::next_permutation(nums.begin(),nums.end()));

      return after;
}
