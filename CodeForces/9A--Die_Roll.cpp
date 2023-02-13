#include <iostream>
int main (void) {
    int y, w;
    std:: cin >> y >> w;
    int d = 6 - ( (y >= w)? y:w ) + 1;
    if (d == 1) std:: cout << "1/6\n";
    else if (d == 2) std:: cout << "1/3\n";
    else if (d == 3) std:: cout << "1/2\n";
    else if (d == 4) std:: cout << "2/3\n";
    else if (d == 5) std:: cout << "5/6\n";
    else if (d == 6) std:: cout << "1/1\n";
    return 0;
}
