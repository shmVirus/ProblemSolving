#include <iostream>
int main() {
    int i,j,n, c, d=0;
    std:: cin >> i >> j;
    std:: cout << i << " " << j << " ";
    if (i>j) {
        i = i+j;
        j = i-j;
        i = i-j;
    }
    for (i; i<=j; i++) {
        n = i;
        c = 0;
        while (n!=1) {
            if (n%2 != 0) {
                n = 3 * n + 1;
            } else {
                n = n / 2;
            }
            c++;
        }
        if (c>d) {
            d = c+1;
        }
    }
    std:: cout << d << std:: endl;
    return 0;
}
