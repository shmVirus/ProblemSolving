#include <iostream>
int main (void) {
    int n, m, z;
    std:: cin >> n >> m >> z;
    int lcm = (n>m)? n:m;
    while (true) {
        if ( lcm%n==0 && lcm%m==0 ) break;
        lcm++;
    }
    std:: cout << ( z/lcm ) << std:: endl;
    return 0;
}
