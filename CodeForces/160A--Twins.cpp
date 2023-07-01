#include <iostream>
int main(void) {
    int n;
    std:: cin >> n;
    int a[n];
    int sum=0;
    for (int i=0; i<n; i++) {
        std:: cin >> a[i];
        sum += a[i];
        // insertion sort
        int t = a[i];
        int k = i-1;
        while (k>=0 && a[k] < t) {
            a[k] = a[k] + a[k+1];
            a[k+1] = a[k] - a[k+1];
            a[k] = a[k] - a[k+1];
            k--;
        }
        a[k+1] = t;
    }
    int me=0, mc=0;
    for (int i=0; i<n; i++) {
        me += a[i];
        if (me > sum - me) {
            mc = i+1;
            break;
        }
    }
    std:: cout << mc << std:: endl;
    return 0;
}
