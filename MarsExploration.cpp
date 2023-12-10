//Example: SOSSOT
//The original message was SOSSOS. Two of the message's characters were changed in transit.
//Returns: int: the number of letters changed during transmission

int marsExploration(string s) {
    int wrong = 0;

    for(unsigned int i=0; i<s.length(); i++){
        if(i%3 == 0){
            if(s[i] != 'S'){
                wrong++;
            }
        }
        else if(i%3 == 1)
        {
            if(s[i] != 'O'){
                wrong++;
                cout << i<<endl;
            }
        }
        else if(i%3 == 2)
        {
            if(s[i] != 'S'){
                wrong++;
            }
        }
    }
    
    return wrong;
    
}
