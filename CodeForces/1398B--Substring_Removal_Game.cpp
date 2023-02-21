#include <iostream>
int main (void) {
    int t; std::cin >> t;
    while (t--) {
        std::string s; std::cin >> s;
        int a[100] = {0}, j=0;
        for (int i=0, x=0; s[i]!='\0'; i++) {
            if (s[i]=='1') {
                x++;
            } if (x!=0 && (s[i]=='0' || s[i+1]=='\0')) {
                a[j]=x;
                x=0;
                // insertion sort
                int t = a[j];
                int k = j-1;
                while (k>=0 && a[k] < t) {
                    a[k] = a[k] + a[k+1];
                    a[k+1] = a[k] - a[k+1];
                    a[k] = a[k] - a[k+1];
                    k--;
                }
                a[k+1] = t;
                j++;
            }
        }
        int m=0;
        for (int i=0; i<j; i++) {
            i%2? 0 : m+= a[i];
        }
        std::cout << m << std::endl;
    }
    return 0;
}
