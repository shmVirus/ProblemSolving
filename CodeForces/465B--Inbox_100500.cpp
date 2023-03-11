#include <iostream>
int main (void) {
    int n, a=-1, b, s=0; std::cin >> n;
    while (n--) {
        std::cin >> b;
        if (b==1 && s==0 || b==1 && a==1) s++;
        else if (b==1 && a==0) s+=2;
        a=b;
    }
    std::cout << s << std::endl;
    return 0;
}
