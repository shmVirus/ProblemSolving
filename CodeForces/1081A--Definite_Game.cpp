#include <iostream>
int main (void) {
    int v; std::cin >> v;
    // v%v-1 != 0 for any value of v for any v > 2; so it's always 1 or 2
    std::cout << (v==2? "2\n": "1\n");
    return 0;
}
