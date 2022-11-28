int solution(vector<int> statues) {
    int min = statues[0];
    int max = statues[0];
    for(int i = 0; i < statues.size(); ++i){
        if(min > statues[i]){
            min = statues[i];
        }
        if(max < statues[i]){
            max = statues[i];
        }
    }
    return max - min + 1 - statues.size();
}
