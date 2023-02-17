#include <iostream>
int main (void) {
    int n;
    std::cin >> n;
    int a[n], index[n];
    std::cin >> a[0];
    index[0] = 1;
    for (int i=1, t; i<n; i++) {
        std::cin >> a[i];
        index[i] = i+1;
        t = a[i];
        int j = i-1;
        while (j>=0 && a[j]>t) {
            a[j] = a[j] + a[j+1];
            a[j+1] = a[j] - a[j+1];
            a[j] = a[j] - a[j+1];
            index[j] = index[j] + index[j+1];
            index[j+1] = index[j] - index[j+1];
            index[j] = index[j] - index[j+1];
            j--;
        }
        a[j+1] = t;
    }
    for (int i=0; i<n/2; i++) {
        std::cout << index[i] << " " << index[n-i-1] << std::endl;
    }
    return 0;
}
