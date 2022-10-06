#include <iostream>
int main() {
	char s[110], t[110];
	int l;
	bool isOkay = true;
	std:: cin >> s >> t;
	for (l=0; s[l]!='\0'; l++);
	l--;
	for (int i=0; s[i]!='\0'; i++) {
		if (s[i]!=t[l]) {
			isOkay = false;
		}
		l--;
	}
	if(isOkay) std:: cout << "YES" << std:: endl;
	else std:: cout << "NO" << std:: endl;
	return 0;
}
