#include <iostream>
int main() {
    int a, b, c=0;
    std:: cin >> a >> b;
    while (a<=b) {
        a *= 3;
        b *= 2;
        c++;
        if (a>b) {
            break;
        }
    }
    std:: cout << c << std:: endl;
}
