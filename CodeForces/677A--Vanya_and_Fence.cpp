#include <iostream>
int main() {
    int n, h, a, r=0;
    std:: cin >> n >> h;
    for (int i=0; i<n; i++) {
        std:: cin >> a;
        if (h>=a) r++;
        else r += 2;
    }
    std:: cout << r << std:: endl;
    return 0;
}