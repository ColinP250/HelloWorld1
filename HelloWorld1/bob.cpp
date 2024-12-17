#include <iostream>
#include <string>

std::string sayHello()
{
    return "Hello, bob!";
}

int main()
{
    int x = 1;
    int y = 0;
    
    // How to swap the two variables???
    std::swap(x, y);

    std::cout << sayHello() << "\n" << "Hello again!";
    return 42;
}
