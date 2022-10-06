#include <iostream>
int main() {
    int n;
    std:: cin >> n;
    if (n%2==0) {
        for (n; n>0; n--) {
            std:: cout << n;
            if (n!=1) {
                std:: cout << " ";
            }
            else {
                std:: cout << std:: endl;
            }
        }
    }
    else {
        std:: cout << "-1" << std:: endl;
    }
    return 0;
}
