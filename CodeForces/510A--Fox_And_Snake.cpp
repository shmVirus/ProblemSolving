#include <iostream>
int main (void) {
    int n, m;
    std::cin >> n >> m;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=m; j++) {
            if (i%2) std::cout << "#";
            else {
                if (i%4==0 && j==1) std::cout << "#";
                else if (i%4!=0 && j==m) std::cout << "#";
                else std::cout << ".";
            }
        }
        std::cout << std::endl;
    }
    return 0;
}
