#include <stdio.h>
#include <tchar.h>
#include <iostream>
#include <time.h>
#include <conio.h>

using namespace std;

int* buffer;
size_t bufferSize;

void testWithChech(){
	for(size_t i = 0;i < bufferSize; i++){
		if(buffer == NULL)
			buffer[i] = 1;
	}
}
void testWithoutCheck(){
	for(size_t i = 0;i < bufferSize; i++){
		buffer[i] = 1;
	}
}


int main(int argc, char* argv[])
{
	bufferSize = 1000 * 1000 * 10;
	buffer = new int[bufferSize];

	time_t begin = clock();
	testWithChech();
	time_t end = clock();

	long long spend = (end - begin);
	printf("No check: %d\n",spend);

	begin = clock();
	testWithoutCheck();
	end = clock();

	spend = (end - begin);
	printf("With check: %d\n",spend);

	getch();
	return 0;
}

