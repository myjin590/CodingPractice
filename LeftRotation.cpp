//Q: A left rotation operation on an array of size N shifts each of the array's elements 1 unit to the left. 
//Given an integer, d, rotate the array that many steps left and return the result.


vector<int> rotateLeft(int d, vector<int> arr) {

    vector<int> result;
    for(int i=d; i<arr.size(); i++){
        result.push_back(arr[i]);
    }
  
    for(int i=0; i<d; i++){
        result.push_back(arr[i]);
    }
    
    return result;
}
