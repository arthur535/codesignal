vector<int> solution(vector<int> a) {
    int sum_of_even = 0;
    int sum_of_odd = 0;
    for(int i = 0; i < a.size(); ++i){
        if(i%2 == 0){
            sum_of_even += a[i];
        }
        else{sum_of_odd+=a[i];}
    }
    a.clear();
    a.push_back(sum_of_even);
    a.push_back(sum_of_odd);
    return a;
}
