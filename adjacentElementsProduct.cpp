int solution(vector<int> arr) {
    int max = arr[0] * arr[1];
    for(int i = 1; i < arr.size()-1; ++i){
        if(max <  arr[i] * arr[i+1]){
            max = arr[i] * arr[i+1]; 
       }
    }
    return max;
}
