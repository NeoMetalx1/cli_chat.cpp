#include <iostream>
#include <fstream>
using namespace std;


int main() {
	
	string username;
	string user_input;

	cout << "Enter username: ";
	cin >> username;
	cout << endl;
	
	ofstream Chat;
	Chat.open("chat.txt", ios::app);

	while (true) {
		cout << "Enter text (type 'exit' to quit): ";
		cin >> user_input;

		if (user_input == "exit") {
			break;
		}

		Chat << endl << "[" << username << "]" << " => " << user_input << endl;
	}
		
	Chat.close();

	return 0;

}