#include <iostream>
int main (void) {
    long long int n, x, d, a=0;
    char o;
    std::cin >> n >> x;
    while (n-- > 0) {
        std::cin >> o >> d;
        if (o == '+') x += d;
        else if (o == '-') {
            if (d<=x) x -=d;
            else a++;
        }
    }
    std::cout << x << " " << a << std::endl;
    return 0;
}
