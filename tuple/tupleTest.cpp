#include <iostream>
#include <string>
#include <tuple>

#define CPP_2020

std::tuple<std::string, int> CreatePerson()
{
	return { "Max", 25 };
}

auto CreatePerson2() -> std::tuple<std::string, int>
{
	return { "Oleg", 23 };
}

int main()
{
	auto person = CreatePerson();
	std::string name = std::get<0>(person);
	int age = std::get<1>(person);

	std::cout << name << " " << age << std::endl;

	std::string name2;
	int age2;
	std::tie(name2, age2) = CreatePerson();

	std::cout << name2 << " " << age2 << std::endl;
#ifdef CPP_2020
	auto [name3, age3] = CreatePerson2();
	std::cout << name3 << " " << age3 << std::endl;
#endif
}