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
	m.insert(pair<string, string>("���", "����"));
	m.insert(pair<string, string>("����Ź", "�����"));
	m.insert(pair<string, string>("���»���", "�̵���"));
	m.insert(pair<string, string>("���", "���γ�"));

	map<string, string>::iterator iter;

	//������ ���ҵ��� ���(iterator)
	//�����Ҷ����� key�� �ڵ�����
	for (iter = m.begin(); iter != m.end(); iter++)
	{
		cout << iter->first << "��" << iter->second << "��" << endl;
	}
	cout << endl;

	map<string, string>::iterator actor = m.find("���");

	cout << endl;

	map<string, string>::iterator actor = m.find("���");

	return 0;
}