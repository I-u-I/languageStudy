#include <iostream>

int main()
{
	int* pData = new int; //�ν��Ͻ� ���� ����

	int* pNewData = new int[10]; //�迭 ���� ����
	pNewData[0] = 1;

	int* pNewData_t = new int(10);

	*pData = 5;
	std::cout << *pData << std::endl; //5
	std::cout << *pNewData_t << std::endl; //10
	std::cout << pNewData[0] << std::endl; //1

	delete pData;
	delete[] pNewData;

	return 0;
}