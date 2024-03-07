string superReducedString(string s) {
    int i =0;
    size_t current;
    size_t next;
    
    while(i < s.length()){
         current = i;
         next = i+1;
        if(s[current] == s[next]){
            s.erase(current, 2);
            i=0;
        }
        else{
            i++;
        }
    }
    if (!s.empty()){
        return s;
    }
    return "Empty String";
    
}
