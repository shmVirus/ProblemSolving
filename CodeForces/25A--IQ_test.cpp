#include <iostream>
int main (void) {
    int n; std::cin >> n;
    int a[n], iO=-1, iE=-1, cO=0, cE=0;
    for (int i=0; i<n; i++) {
        std::cin >> a[i];
        a[i]%2? (cO++, iO=i+1) : (cE++, iE=i+1);
    }
    std::cout << (cO<cE? iO : iE) << std::endl;
    return 0;
}
