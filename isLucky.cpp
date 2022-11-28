bool solution(int n) {
    int tmp = n;
    int count = 0;
    int sum1 = 0;
    int sum2 = 0;
    if(count%2){return false;}
    while(tmp){
        count++;
        tmp /= 10;
    }
    for(int i = 0; i < count/2; ++i){
        sum1 += n%10;
        n /= 10;
    }
    while(n){
        sum2 += n%10;
        n/=10;
    }
    return (sum1 == sum2);
}
