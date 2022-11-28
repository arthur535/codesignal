function solution(year) {
    if(year/100 == Math.floor(year/100)){
        return Math.floor(year/100);
    }
    return Math.floor(year/100) + 1;
}
