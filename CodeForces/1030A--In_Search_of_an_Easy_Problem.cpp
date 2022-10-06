#include <iostream>
int main() {
    int n, x, r=0;
    std:: cin >> n;
    for (int i=0; i<n; i++) {
        std:: cin >> x;
        r += x;
        if(r==1) break;
    }
    if(r) std:: cout<< "HARD" << std:: endl;
    else std:: cout<< "EASY" << std:: endl;
    return 0;
}