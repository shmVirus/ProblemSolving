#include <iostream>
int main (void) {
    int k, r;
    std:: cin >> k >> r;
    for (int i=1; ; i++) {
        int s = k * i;
        if ( s%10 == r || s%10 == 0 ) {
            std:: cout << i << std:: endl;
            break;
        }
    }
    return 0;
}
