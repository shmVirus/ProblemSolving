#include <iostream>
int main() {
	int n, a, b, c, d, t;
	bool isDistinct=false;
	std:: cin >> n;
	n++;
	while (!isDistinct) {
		t = n;
		a = t%10;
		b = t/10%10;
		c = t/100%10;
		d = t/1000%10;
		if (a!=b && a!=c && a!=d && b!=c && b!=d && c!=d) {
			isDistinct = true;
			break;
		}
		n++;
	}
	if(isDistinct) std:: cout << 1000*d+100*c+10*b+a << std:: endl;
	return 0;
}
