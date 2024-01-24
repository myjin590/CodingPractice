int birthdayCakeCandles(vector<int> candles) {
    sort(candles.begin(), candles.end());
    int max = candles[candles.size()-1]; //max
    int sum = 0;
    //find max
    for(int i=candles.size()-1; i>=0; i--){
        if(candles[i] == max){
            sum++;
        }
        else{
            break;
        }
    }
    return sum;
}
