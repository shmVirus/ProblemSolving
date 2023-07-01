#include <iostream>
int main() {
    int n,m, a;
    std:: cin >> n >> m >> a ;
    std:: cout << ((n+a-1LL)/a)*((m+a-1)/a) << std:: endl;
    return 0;
}