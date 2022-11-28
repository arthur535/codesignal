int solution(vector<int> arr) {
    const int size = arr.size();
    int count = 0;
    for(int i = 0; i < size-1; ++i){
        while(arr[i]- arr[i+1] >= 0){
            arr[i+1]++;
            count++;
        }
    }
    return count;
}
