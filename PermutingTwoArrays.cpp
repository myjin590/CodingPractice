//There are two -element arrays of integers,  and . Permute them into some and  such that the relation  holds for all  where .
//There will be  queries consisting of , , and . For each query, return YES if some permutation ,  satisfying the relation exists. Otherwise, return NO.

string twoArrays(int k, vector<int> A, vector<int> B) {
    
   sort(A.begin(), A.end());
   sort(B.begin(), B.end(), greater<int>());
   string result = "";
   for(unsigned int i=0; i<A.size(); i++){
       if(A[i] + B[i] < k){
           result = "NO";
           break;
       }
       else{
           result = "YES";
       }
   }
   return result;
}
