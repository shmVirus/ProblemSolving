#include <iostream>
int main (void) {
    int t, a, b; std::cin >> t;
    while (t--) {
        std::cin >> a >> b;
        std:: cout << ( a<b? ((b-a)%2?"1":"2") : (a==b?"0": ((a-b)%2? "2":"1"))) << std::endl;
    }
    return 0;
}
