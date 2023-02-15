#include <iostream>
int main (void) {
    int n, c;
    std:: cin >> n >> c;
    int t[n];
    std:: cin >> t[0];
    int a=1;
    for (int i=1; i<n; i++) {
        std:: cin >> t[i];
        (t[i]-t[i-1] > c)? a=1 : a++;
    }
    std:: cout << a << std:: endl;
    return 0;
}
