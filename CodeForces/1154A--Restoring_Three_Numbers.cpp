#include <iostream>
int main (void) {
    int x[4],a[3], z=-1;
    for (int i=0; i<4; i++) {
        std::cin >> x[i];
        x[i]>z? z=x[i] : 0;
    }
    for (int i=0, j=0; i<4; i++) {
        x[i]==z? 0 : a[j++]=z-x[i];
    }
    std::cout << a[0] << " " << a[1] << " " << a[2] << std::endl;
    return 0;
}
