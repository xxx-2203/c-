#include <iostream>
#include <string>

using namespace std;


int main(void)
{
	string food_spot[3];

	food_spot[0] = "������";
	food_spot[1] = "��ȸ��";
	food_spot[2] = "ġŲ��";

	cout << "�޴�����" << endl;
	int menu = 1;

	switch (menu)
	{
	case 0:
		cout << "���� :";
		break;
	case 1:
		cout << "��ȸ :";
		break;
	case 2:
		cout << "ġŲ :";
		break;
	default:
		break;
	}
}