#include <iostream>
int main() {
    int n, c=0;
    std:: cin >> n ;
    for(int i=0; i<n; i++) {
        int team[3];
        for(int j=0; j<3; j++) {
            std:: cin >> team[j];
        }
        if(team[0]+team[1]+team[2]>=2) {
            c++;
        }
    }
    std:: cout << c << std:: endl;
    return 0;
}
