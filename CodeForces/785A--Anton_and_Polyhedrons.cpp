#include <iostream>
int main (void) {
    int n, a=0; std::cin >> n;
    while (n--) {
        std::string s; std::cin >> s;
        if (s=="Tetrahedron") a+= 4;
        else if (s=="Cube") a+= 6;
        else if (s=="Octahedron") a+= 8;
        else if (s=="Dodecahedron") a+= 12;
        else if (s=="Icosahedron") a+= 20;
    }
    std::cout << a << std::endl;
    return 0;
}
