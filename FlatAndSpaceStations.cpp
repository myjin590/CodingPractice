int flatlandSpaceStations(int n, vector<int> c) {
   vector<int> dis;
   vector<int> getMin;
   for(int i=0; i<n; i++){
       for(int j=0; j<c.size(); j++){
         //find the distance from city to station
           int distance = abs(i-c[j]);
         //add value to vector
           getMin.push_back(distance);
       }
       // find the minimum value of the vector
       int min = *min_element(getMin.begin(), getMin.end());
       // add the min to distance vector
       dis.push_back(min);
       getMin.clear();
   }
   
   int max = 0;
   //find a max element from the distance vector
   max = *max_element(dis.begin(), dis.end()); 
   return max;
}
