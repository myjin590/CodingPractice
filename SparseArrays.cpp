vector<int> matchingStrings(vector<string> stringList, vector<string> queries) {
    
    vector<int> result;
    int count = 0;
    for(int i=0; i<queries.size(); i++){
        for(int j=0; j<stringList.size(); j++){
            if(stringList[j] == queries[i]){
                count++;
            }
        }
        result.push_back(count);
        count = 0;
    }
    return result;
}
