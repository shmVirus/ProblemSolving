#include <iostream>
int main(void) {
    int n;
    std:: cin >> n;
    if (n%2) {
        std:: cout << "9 " << n-9 << std:: endl;
    } else {
        std:: cout << "8 " << n-8 << std:: endl;
    }
    return 0;
}
