function bonAppetit(bill, k, b) {
    let anna = 0;
    for(let i=0; i<bill.length; i++){
        if(i != k){
            anna += bill[i];
        }
    }
    
    if(anna/2 == b){
        console.log("Bon Appetit");
    }
    else{
        console.log(b-anna/2);
    }
}
