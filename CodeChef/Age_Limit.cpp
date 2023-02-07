#include <iostream>
int main(void) {
	int t;
    std:: cin >> t;
    for (int i=0; i<t; i++) {
        int x, y, a;
        std:: cin >> x >> y >> a;
        if ( a>=x && a<y ) {
            std:: cout << "YES" << std:: endl;
        } else {
            std:: cout << "NO" << std:: endl;
        }
    }
    return 0;
}
