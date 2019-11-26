#include <stdio.h>
#include <time.h>

class Arr {
public:
	int* array;
	int size;
	Arr(){
		array = 0;
		size = 0;
	}
	void Alloc(int size){
		array = new int[size];
		this->size = size;
	}
	void ReallocSize(int size){
		int* newArray = new int[size];
		for(int i = 0;i < this->size;i++)
		{
			newArray[i] = array[i];
		}
		delete array;
		this->size = size;
		array = newArray;
	}
	~Arr(){
		if (array != NULL)
			delete array;
	}
};

int testCount = 1000 * 1000;
int deltaAddictive = 1000 * 10;
float deltaMult = 2;

void testAddictive(){
	Arr arr;
	arr.Alloc(1);
	while (testCount > arr.size){
		arr.ReallocSize(arr.size + deltaAddictive);
	}
}
void testMult(){
	Arr arr;
	arr.Alloc(1);
	while (testCount > arr.size){
		arr.ReallocSize(arr.size * deltaMult);
	}
}


int main(int argc, char* argv[])
{

	time_t begin = clock();
	testAddictive();
	time_t end = clock();
	long long spend = (end - begin);
	printf("Addictive: %d\n",spend);

	begin = clock();
	testMult();
	end = clock();
	spend = (end - begin);
	printf("Mult: %d\n",spend);

	return 0;
}

