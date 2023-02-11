#include <iostream>
#include <string>
int main(void) {
    int n;
    std:: cin >> n;
    std:: string str;
    std:: cin >> str;
    bool alphabets[26] = {false};
    for (int i=0; str[i]!='\0'; i++) {
        alphabets[tolower(str[i]) - 97] = true;
    }
    for (int i=0; i<26; i++) {
        if (alphabets[i]) continue;
        else {
            std:: cout << "NO\n";
            return 0;
        }
    }
    std:: cout << "YES\n";
    return 0;
}
