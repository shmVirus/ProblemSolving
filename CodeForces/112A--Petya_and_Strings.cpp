#include <iostream>
int main() {
    char a[105], b[105];
    scanf("%s %s", a, b);
    for(int i=0; a[i]!='\0'; i++) {
            if (a[i] >= 'A' && a[i] <= 'Z') {
            a[i] = a[i] + 32;
        }
        if (b[i] >= 'A' && b[i] <= 'Z') {
            b[i] = b[i] + 32;
        }
        if (a[i]<b[i]){
            std:: cout << "-1" << std:: endl;
            break;
        }
        else if (a[i]>b[i]) {
            std:: cout << "1" << std:: endl;
            break;
        }
        else if (a[i]==b[i]) {
            if (a[i+1]=='\0') {
                std:: cout << "0" << std:: endl;
            }
            continue;
        }
    }
    return 0;
}
