#include <iostream>
int main (void) {
    int n, d;
    std::cin >> n >> d;
    std::string s;
    int c=0, oc=0;
    for (int i=0; i<d; i++) {
        std::cin >> s;
        bool f = false;
        for (int j=0; s[j]!='\0'; j++) {
            if (s[j] == '0') {
                c++;
                f = true;
                break;
            }
        }
        if (!f) c = 0;
        if (c>oc) oc=c;
    }
    std::cout << oc << std::endl;
    return 0;
}
