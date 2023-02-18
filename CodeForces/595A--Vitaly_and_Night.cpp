#include <iostream>
int main (void) {
    int n, m, c=0, a,b;
    std::cin >> n >> m;
    while (n--) {
        for (int i=0; i<m; i++) {
            std:: cin >> a >> b;
            a||b ? c++ : 0;
        }
    }
    std::cout << c << std::endl;
    return 0;
}
