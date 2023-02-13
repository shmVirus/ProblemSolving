#include <iostream>
#include <cmath>
int main (void) {
    int n;
    std:: cin >> n;
    for (int m=1; m<=10^3; m++) {
        int x = n*m+1;
        int y = sqrt(x);
        if (x == y*y) {
            std:: cout << m << std:: endl;
            break;
        }
    }
    return 0;
}
