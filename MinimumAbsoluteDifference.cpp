//Q:It should return an integer that represents the minimum absolute difference between any pair of elements.

//A:
int minimumAbsoluteDifference(vector<int> arr) {
   sort(arr.begin(), arr.end());
   int min = arr[0] - arr[1];
   min = abs(min);
   for(int i=0; i< arr.size(); i++){
       if(i!=arr.size()-1){
           int num = arr[i] - arr[i+1];
           if(abs(num) < min){
               min = abs(num);
           }
       }
   }
   return min;
}
