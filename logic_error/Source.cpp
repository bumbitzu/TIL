#include <stdexcept>
#include <iostream>

int divide(int a, int b) 
{
    if (b == 0) 
    {
        throw std::logic_error("division by zero");
    }
    return a / b;
}

int main() 
{
    try 
    {
        std::cout << divide(10, 0) << std::endl;
    }
    catch (std::logic_error& e) 
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
    return 0;
}
