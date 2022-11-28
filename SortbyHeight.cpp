vector<int> solution(vector<int> vec) {
    for (int i = 0; i < vec.size() - 1; ++i) {
        int min_index = i;
        for (int j = i + 1; j < vec.size(); ++j) {
            if(vec[j] == -1){continue;}
            if (vec[j] < vec[min_index]) {
                min_index = j;
            }
        }
        if (min_index != i) {
            std::swap(vec[min_index], vec[i]);
        }
    }
    return vec;
}
