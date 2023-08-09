#include <iostream>

int Multiply(int a, int b)
{
    return a * b;
}

int main()
{
    int result = Multiply(3, 2);
    int result2 = Multiply(4, 5);
    std::cout << "\nResultado: " << result << std::endl;
    std::cout << "\nResultado 2: " << result2 << std::endl;
    std::cin.get();
    return 0;
}
