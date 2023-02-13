#include <iostream>
int main (void) {
    std:: string s;
    std::getline(std::cin, s);
    for (int i=s.size()-2; i>=0; i--) {
        char c = s[i];
        if ( c >= 'a' && c <= 'z' || c>='A' && c<='z') {
            if ( c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='y' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U' || c=='Y' ) {
                std:: cout << "YES\n";
                break;
            } else {
                std:: cout << "NO\n";
                break;
            }
        }
    }
    return 0;
}
