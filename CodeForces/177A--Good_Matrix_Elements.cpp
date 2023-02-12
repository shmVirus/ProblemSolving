#include <iostream>
int main(void) {
    int n, s=0;
    std:: cin >> n;
    int a[n][n];
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            std:: cin >> a[i][j];
            // m. diagonal || s. diagonal || middle row || middle column
            if ( i==j || i+j==n-1 || i == (n-1)/2 || j == (n-1)/2 ) {
                s += a[i][j];
            }
        }
    }
    std:: cout << s << std:: endl;
    return 0;
}
