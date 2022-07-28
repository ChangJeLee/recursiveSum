#include <iostream>
using namespace std;

int sum(int n) // 1부터 n 까지의 합을 반환하는 for문
{
	int ret = 0;
	for (int i = 0; i <= n; ++i)
		ret += i;
	return ret;
}

int recursiveSum(int n) // 1부터 n 까지의 합을 반환하는 재귀함수
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