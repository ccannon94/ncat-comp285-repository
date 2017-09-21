#include <iostream>
#include <cstring>
#include "stack.cpp"
using namespace std;

int main(int argc, char *argv[])
{
	char *a = argv[1];
	int i, div, N = strlen(a);
	stack<int> save(N);
	for(i = 0; i<N; i++)
	{
		if(a[i] == '+')
			save.push(save.pop() + save.pop());
		if(a[i] == '*')
			save.push(save.pop() * save.pop());
		if(a[i] == '-')
			save.push((-1)*save.pop() - save.pop());
		if(a[i] == '/')
		{
			div = save.pop();
			save.push(save.pop() / div);
		}
		if((a[i] >= '0') && (a[i] <= '9'))
			save.push(a[i] -'0');
		//while ((a[i] >= '0') && (a[i] <= '9'))
		//	save.push(10*save.pop() + (a[i++]-'0'));
	}
	cout << save.pop() <<endl;
}
