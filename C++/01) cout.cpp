#include <iostream>

int main()
{
	std::cout << "Hello World!! \n"; //std�� ���� cout�� ����� ����ϴ� ��ü. <<�� cout��ü �ȿ� �ִ� (���) ������ �Լ�. cout�� ���� ���� iostream ��Ŭ��� �ؾ���.
	// cin >> a; �Է� ���� a ������.

	int a(1), d;
	//��ü ������ ���� ������ �ν��Ͻ���� ��.
	std::cout << a << '\n' << "�ȳ� \n";
	std::cin >> d;
	std::cout << a+d << '\n' << "d�� �� " << d;
	return 0;
}