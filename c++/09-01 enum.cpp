#include <iostream>
#include <string>

using namespace std;

enum Food {
	SESI,
	UIKEI,
	HAMBEGER,
	COUNT
};

int main(void)
{
	string food_spot[Food::COUNT];

	food_spot[Food::SESI] = "������";
	food_spot[Food::UIKEI] = "��ȸ��";
	food_spot[Food::HAMBEGER] = "ġŲ��";

	cout << "�޴�����" << endl;
	int menu = 1;

	switch (menu)
	{
	case Food::SESI:
		cout << "���� :";
		break;
	case Food::UIKEI:
		cout << "��ȸ :";
		break;
	case Food::HAMBEGER:
		cout << "ġŲ :";
		break;
	default:
		break;
	}
	cout << food_spot[menu] << endl;

	return 0;

}