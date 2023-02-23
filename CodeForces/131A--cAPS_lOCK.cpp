#include <iostream>
int main (void) {
    std::string s; std::cin >> s;
    char b[100];
    bool org=false;
    for (int i=s.length()-1; i>=0; i--) {
        if (s[i]>='A' && s[i]<='Z') b[i] = s[i] + 32;
        if (s[i]>='a' && s[i]<='z' && i==0) b[i] = s[i] - 32;
        if (s[i]>='a' && s[i]<='z' && i!=0) {
            org = true;
            break;
        }
    }
    b[s.length()]='\0';
    std::cout << (org? s:b) << std::endl;
    return 0;
}
