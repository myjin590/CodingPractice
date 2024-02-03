string timeInWords(int h, int m) {
    string str = "";
    string min = "";
    string hour= "";
    string answer = "";
    vector<string> time = {"one","two","three","four","five","six","seven","eight","nine", "ten", "eleven","twelve","thirteen","fourteen","quarter","sixteen","seventeen","eighteen","nineteen","twenty","twenty one","twenty two","twenty three","twenty four","twenty five","twenty six","twenty seven",
    "twenty eight","twenty nine", "half"};
    

    
    if(m == 00){
        hour = time[h-1];
        str = "o' clock";
        answer = hour + " " + str;
    }
    
    else if(1 <= m && m <= 30){
        hour = time[h-1]; //5
        min = time[m-1]; //half
        if(m == 01){
            str = " minute past";
        }
        else if(m == 15 || m == 30){
            str = " past";
        }
        else{
            str = " minutes past";
        }
        answer = min + str + " " + hour;
    }
    
    else if(30 < m){
        if (m==45){
            str = " to ";
        }  
        else{
            str = " minutes to ";
        }  
        hour = time[h];
        int tempMin = 60-m;
        min = time[tempMin-1]; //quarter
        answer = min + str + hour;
        
    }
    return answer;
}
