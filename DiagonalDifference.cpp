//Diagonal Difference
//Q.Return the absolute difference between the sums of the matrix's two diagonals (left-right) as a single integer.


int diagonalDifference(vector<vector<int>> arr) {
    int row = arr.size();
    int left = 0;
    int right = 0;
    
    for(int i=0; i<row; i++){
            for(int y = 0; y<row; y++){
                if(i == y){
                    left += arr[i][y];
                }
                if(i+y == row - 1){
                    right += arr[i][y];
                }
            }
    }
    
    return abs(left - right);
}
