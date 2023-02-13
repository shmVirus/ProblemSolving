#include <iostream>
#include <cmath>
int main (void) {
    int n, d;
    std:: cin >> n >> d;
    int a[n];
    for (int i=0; i<n; i++) {
        std:: cin >> a[i];
    }
    int c=0;
    for (int i=0; i<n-1; i++) {
        for (int j=i+1; j<n; j++) {
            if ( abs(a[i]-a[j]) <= d ) {
                c++;
            }
        }
    }
    std:: cout << 2*c << std:: endl;
    return 0;
}
