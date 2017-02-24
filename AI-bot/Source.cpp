#include <iostream>
#include <string>
using namespace std;

string user = "";

void check(string x, string y) {
	int check = 0;
	for (int c = 0; c < user.length(); c++) {
		if (user[c] == x[check]) {
			check++;
		} 
	}
	cout << "Responder: " << y;
}
main() {

	
}