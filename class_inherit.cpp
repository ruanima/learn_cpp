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
    string type;
    virtual string say(void);
    virtual string getType(void);
};
string Animal::say(void) {
    return "....";
}
string Animal::getType(void) {
    return type;
}

class Dog: public Animal {
private:
    int eyes;
    int age;
public:
    string type;
    virtual string say(void);
    virtual string getType(void);
};

string Dog::say(void) {
    return "wangwang";
}
string Dog::getType(void) {
    return type;
}

class Cat: public Animal {
private:
    int eyes;
    int age;
public:
    string type;
    virtual string say(void);
    virtual string getType(void);
};

string Cat::say(void) {
    return "miaomiao";
}
string Cat::getType(void) {
    return type;
}

int main() {
    Animal a, *p;
    Dog b;
    Cat c;
    a.type = "A";
    b.type = "D";
    c.type = 'C';
    cout << "Animal says: " << a.say() << endl;
    cout << "Dog says: " << b.say() << endl;
    cout << "Cat says: " << c.say() << endl;

    vector<Animal*> zoo;
    zoo.push_back(&a);
    zoo.push_back(&b);
    zoo.push_back(&c);
    for (int i=0; i<zoo.size(); i++) {
        p = zoo[i];
        cout << p->getType() << " says: " << p->say() << endl;
    }
    return 0;
}
