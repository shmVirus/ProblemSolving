#include <iostream>
int main() {
    std:: string x;
    getline(std:: cin,x);
    int arr[26]={0}, s=0;;
    for(int i=0; x[i]!='\0'; i++) {
        if (x[i]>='a' && x[i]<='z') {
            arr[x[i]-'a'] = 1;
        }
    }
    for (int i=0; i<26; i++) {
        s += arr[i];
    }
    std:: cout << s << std:: endl;
    return 0;
}