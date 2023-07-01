#include <iostream>
int main() {
    int n, cnt=0;
    char col[55];
    std:: cin >> n;
    scanf("%s", col);
    for (int i=0; col[i]!='\0'; i++) {
        if(col[i]==col[i+1]) {
            cnt++;
        }
    }
    std:: cout << cnt << std:: endl;
    return 0;
}
