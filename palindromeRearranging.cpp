bool solution(string str) {
    const int size = 26;
    int count[size] = { 0 };
    for (int i = 0; i <= str.size(); i++){
        count[str[i]-'a']++;
    }
    int odd = 0;
    for (int i = 0; i < 26; i++) {
        if (count[i] & 1){odd++;} 
        if (odd > 1){return false;}
    }
    return true;
}

