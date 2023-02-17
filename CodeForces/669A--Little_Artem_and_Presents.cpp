#include <iostream>
int main (void) {
    int n;
    std::cin >> n;
    int s = n>2? (n%3? n/3*2+1 : n/3*2 ) : 1;
    std::cout << s << std::endl;
    return 0;
}
