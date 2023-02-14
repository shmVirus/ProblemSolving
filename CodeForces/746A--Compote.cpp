#include <iostream>
int main (void) {
    int a, b, c;
    std:: cin >> a >> b >> c;
    int nc = (a/1 < b/2)? ((a/1 < c/4)? a/1:c/4)  : ((b/2 < c/4)? b/2:c/4);
    std:: cout << 1*nc+2*nc+4*nc << std:: endl;
    return 0;
}
