#include <iostream>
int main() {
    int levels;
    std:: cin >> levels;
    bool isCrossed[levels+1];
    for(int i=1; i<=levels; i++) {
        isCrossed[i]=false;
    }
    int x;
    std:: cin >> x;
    for(int i=1; i<=x; i++) {
        int t;
        std:: cin >> t;
        isCrossed[t] = true;
    }
    int y;
    std:: cin >> y;
    for(int i=1; i<=y; i++) {
        int t;
        std:: cin >> t;
        isCrossed[t] = true;
    }
    bool isWon = true;
    for(int i=1; i<=levels; i++) {
        if (!isCrossed[i]) {
            isWon = false;
            break;
        }
    }
    if (isWon) std:: cout << "I become the guy." << std:: endl;
    else std:: cout << "Oh, my keyboard!" << std:: endl;
    return 0;
}