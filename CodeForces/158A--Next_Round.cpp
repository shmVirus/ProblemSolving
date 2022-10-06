#include <iostream>
int main() {
    int n, k, score[55], c=0;
    std:: cin >> n >> k;
    for(int i=0; i<n; i++) {
        std:: cin >> score[i];
    }
    k--;
    for(int i=0; i<n; i++){
        if (score[i] > 0 && score[i] >= score[k]){
            c++;
        }
    }
    std:: cout << c << std:: endl;
    return 0;
}
