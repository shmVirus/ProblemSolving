#include <iostream>
int main() {
    int n, a,b,t=0, x=0;
    std:: cin >> n;
    for (int i=0; i<n; i++) {
        std:: cin >> a >> b;
        a = t - a;
        t = a + b;
        if (t>x) {
            x = t;
        }
    }
    std:: cout << x << std:: endl;
    return 0;
}
