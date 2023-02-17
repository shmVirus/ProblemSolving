#include <iostream>
int main (void) {
    int n, c;
    std::cin >> n >> c;
    int p[n], t[n];
    int l=0,r=0;
    for (int i=0; i<n; i++) {
        std::cin >> p[i];
    }
    for (int i=0, x=0, s=0; i<n; i++) {
        std::cin >> t[i];
        x += t[i];
        s = p[i] - c * x;
        l += (s>0? s:0);
    }
    for (int i=n-1, x=0, s=0; i>=0; i--) {
        x += t[i];
        s = p[i] - c * x;
        r += (s>0? s:0);
    }
    l>r? std::cout << "Limak\n" : (r>l? std::cout << "Radewoosh\n" : std::cout << "Tie\n");
    return 0;
}
