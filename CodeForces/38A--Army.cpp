#include <iostream>
int main (void) {
    int n;
    std:: cin >> n;
    int d[n-1];
    for (int i=0; i<n-1; i++) {
        std:: cin >> d[i];
    }
    int a, b;
    std:: cin >> a >> b;
    int s=0;
    for (a; a<b; a++) {
        s += d[a-1];
    }
    std:: cout << s << std:: endl;
}
