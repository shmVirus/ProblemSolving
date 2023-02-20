#include <iostream>
int main (void) {
    int a, b, c, d; std::cin >> a >> b >> c >> d;
    int x = a<c? (a<d? a : d) : (c<d? c : d);
    int s = 256*x;
    a -= x; c -= x; d -= x;
    s += a<b? 32*a : 32*b;
    std::cout << s << std::endl;
    return 0;
}
