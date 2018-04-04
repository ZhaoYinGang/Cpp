// 6.3虚继承(菱形问题).cpp: 定义控制台应用程序的入口点。
//

#include<iostream>
using namespace std;

class Animal
{
public:
	Animal() {
		cout << "Animal constructor" << endl;
	}
	int Age;
};

class Mammal :public virtual  Animal {	//虚继承

};

class Bird :public virtual  Animal {

};

class Reptile :public virtual  Animal {

};

class Platypus :public Mammal, public Bird, public Reptile {
public:
	Platypus() {
		cout << "Platypus constructor" << endl;
	}
};

int main() {
	Platypus duckBilledP;
	duckBilledP.Age = 12;
	return 0;
}