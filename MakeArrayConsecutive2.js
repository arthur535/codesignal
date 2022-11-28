function solution(statues) {
    let min = statues[0];
    let max = statues[0];
    for(let i = 0; i < statues.length; i++){
        if(min > statues[i]){
            min = statues[i];
        }
        if(max < statues[i]){
            max =  statues[i];
        }
    }
    return max-min+1-statues.length
}
