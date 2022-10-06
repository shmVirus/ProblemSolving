#include <iostream>
int main()
{
	int r,c, mat[10][10];
	for (int i=1; i<=5; i++) {
		for (int j=1; j<=5; j++) {
			std:: cin >> mat[i][j];
			if (mat[i][j]==1) {
				r = i;
				c = j;
			}
		}
	}
	std:: cout << abs(3-r)+abs(3-c) << std:: endl;
	return 0;
}
