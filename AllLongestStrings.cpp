vector<string> solution(vector<string> vec) {
    int size_max = vec[0].size();
    for(int i = 1; i < vec.size(); ++i){
        if(vec[i].size() > size_max){
            size_max = vec[i].size();
        }
    }
    std::vector<string> vec1;
    for(int i = 0; i < vec.size(); ++i){
        if(vec[i].size() == size_max){
            vec1.push_back(vec[i]);
        }
    }
    return vec1;
}
