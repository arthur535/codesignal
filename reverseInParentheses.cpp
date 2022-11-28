string solution(string str) {
   std::string s;
    int start = 0, end = 0;
    for(int i=0; i< str.size(); i++){
        
        if(str[i] == '(') {
            start = i;
        }
        if(str[i] == ')') {
            end = i;
            std::string sliced = str.substr (start+1, end-1-start);
            reverse(sliced.begin(), sliced.end());
            std::string r = str.substr(0, start) + sliced + str.substr(end+1);
            std::cout << r << " ";
            return solution(r);
            
        }

    }
    
    return str;
}
