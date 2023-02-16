#include <iostream>
int main (void) {
    int n;
    std::cin >> n;
    std::string s[n];
    bool a=false;
    for (int i=0; i<n; i++) {
        std::cin >> s[i];
        if (!a && (s[i][0]=='O' && s[i][1]=='O' || s[i][3]=='O' && s[i][4]=='O')) {
            a = true;
        }
    }
    if (!a) std::cout << "NO\n";
    else {
        std::cout << "YES\n";
        for (int i=0; i<n; i++) {
            if (a && (s[i][0]=='O' && s[i][1]=='O')) {
                std::cout << "++|" << s[i][3] << s[i][4] << std::endl;
                a = false;
                continue;
            } if (a && (s[i][3]=='O' && s[i][4]=='O')) {
                std::cout << s[i][0] << s[i][1] << "|++" << std::endl;
                a = false;
                continue;
            }
            std::cout << s[i] << std::endl;
        }
    }
    return 0;
}
