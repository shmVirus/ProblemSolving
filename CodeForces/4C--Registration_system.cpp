#include <iostream>
#include <map>
int main (void) {
    int n; std::cin >> n;
    std::string s;
    std::map<std::string,int> u;
    for (int i=0; i<n; i++) {
        std::cin >> s;
        if(u[s]) {
            std::cout << s << u[s] << std::endl;
        } else {
            std::cout << "OK" << std::endl;
        }
        u[s]++;
    }
    return 0;
}
