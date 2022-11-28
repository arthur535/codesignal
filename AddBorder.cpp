vector<string> solution(vector<string> picture) {
    int size = picture[0].size();
    string tmp = "";
    for(int i = 0; i < size; ++i){
        tmp.push_back('*');
    }
    picture.insert(picture.begin(),tmp);
    picture.push_back(tmp);
    for(int i = 0; i < picture.size(); ++i){
        picture[i].insert(0,"*");
        picture[i].push_back('*');
    }
    return picture;
}
