#include <iostream>
int main (void) {
    int n, e, p=0, c=0; std::cin >> n;
    while (n--) {
        std::cin >> e;
        e!=-1? p+=e : (p>0? p-- : c++);
    }
    std::cout << c << std::endl;
    return 0;
}
