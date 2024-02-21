string balancedSums(vector<int> arr) {
    int rightSum = accumulate(arr.begin(), arr.end(), 0);
    int leftSum = 0;
    
    for(int i=0; i<arr.size(); i++){
        rightSum -=arr[i];
        if(rightSum == leftSum){
            return "YES";
        }
        leftSum += arr[i];
    }
    return "NO";
}
