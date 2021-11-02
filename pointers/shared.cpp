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
	std::shared_ptr<Entity> shared;
	{
		std::shared_ptr<Entity> shared = std::make_shared<Entity>();
		shared->Print();
	}
	std::cin.get();
}