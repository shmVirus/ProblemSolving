#include <iostream>
#include <cmath>
int main(void) {
    long long int n, k;
    std:: cin >> n >> k;
    if (n%2) {
        if (k <= n/2+1) {
            std:: cout << 2*k-1 << std:: endl;
        } else {
            std:: cout << 2*k - n-1 << std:: endl;
        }
    } else {
        if (k <= n/2) {
            std:: cout << 2*k-1 << std:: endl;
        } else {
            std:: cout << 2*k - n << std:: endl;
        }
    }
    return 0;
}
