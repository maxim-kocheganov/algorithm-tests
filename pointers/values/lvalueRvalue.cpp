#include <iostream>

int GetValue()
{
	return 10;
}

int& GetValueLvl()
{
	static int value;
	return value;
}

void SetValue(const int& value)
{

}

int main()
{
/*  lvalue  rvalue*/
	int i = 10;
	int a = GetValue();
	GetValueLvl() = 10;
	const int& b = 10;
	SetValue(i);
	SetValue(10);
}