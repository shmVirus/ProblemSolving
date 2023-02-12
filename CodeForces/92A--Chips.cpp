#include <iostream>
int main (void) {
    int n, m;
    std:: cin >> n >> m;
    int i=1;
    while ( m>=i ) {
        m -= i++;
        if (i>n) i=1;
    }
    std:: cout << m << std:: endl;
    return 0;
}
