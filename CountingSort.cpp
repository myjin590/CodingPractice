vector<int> countingSort(vector<int> arr) {

  vector<int> result(100,0);

  for(int i : arr){
      result[i]++;
  }
  return result;

}
