#include <iostream>
using namespace std;


/*int main() {
	int x;
	
		cout << "Please input number: ";
		cin >> x;
		int cheat = x + 1;
		cout << "Hahaa I won, my number is " << cheat << " you peasant! \n";
	} while (x != 0, x != 2147483647);
	if (x = 2147483647) {
		cout << "Oh my, I think we finally reached a draw!";
	}
	return 0;
}*/

int main() {
	int x;
	cout << "Please input number: ";
	cin >> x;
	while (x != 0, x != 2147483647) {
		int cheat = x + 1;
		cout << "Hahaa I won, my number is " << cheat << " you peasant! \n";
		cout << "Please input number: ";
		cin >> x;
	}
	if (x == 2147483647) {
		cout << "Oh my, I think we finally reached a draw!";
	}
	return 0;
}

