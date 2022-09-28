#include <iostream>
#include <string>

using namespace std;

template <typename T1, typename T2>
class Character {
public:

	Character(T1 _name, T2 _hp, T2 _offense, T2 _defense)
		:name(_name), hp(_hp), offense(_offense), defense(_defense) {}

	void print(void)
	{
		cout << "�̸� " << name << endl;
		cout << "ü�� " << hp << endl;
		cout << "���� " << offense << endl;
		cout << "��� " << defense << endl;
	}

private:
	T1 name;
	T2 hp;
	T2 offense;
	T2 defense;
};

int main(void)
{
	Character<string, int>* juin= new Character<string, int>("���ΰ�", 1, 999999, 10);
	juin->print();
	delete juin;

	return 0;
}