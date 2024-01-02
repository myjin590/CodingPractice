//Q: Given an array of bird sightings where every element represents a bird type id, 
//determine the id of the most frequently sighted type. If more than 1 type has been spotted that maximum amount, return the smallest of their ids.
//Solutions

int migratoryBirds(vector<int> arr) {
    //organize the most frequent num in array using map
    unordered_map<int, int> elements;
    for (int i = 0; i < arr.size(); i++) {
      elements[arr[i]]++;
    }
    //find the max count
    int max = 0;
    int number = -1;
    for(auto i : elements){
        //if it's first loop
        if(number == -1){
            max = i.second;
            number = i.first;
        }
        //if count is bigger than max
        else if(i.second > max){
            max = i.second;
            number = i.first;
        }
        //else if count is same with max
        else if( i.second == max){
            if(i.first < number){
                max = i.second;
                number = i.first;
            }
        }
       
    }
    return number;
}
