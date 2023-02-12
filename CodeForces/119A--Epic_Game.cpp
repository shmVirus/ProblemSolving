#include <iostream>
int main (void) {
    int a, b, n;
    std:: cin >> a >> b >> n;
    int w=-1;
    for (int i=0; n>0; i++) {
        int k = (i%2)? b:a;
        w = (i%2)? 1:0;
        for (int j=k; j>0; j--) {
            if (k%j==0 && n%j==0 && n>=j) {
                n -= j;
                break;
            }
        }
    }
    std:: cout << w << std:: endl;
    return 0;
}
