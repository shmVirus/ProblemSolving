#include <iostream>
int main (void) {
    int t, n, a; std::cin >> t;
    while (t--) {
        std::cin >> n;
        int p[n]; bool b[n]={false};
        for (int i=0, j=0; i<2*n; i++) {
            std::cin >> a;
            b[a-1]? 0 : (p[j++]=a, b[a-1]=true);
        }
        for (int i=0; i<n; i++) {
            std::cout << p[i];
            std::cout << (i+1==n? "\n" : " ");
        }
    }
    return 0;
}
