#include <iostream>
//#include <String>
int main()
{
	int age;
	//auto �����Ϸ��� �ڵ����� ������ �����ϴ� �ڷ���. auto a=10;
	std::string name, job; 
	//���ڿ� �Է��� std::string�� �̿�.
	//decltype(name) ������ name�� ���� Ÿ���� ����.
	std::cout <<"���̸� �Է��ϼ��� : ";
	std::cin >> age;
	std::cout <<"������ �Է��ϼ��� : ";
	std::cin >> job;
	std::cout <<"�̸��� �Է��ϼ��� : ";
	std::cin >> name;
	std::cout << "\n����� �̸��� " << name << "�̰�, ���̴� " << age << "���̸�, ������ " << job << "�Դϴ�.";
}