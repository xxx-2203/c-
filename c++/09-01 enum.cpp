#include <iostream>
#include <string>

using namespace std;


int main(void)
{
	string food_spot[3];

	food_spot[0] = "스시집";
	food_spot[1] = "육회집";
	food_spot[2] = "치킨집";

	cout << "메뉴선택" << endl;
	int menu = 1;

	switch (menu)
	{
	case 0:
		cout << "스시 :";
		break;
	case 1:
		cout << "육회 :";
		break;
	case 2:
		cout << "치킨 :";
		break;
	default:
		break;
	}
}