#include <iostream>
int main(void) {
    int n;
    std:: cin >> n;
    int x;
    std:: cin >> x;
    int sm=x, lr=x;
    int s=0;
    for (int i=1; i<n; i++) {
        std:: cin >> x;
        if ( x > lr ) {
            s++;
            lr = x;
        } else if ( x < sm ) {
            s++;
            sm = x;
        }
    }
    std:: cout << s << std:: endl;
    return 0;
}
