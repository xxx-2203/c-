#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
	// ũ�Ⱑ 10���� ������ �����迭
	string s1[10];
	string* s2 = new string[10];

	// ũ�� Ȯ���� ������ �����迭
	vector<string> s3;
	s3.reserve(10);	// ũ�⸦ 10���� Ȯ��

	for (int i = 0; i < 10; i++)
	{
		s1[i] = "ab";
		s2[i] = "ab";
		s3.push_back("ab");
	}

	// idx���� �ʰ�(��������)
	// s1[10] = "ab";
	// s2[10] = "ab";

	// ���������� ũ�⸦ Ȯ���Ͽ� ����
	s3.push_back("ab");

	return 0;
}