bool solution(int yourLeft, int yourRight, int friendsLeft, int friendsRight) {
    int yourmax = yourLeft;
    if(yourRight > yourLeft){yourmax = yourRight;}
    int friendsmax = friendsLeft;
    if(friendsRight > friendsLeft){friendsmax = friendsRight;}
    if((yourLeft+yourRight == friendsLeft+friendsRight) && friendsmax == yourmax){
        return true;
    }
    return false;
}
