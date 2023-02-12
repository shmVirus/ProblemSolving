#include <iostream>
int main (void) {
    int n, k, l, c, d, p, nl, np;
    std:: cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int tB = (k*l) / nl;    // possible toasts from bottles
    int tL = c*d;           // possible toasts from limes
    int tS = p/np;          // possible toasts from salt
    std:: cout << ((tB<tL)? (tB<tS? tB:tS) : (tL<tS? tL:tS))/n << std:: endl;
    return 0;
}
