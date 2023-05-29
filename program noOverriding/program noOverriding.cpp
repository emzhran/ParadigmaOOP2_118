#include<iostream>
using namespace std;

class baseClass {
public:
	virtual void perkenalan() final {
		cout << "Hallo saya function dari base class";
	}
};

class derivedClass : public baseclass {
public:
	void perkenalan() {
		cout << "Hallo saya function dari derived class";
	}
};