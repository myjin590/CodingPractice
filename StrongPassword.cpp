//A:Louise joined a social networking site to stay in touch with her friends. 
//The signup page required her to input a name and a password. However, the password must be strong. 
//The website considers a password to be strong if it satisfies the following criteria:
//Its length is at least .
//It contains at least one digit.
//It contains at least one lowercase English character.
//It contains at least one uppercase English character.
//It contains at least one special character. The special characters are: !@#$%^&*()-+
//She typed a random string of length  in the password field but wasn't sure if it was strong. 
//Given the string she typed, can you find the minimum number of characters she must add to make her password strong?


int minimumNumber(int n, string password) {
   int num = 0;
   int low = 0;
   int up = 0;
   int ch = 0;
   for(int i=0; i<password.length(); i++){
       if(password[i] >= '0' && password[i] <='9') 
       {
            num = 1;
       }
       else if(password[i] >= 'a' && password[i] <='z'){
            low = 1; 
       }
       else if(password[i] >= 'A' && password[i] <='Z')
       {
            up = 1;  
       }
       else if(password[i] >= '!' && password[i] <='-'){
            ch = 1;   
       }
   }
  
  int miss = 4-(num+low+up+ch);
  int tmp = n + miss;
  if (tmp < 6) 
  {
      miss += (6 - tmp);
  }
  return miss;
}
