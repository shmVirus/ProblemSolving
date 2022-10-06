#include <iostream>
int main() {
	char s[1000];
	int l=0, u=0;
	std:: cin >> s;
	for (int i=0; s[i]!='\0'; i++) {
		if (s[i] >= 'a' && s[i] <= 'z') {
			l++;
		}
		else {
			u++;
		}
	}
	if (u<=l) {
		for (int i=0; s[i]!='\0'; i++) {
			if (s[i] >= 'A' && s[i] <= 'Z') {
				s[i] += 32;
			}
		}
	}
	else {
		for (int i=0; s[i]!='\0'; i++) {
			if (s[i] >= 'a' && s[i] <= 'z') {
				s[i] -= 32;
			}
		}
	}
	std:: cout << s << std:: endl;
	return 0;
}
