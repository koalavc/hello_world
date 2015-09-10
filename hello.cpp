#include <iostream>
using namespace std;

int main() {
	string username;
	string yourname;

	username = "Vincent";

	cout << "Please enter your name!\n\n";

	cin >> yourname;

	cout << "Hello " << yourname << ", my name is " << username << "!\n\n";
	return 0;
}
