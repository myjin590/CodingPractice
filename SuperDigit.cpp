int superDigit(string n, int k) {
    string num = n;
    int sum = 0;
    
    //get final string 
    for(int i=1; i<k; i++){
        num += n;
    }
    bool isGood = false;
    while(!isGood){
        for(int i=0; i<num.length(); i++){
            string temp = "";
            temp+= num[i];
            int add = stoi(temp);
            sum += add;
        }
        if(sum < 10){
            isGood = true;
        }
        else{
            num = to_string(sum);
            sum = 0;
        }
    }
    return sum;
}

//it doesn't pass all test cases though. There's Time limit exceeded error for 4 of 10 cases.
