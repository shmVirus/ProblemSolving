#include<iostream>
int main() {
    int x;
    std:: cin >> x;
    int arr[5] = {1, 5, 10, 20, 100};
    int count = 0, i=4;
    while (x > 0) {
	count += (int) x/arr[i];
	x %= arr[i];
	i--;
    }
    std:: cout << count << std:: endl;
    return 0;
}
