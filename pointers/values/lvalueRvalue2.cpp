#include <iostream>

void PrintNameRvalue(std::string& name)
{
	std::cout << name << std::endl;
}

/*				without const will not work	*/
void PrintName(const std::string& name)
{
	std::cout << name << std::endl;
}

void PrintNameLvalue(std::string&& name)
{
	std::cout << name << std::endl;
}

int main()
{
/*  lvalue  rvalue*/
	std::string a = "A";
	std::string b = "B";

	std::string full = a + b;

	PrintNameRvalue(full);
//  PrintNameRvalue(a + b) // error

	PrintName(full);
	PrintName(a + b);

//	PrintNameLvalue(full); // error
	PrintNameLvalue(a + b);

}