#include <iostream>
int main(){
    int n, a, b, c, x=0, y=0, z=0;
    std:: cin >> n;
    for (int i=0; i<n; i++) {
        std:: cin >> a >> b >> c;
        x += a;
        y += b;
        z += c;
    }
    if (x==0 && y==0 && z==0) {
        std:: cout << "YES" << std:: endl;
    }
    else {
        std:: cout << "NO" << std:: endl;
    }
    return 0;
}
