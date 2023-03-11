#include <iostream>
int main (void) {
    int n; std::cin >> n;
    double s=0;
    for (n; n>0; n--) {
        s += (double)1/n;
    }
    std::cout << s << std::endl;
    return 0;
}
