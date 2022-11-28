bool solution(vector<int> a, vector<int> b) {
    int count = 0;
    for(int i = 0; i < a.size(); ++i){
        if(a[i] != b[i]){
            count++;
        }
    }
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    for(int i = 0; i < a.size(); ++i){
        if(a[i] != b[i]){
            return false;
        }
    }
    return !(count > 2);
}
