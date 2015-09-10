#include <iostream>
using namespace std;

<<<<<<< HEAD
int main() {
	string username;
	string yourname;
=======
int main () {
  string username;
  string yourname;

  username = "Alice";

  cout << "Please enter your name!\n\n";

  cin >> yourname;

  cout << "Hello\n\n" << yourname << ", my name is << username "!"\n\n;
>>>>>>> origin/master

	username = "Vincent";

	cout << "Please enter your name!\n\n";

	cin >> yourname;

	cout << "Hello " << yourname << ", my name is " << username << "!\n\n";
	return 0;
}
