#include "stdio.h"
#include <iostream>
#include <cstdlib>
using namespace std;

void Fibonacci(char *argv[])
{
	{
		long long a = 0;
		long long b = 1;
		int n=atoi(argv[1]);
		cout << "ciag Fibonacciego:" << endl;
		for (int i = 1;i <=n;i++)
		{
			cout << "[" << i << "]=" << b << endl;
			b += a;
			a = b - a;
		}
	}
}

void Custom(char *argv[])
{
	int s = 0;
	int r = 3;
	int a = 0;
	int n = atoi(argv[1]);
	cout << "wlasny ciag:"<<endl;
	for (int i = 1;i <=n;i++)
	{
		a=s+(i-1)*r;
		cout <<"["<<i<<"]=" << a <<endl;
	}
}


int main(int argc, char *argv[])
{
cout <<"liczba elementow ciagu:"<< argv[1]<<endl;
	if (*argv[2] == 'f')
	{
	 Fibonacci(argv);
	}
	if (*argv[2] == 'c')
	{
	 Custom(argv);
	}
	if(*argv[2] != 'c'&&*argv[2] != 'f')
	{
	cout << "podany znak nie byl znakiem f lub c";
	}

getchar();
}
