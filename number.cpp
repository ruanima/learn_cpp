#include <string>
#include <vector>
#include <map>
#include <iostream>
#include <sstream>
// #include <fstream>
using namespace std;


bool isFloat(const string myString ) {
    istringstream iss(myString);
    float f;
    iss >> noskipws >> f; // noskipws considers leading whitespace invalid
    // Check the entire string was consumed and if either failbit or badbit is set
    return iss.eof() && !iss.fail();
}

int main() {
	cout << isFloat("1") << endl;
	cout << isFloat("1.1") << endl;
	cout << isFloat("a") << endl;
	return 0;
}
