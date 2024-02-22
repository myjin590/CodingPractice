string gamingArray(vector<int> arr) {
    int index= 0;
    int num = 0;
    bool isGood = false;
    //bob  == odd
    //andy == even

    for(int i=0; i<arr.size(); i++){
        if(arr[i] > num){
            index++;
            num = arr[i];
        }
    }
    if(index % 2 == 0){
            return "ANDY";
        }
    return "BOB";
}

