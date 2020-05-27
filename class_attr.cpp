#include <stdlib.h>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Animal {
private:
    int eyes;
    int age;
public:
    string type;  // 实例属性
    static string stype;  // 类属性
    virtual string say(void);
    virtual string getType(void);
};
string Animal::say(void) {
    return "....";
}
string Animal::getType(void) {
    return type;
}

string Animal::stype = "SSS";

int main() {
    Animal a, b, *p;
    a.type = "aa";
    cout << "a public type: " << a.type << endl;
    cout << "a static stype: " << a.stype << endl;
    b.type = "bb";
    cout << "b public type: " << b.type << endl;
    cout << "b static stype: " << b.stype << endl;
    cout << "Animal says: " << a.say() << endl;
    return 0;
}
