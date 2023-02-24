#include <iostream>
int main (void) {
    int t, r; std::cin >> t;
    while(t--) {
        std::cin >> r;
        if(r>=1900) {
            std::cout << "Division 1\n";
        } else if(r>=1600 && r<=1899) {
            std::cout << "Division 2\n";
        } else if(r>=1400 && r<=1599) {
            std::cout << "Division 3\n";
        } else if(r<=1399) {
            std::cout << "Division 4\n";
        }
    }
    return 0;
}
