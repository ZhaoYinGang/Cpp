// 6.3��̳�(��������).cpp: �������̨Ӧ�ó������ڵ㡣
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

class Mammal :public virtual  Animal {	//��̳�

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