#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;


int a = 33;
void test(map<string, int> &config) {
    map<string, int>::iterator iter;
    iter = config.begin();
    while(iter != config.end()) {
        cout << iter->first << "\t" << iter->second << endl;
        iter++;
    }
}

// 这种写法不支持
// vector<pair<pair<float, float>, string >> levels = {
//     {{0.996, 1}, "2"}
//     {{0.993, 0.996}, "4"}
//     {{0.989, 0.993}, "6"}
//     {{0.984, 0.989}, "10"}
//     {{0.976, 0.984}, "15"}
//     {{0.968, 0.976}, "20"}
//     {{0, 0.968}, "30"}
// };

int main() {
	map<string, int> conf = {
		{"a", 1},
		{"b", 2},
		{"c", a},
	};
	test(conf);

	int e = conf["e"];
	cout << "'" << e  << "'" << endl;
	if (e) {
		cout << 11 << endl;
	} else {
		cout << 22 << endl;
	}

	cout << "------------" << endl;

	map<string, string> str_conf = {
		{"aa", "1"},
	};
	string d = str_conf["d"];
	cout << "'" << d  << "'" << endl;
	if (!d.empty()) {
		cout << 1 << endl;
	} else {
		cout << 2 << endl;
	}
	// for (vector<pair<pair<float, float>, string >> iter=levels.begin(); iter != levels.end(); iter++) {
	// 	cout << iter->first.first << "\t" << iter->first.second << "\t" << iter->second << endl;
	// }
	return 0;
}

// g++ map.cpp -std=c++0x
