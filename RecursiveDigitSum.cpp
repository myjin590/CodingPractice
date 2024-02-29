long getNumber(string s, int k){
    long sum = 0;
    for(int i=0; i<s.length(); i++){
            sum += s[i]-'0';
    }
    sum = (sum*k); //116;
    return sum;
}
int superDigit(string n, int k) {
   //string s = n;
   string s = "";

   long sum = getNumber(n, k);
   if(sum < 10){
       return sum;
   }
   else{
      s = to_string(sum);
      sum = 0;
   }
  
    bool isGood = false;
   
   //string to num
   while(!isGood){
       for(int i=0; i<s.length(); i++){
            sum += s[i]-'0';
       }
       if(sum < 10){
           return sum;
       }
       else{
           s = to_string(sum);
           sum = 0;
       }
   }
   return sum;
}
