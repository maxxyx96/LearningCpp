#include <bits/stdc++.h> //Everything under the sun
using namespace std;

int main () {
	cout << "This program compares if two strings are equal" << endl;
	cout << "Input two strings : " << endl;
	string s1,s2;
	cout << "string 1 : " ;
	getline(cin, s1);str
	cout << "string 2 : "; 
	getline(cin, s2);
	//Converts strings to chars so that strcmp can read them
	const char *c1 = s1.c_str();
	const char *c2 = s2.c_str();
	
	//Compares string with strcmp(char,char) which will:
		//return 0 if c1 and c2 are equal.
		//return < 0 if ascii of first character in c1 is less than c2.
		//return > 0 if ascii of first character in c1 is greater than c2.
	int result;
	result = strcmp(c1,c2);
	if (result == 0) {
		cout << "The two strings are equal";
	} 
	else { //result != 0
		cout << "The two strings are not equal";
	}
}
