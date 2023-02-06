#include <iostream>
int main(void) {
    int t;
    std:: cin >> t;
    for (int i=0; i<t; i++) {
        int n;
        std:: cin >> n;
        int arr[n];
        for (int j=0; j<n; j++) {
            std:: cin >> arr[j];
        }
        int index=0;
        for (int j=1; j<n-1; j++) {
            if (arr[j-1] != arr[j] && arr[j-1] == arr[j+1]) {
                //value = arr[j];
                index = j;
            } else if (arr[j-1] == arr[j] && arr[j-1] != arr[j+1]) {
                //value = arr[j+1];
                index = j+1;
            }
        }
        std:: cout << ++index << std:: endl;
    }
    return 0;
}
