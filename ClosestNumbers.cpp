//Q:Sorting is useful as the first step in many different tasks. The most common task is to make finding things easier, but there are other uses as well.
//In this case, it will make it easier to determine which pair or pairs of elements have the smallest absolute difference between them.

//A:
vector<int> closestNumbers(vector<int> arr) {
    sort(arr.begin(), arr.end());

    vector<int> answer;
    int curdiff = abs(arr[0]-arr[1]);
    for(int i=0; i<arr.size(); i++){
        if(abs(arr[i]-arr[i+1]) <= curdiff){
            curdiff = abs(arr[i]-arr[i+1]);
        }
    }
    
    for(int i=0; i<arr.size(); i++){
        if(abs(arr[i]-arr[i+1]) == curdiff){
            answer.push_back(arr[i]);
            answer.push_back(arr[i+1]);
        }
    }
    return answer;
}
