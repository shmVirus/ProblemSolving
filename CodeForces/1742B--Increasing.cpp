#include <iostream>
int main (void) {
    int t, n, a; std::cin >> t;
    while (t--) {
        std::cin >> n; int arr[n];
        bool in=true;
        for (int i=0; i<n; i++) {
            std::cin >> a;
            for (int j=i-1; j>=0 && in; j--) {
                if (arr[j] == a) {
                    in=false;
                    break;
                }
            }
            arr[i] = a;
        }
        std::cout << (in? "YES\n" : "NO\n");
    }
    return 0;
}
