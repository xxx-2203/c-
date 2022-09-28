#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	Animal() { cout << "Animal add" << endl; }
	virtual ~Animal() { cout << "Animal delete" << endl; }

	//�Լ��� �����Լ����̺� ���(���� ���ε�)
	virtual void eat(void) { cout << "��������" << endl; }
	virtual void roar(void) { cout << "����¢��" << endl; }
	virtual void walk(void) { cout << "�����ɾ�" << endl; }

private:
	string name;
	int sex;
	int age;
};

class Tiger : public Animal {
public:
	Tiger() { cout << "Tigel add" << endl; }
	virtual ~Tiger() { cout << "Tigel delete" << endl; }
	void eat(void) override { cout << "����������" << endl; }
	void roar(void) override { cout << "����" << endl; }
	void walk(void) override { cout << "��������" << endl; }
};

class Dog : public Animal {
public:
	Dog() { cout << "Dog add" << endl; }
	virtual ~Dog() { cout << "Dog delete" << endl; }
	void roar(void) { cout << "�۸�" << endl; }
};

void main(void)
{
	Animal* animal = new Tiger();
	animal->eat();
	delete animal;
}