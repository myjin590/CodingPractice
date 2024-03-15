double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       
        vector<int> merged(nums1.size() + nums2.size());
        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), 
            merged.begin()); 
        int size = merged.size();

        if(size == 1){
            return merged[0];
        }
        
        double mid = 0;
        if(size %2 == 0){
            mid = (double(merged[size/2] + merged[(size/2)-1]))/2;
        }
        else{
            mid = merged[size/2];
        }
    return mid;
}
