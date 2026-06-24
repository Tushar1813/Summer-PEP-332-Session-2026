int count=0, maxCount=0;
for(int i: arr){
    if(i==1){
        count++;
        maxCount=max(maxCount,count);
    }
    else{
        maxCount=0;
    }
    return maxCount;
}
