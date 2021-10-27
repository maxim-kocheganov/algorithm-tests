#include <thread>
#include <iostream>
#include <string>
#include <mutex>

void run(std::string value, std::mutex *d) 
{
    
    d->lock();
    std::cout << value << std::endl;
    
    d->unlock();
}

int main() {
    std::mutex d;
    for (int i = 0; i < 200; i++) {
        std::thread tA(run, "A",&d);
        std::thread tB(run, "B", &d);
        tA.join();
        tB.join();
    }
}