#include <iostream>

int main()
{
    int a=1, b=2, c=3, d=4;
    float y;
    y = (float) c / d;
    y = (float) y + b;
    y = (float) y * a;
    std::cout << y << " ";
    int num = 56;
    std::cin >> num;
    num = num - 21;
    std::cout << num << " ";
    num = (num > 21) ? num * 2 : false;
    std::cout << num;
}