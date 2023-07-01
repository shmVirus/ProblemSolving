#include <iostream>
int main() {
    char userName[100];
    int length=0, duplicate=0;
    scanf("%s", userName);
    for(int i=0; userName[i]!='\0'; i++, length++) {
        for (int j=i+1; userName[j]!='\0'; j++) {
            if (userName[i] == userName[j]) {
                duplicate++;
                break;
            }
        }
    }
    if ((length-duplicate)%2==0) {
        std:: cout << "CHAT WITH HER!" << std:: endl;
    }
    else {
        std:: cout << "IGNORE HIM!" << std:: endl;
    }
    return 0;
}
