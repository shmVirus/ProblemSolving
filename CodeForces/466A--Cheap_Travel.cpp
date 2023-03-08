#include <iostream>
int main (void) {
    int n, m, a, b; std::cin >> n >> m >> a >> b;
    int r = n>m? (a<=(float)b/m? n*a : (n%m==0? n/m*b : (n%m*a<=b ? (n/m*b)+(n%m*a) : (n/m+1)*b))) : (b<=n*a? b : n*a);
    std::cout << r << std::endl;
    return 0;
}
