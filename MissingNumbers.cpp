vector<int> missingNumbers(vector<int> arr, vector<int> brr) {
    sort(brr.begin(), brr.end());
    sort(arr.begin(), arr.end());

    for(int i=0; i<arr.size(); i++){
        cout << "i : " << arr[i] << endl;
        auto it = find(brr.begin(), brr.end(), arr[i]);
        int index = it - brr.begin();
        if(it != brr.end()){//found
            brr.erase(brr.begin()+index);
        }
    }
    //only save unique elements
    std::set<int> missing {brr.begin(), brr.end()};
    vector<int> res;
    for(auto& i: missing){
        res.push_back(i);
    }
    return res;
}
