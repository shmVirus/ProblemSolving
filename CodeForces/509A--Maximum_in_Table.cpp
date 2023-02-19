#include <iostream>
int main (void) {
    int n;
    std::cin >> n;
    int a[n][n];
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            a[i][j] = !i|!j? 1 : a[i-1][j]+a[i][j-1];
        }
    }
    std::cout << a[n-1][n-1] << std::endl;
    /* // ans: (2n-2) C (n-1), because matrix is Pascal's Triangle
    int x=2*n-2, y=n-1;
    y > x-y? y=x-y : 0; // because C(n, r) == C(n, n - r)
    int ans = 1;
    for(int i=1; i<=y; i++) {
        ans *= x - y + i;
        ans /= i;
    }
    std::cout << ans << std::endl;*/
    return 0;
}
