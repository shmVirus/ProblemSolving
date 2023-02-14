#include <iostream>
int main (void) {
    int n, k;
    std:: cin >> n >> k;
    int s = 0;
    int c = -1;
    for (int i=0; i<=n; i++) {
        s += 5*i;
        if ( s <= (240-k) ) {
            c = i;
        }
    }
    std:: cout << c << std:: endl;
    return 0;
}
