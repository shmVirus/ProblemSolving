#include <iostream>
int main (void) {
    int n, m, c=0;
    std::cin >> n >> m;
    bool s[m] = {false};
    while (n--) {
        int x; std::cin >> x;
        while (x--) {
            int y; std::cin >> y;
            s[y-1] = true;
        }
    }
    for (int i=0; i<m; i++) {
        if (s[i]) c++;
    }
    c==m? std::cout << "YES\n" : std::cout << "NO\n";
    return 0;
}
