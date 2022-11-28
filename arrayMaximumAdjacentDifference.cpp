int solution(vector<int> arr) {
    const int size = arr.size();
    int max = abs(arr[size-1] - arr[size-2]);
    for(int i = size-2; i >= 1; --i){
        if(abs(arr[i]- arr[i-1]) > max){
            max = abs(arr[i] - arr[i-1]);
        }
    }
    return max;
}
