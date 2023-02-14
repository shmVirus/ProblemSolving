#include <iostream>
int main (void) {
    int n;
    std:: cin >> n;
    std:: cout << n/2 << std:: endl;
    for (int i=1; i<n/2; i++) {
        std:: cout << "2 ";
    }
    if (n%2) std:: cout << "3\n";
    else std:: cout << "2\n";
    return 0;
}
