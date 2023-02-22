#include <iostream>
int main (void) {
    std::string s; std::cin >> s;
    bool output = false;
    for (int i=0; s[i]!='\0'; i++) {
        if (s[i]=='H' || s[i]=='Q' || s[i]=='9') {
            output = true;
            break;
        }
    }
    std::cout << (output? "YES\n" : "NO\n");
    return 0;
}
