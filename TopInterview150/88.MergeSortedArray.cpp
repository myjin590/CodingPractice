class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //delete element from n+1 to end
        nums1.erase(nums1.begin()+m, nums1.end());
        //adding nums2 to nums1
        for(int i=0; i<n; i++){
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(), nums1.end());
    }
};
