#include <iostream>
int main() {
	int n, a=0, d=0;
	char g[100010];
	std:: cin >> n;
	std:: cin >> g;
	for (int i=0; g[i]!='\0'; i++) {
		if (g[i]=='A') a++;
		else if (g[i]=='D') d++;
	}
	if (a>d) std:: cout << "Anton" << std:: endl;
	else if (d>a) std:: cout << "Danik" << std:: endl;
	else std:: cout << "Friendship" << std:: endl;
	return 0;
}
