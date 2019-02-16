#include <cstdlib>  // For std::rand()
#include <ctime>    // For std::time()
#include <iostream>

int main()
{
    // Use current time as seed for random generator
    std::srand(std::time(NULL));
    
    for (int i = 0; i < 8; ++i)
        std::cout << std::rand() % 10;
    std::cout << std::endl;
    
    return 0;
}
