#include <iostream>
int main() {
	int n, a, b, r=0;
	std:: cin >> n;
	for (int i=0; i<n; i++) {
		std:: cin >> a >> b;
		if (a+2<=b) r++;
	}
	std:: cout << r << std:: endl;
	return 0;
}
