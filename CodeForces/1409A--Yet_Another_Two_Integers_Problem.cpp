#include <iostream>
int main() {
    int a,b,n, temp=0, t1;
    std:: cin >> n;
    for(int i=0; i<n; i++) {
        std:: cin >> a >> b;
        if (a > b) {
            temp = a - b;
        } else if (a < b) {
            temp = b - a;
        } else {
            temp = 0;
        }
        t1 = (temp+10-1)/10;
        std:: cout << t1 << std:: endl;
    }
    return 0;
}
