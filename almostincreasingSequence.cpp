bool solution(vector<int> sequence) {
    if (sequence.size() == 2) {return true;}
    int countOne = 0;
    int countTwo = 0;
    for (int i = 0; i < sequence.size() - 1; i++) {
       if (sequence[i] >= sequence[i+1]) {
           countOne++;
       }
       if(i != 0) {
           if (sequence[i - 1] >= sequence[i + 1]) {
               countTwo++;
           }
       }
    }
    
    if (countOne == 1 && countTwo <= 1) {
        return true;
    } else {
        return false;
    }
}
