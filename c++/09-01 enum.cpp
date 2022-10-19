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

	food_spot[Food::SESI] = "스시집";
	food_spot[Food::UIKEI] = "육회집";
	food_spot[Food::HAMBEGER] = "치킨집";

	cout << "메뉴선택" << endl;
	int menu = 1;

	switch (menu)
	{
	case Food::SESI:
		cout << "스시 :";
		break;
	case Food::UIKEI:
		cout << "육회 :";
		break;
	case Food::HAMBEGER:
		cout << "치킨 :";
		break;
	default:
		break;
	}
	cout << food_spot[menu] << endl;

	return 0;

}