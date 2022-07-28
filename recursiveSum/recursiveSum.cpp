#include <iostream>
using namespace std;

int sum(int n) // 1���� n ������ ���� ��ȯ�ϴ� for��
{
	int ret = 0;
	for (int i = 0; i <= n; ++i)
		ret += i;
	return ret;
}

int recursiveSum(int n) // 1���� n ������ ���� ��ȯ�ϴ� ����Լ�
{
	if (n == 1) return 1;
	return n + recursiveSum(n - 1);
}

void main()
{
	int a;
	cout << "insert one NUM :" << endl;
	cin >> a;

	cout << sum(a) << endl;
	cout << recursiveSum(a) << endl;

}