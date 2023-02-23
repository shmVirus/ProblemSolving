#include <iostream>
int main (void) {
    long long int n, m, a, c=1, t=0; std::cin >> n >> m;
    for (int i=0; i<m; i++) {
        std::cin >> a;
        t += a>=c? a-c : (n+a)-c;
        c=a;
    }
    std::cout << t << std::endl;
    return 0;
}
