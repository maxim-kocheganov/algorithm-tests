#include <iostream>
#include <string>
#include <memory>

class Entity
{
public:
	Entity()
	{
		std::cout << "Create Ent" << std::endl;
	}
	~Entity()
	{
		std::cout << "Destroy Ent" << std::endl;
	}
	void Print()
	{
		std::cout << "Print" << std::endl;
	}
};

int main()
{
	{
		std::unique_ptr<Entity> ent1(new Entity());
		ent1->Print();

		std::unique_ptr<Entity> ent2 = std::make_unique<Entity>();
		ent2->Print();

	}
	std::cin.get();
}