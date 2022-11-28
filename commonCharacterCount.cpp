int solution(string s1, string s2) {
    int count = 0;
    int index;
    for (auto& c : s1) {
        index = s2.find(c);
        if (index != -1) {
            s2.erase(index, 1);
            count++;
        }
    }
    return count;
}
