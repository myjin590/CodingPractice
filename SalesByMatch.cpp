//Q: There is a large pile of socks that must be paired by color. Given an array of integers representing the color of each sock, 
//determine how many pairs of socks with matching colors there are.
//example: n=7, ar = [1,2,1,2,1,3,2]
//There is one pair of color  and one of color . 
//There are three odd socks left, one of each color. The number of pairs is .

//Solutions
int sockMerchant(int n, vector<int> ar) {
    int pair = 0;
    
    sort(ar.begin(), ar.end());
    //sort-> 1,1,1,2,2,2,3

  for(int i=0; i < n; i++){
        if(ar[i] == ar[i+1]){
            //ar.erase(ar.begin()+i);
            pair++;
            i++;
        }
    }
    return pair;
}
