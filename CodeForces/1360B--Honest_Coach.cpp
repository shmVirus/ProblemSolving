#include <iostream>
int main (void) {
    int t, n; std::cin >> t;
    while (t--) {
        std::cin >> n; int s[n];
        for (int i=0; i<n; i++) {
            std::cin >> s[i];
            // insertion sort
            int t = s[i];
            int k = i-1;
            while (k>=0 && s[k] > t) {
                s[k] = s[k] + s[k+1];
                s[k+1] = s[k] - s[k+1];
                s[k] = s[k] - s[k+1];
                k--;
            }
            s[k+1] = t;
        }
        int d = s[1]-s[0];
        for (int i=2; i<n; i++) {
            s[i]-s[i-1]<d? d = s[i]-s[i-1] : 0;
        }
        std::cout << d << std::endl;
    }
    return 0;
}