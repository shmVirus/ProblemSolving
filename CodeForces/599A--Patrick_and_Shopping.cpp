#include <iostream>
int main (void) {
    int d1, d2, d3;
    std::cin >> d1 >> d2 >> d3;
    d1>d2? (d1=d1+d2, d2=d1-d2, d1=d1-d2) : 0;
    std::cout << d1+(d1+d2<d3? d1+d2:d3)+(d2<d3+d1? d2:d3+d1) << std::endl;
    return 0;
}
