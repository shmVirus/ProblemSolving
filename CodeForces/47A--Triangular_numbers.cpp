#include <iostream>
#include <cmath>
int main (void) {
    int Tn;
    std:: cin >> Tn;
    int n = (sqrt(8*Tn+1)-1)/2;
    if ( (n*(n+1))/2 == Tn) std:: cout << "YES\n";
    else std:: cout << "NO\n";
    return 0;
}
