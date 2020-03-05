#include<iostream>
using namespace std;
void print(int fib[201][51])
{
	for (int n = 1; n <= 200; n++)
	{
		int i = 0;
		while (fib[n][i] == 0)
			i++;
		cout << "Fibonacci.of(" << n << ") == ";
		while(i<=50)
		{
			cout << fib[n][i++];
		}
		cout<<endl;
	}
	return;
}
void Fibonacci(int (*fib)[51])
{
	int i,j;
	fib[1][50] = 1;
	fib[2][50] = 1;
	for (i = 3; i <= 200; i++)
	{
		int c = 0;
		for (j = 50; j >0; j--)
		{
			fib[i][j] = (fib[i - 1][j] + fib[i - 2][j] + c) % 10;
			c = (fib[i - 1][j] + fib[i - 2][j] + c)/10;
		}
	}
}
int main()
{
	int fib[201][51];
	for (int i = 0; i < 201; i++)
	{
		for (int j = 0; j < 51; j++)
		{
			fib[i][j] = 0;
		}
	}
	Fibonacci(fib);
	cout << "1-200的Fibonacci数列如下:" << endl;
	print(fib);
	cout << endl;
	return 0;
}