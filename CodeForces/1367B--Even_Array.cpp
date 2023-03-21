#include <iostream>
int main (void) {
    int t, n, a; std::cin >> t;
    while (t--) {
        std::cin >> n; int e=0, o=0;
        for (int i=0; i<n; i++) {
            std::cin >> a;
            if (i%2==0 && a%2==1) e++;
            if (i%2==1 && a%2==0) o++;
        }
        std::cout << (e!=o? -1 : e) << '\n';
    }
    return 0;
}
