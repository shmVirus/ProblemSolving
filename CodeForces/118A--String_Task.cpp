#include <iostream>
int main() {
    char str[105], tstr[105];
    int len=0, j=0;
    scanf("%[^\n]", str);
    for(int i=0; str[i]!='\0'; i++) {
        if (str[i]>=65 && str[i]<=90) {
            str[i] += 32;
        }
        if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='y' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='Y') {
            str[i] = '.';
        }
    }
    for (int i=0; str[i]!='\0'; i++) {
        if (str[i]!='.') {
            tstr[len] = str[i];
            len++;
        }
    }
    tstr[len]='\0';
    len *= 2;
    for (int i=0; i<len; i++) {
        if (i%2==0) {
            str[i] = '.';
        }
        else {
            str[i] = tstr[j];
            j++;
        }
    }
    str[len] = '\0';
    std:: cout << str << std:: endl;
    return 0;
}
