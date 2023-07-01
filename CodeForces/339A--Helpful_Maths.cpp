#include <iostream>
int main() {
    char snum[105];
    int n=0, t=0, num[55];
    scanf("%s", snum);
    for(int i=0; snum[i]!='\0'; i++) {
        if (snum[i]>='0' && snum[i]<='9') {
            num[n] = snum[i] - 48;
            n++;
        }
    }
    for (int i=0; i<n; i++) {
        for(int j=n-1; j-i>=0; j--) {
            if (num[j]<num[j-1]) {
                int temp = num[j];
                num[j] = num[j-1];
                num[j-1] = temp;
            }
        }
    }
    for(int i=0; snum[i]!='\0'; i++) {
        if (snum[i]>='0' && snum[i]<='9') {
            snum[i] = num[t] + 48;
            t++;
        }
    }
    std:: cout << snum << std:: endl;
    return 0;
}
