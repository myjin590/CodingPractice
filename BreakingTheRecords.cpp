vector<int> breakingRecords(vector<int> scores) {
    int min = scores[0];
    int max = scores[0];
    vector<int> count = {0,0};
    //count[0] = max, count[1] = min
    
    
    for(int i=1; i<scores.size(); i++){
        if(scores[i] < min){
           count[1] += 1; 
           min = scores[i];
        }
        if(scores[i] > max){
           count[0] += 1;
           max = scores[i];
        }
    }
    return count;

}
