#include <iostream>
#include <string>
#include <map>

using namespace std;

//��� ����
//����Ź �����
//���»��� �̵���
//��� ���γ�

//arr["���"] = ����

int main(void)
{
	//map<key�ڷ���, value�ڷ���
	map<string, string> m;

	m["���"] = "����";
	m["����Ź"] = "�����";
	m["���»���"] = "�̵���";
	m["���"] = "���γ�";

	map<string, string>::iterator iter;

	//������ ���ҵ��� ���(iterator)
	//�����Ҷ����� key�� �ڵ�����
	for (iter = m.begin(); iter != m.end(); iter++)
	{
		cout << iter->first << "��" << iter->second << "��" << endl;
	}
	cout << endl;

	//key�� �����ϴ��� üũ
	cout << "���ΰ��� " << m["���"] << endl;

	return 0;
}