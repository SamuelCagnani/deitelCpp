#include <iostream>

int main() {

    int x;
    int y;
    int z;
    int result;

    std::cout << "Enter three integers: ";
    std::cin >> x >> y >> z;

    result = x * y * z;

    std::cout << "The product is " << result << std::endl;

    return 0;
}