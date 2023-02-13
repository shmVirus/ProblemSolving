#include <iostream>
#include <cmath>
int main (void) {
    int n;
    std:: cin >> n;
    int a[n];
    std:: cin >> a[0] >> a[1];
    int x=1, y=2;
    int d = abs(a[0]-a[1]);
    for (int i=2; i<n; i++) {
        std:: cin >> a[i];
        if ( abs(a[i]-a[i-1]) < d ) {
            d = abs(a[i]-a[i-1]);
            x = i;
            y = i+1;
        }
    }
    if ( abs(a[n-1]-a[0]) < d ) {
        x = n;
        y = 1;
    }
    std:: cout << x << " " << y << std:: endl;
    return 0;
}
