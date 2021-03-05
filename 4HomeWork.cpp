#include <iostream>

int main()
{
    // 1 number
    int num1 = 5, num2 = 5;
    int s = num1 + num2;
    if ((s >= 10) && (s <= 20)){
        std::cout << "true\n";
    }else {
        std::cout << "false\n";
    }
    // 2 number
    int prime_num = 347;
    if(prime_num % 2 != 0){
        if(prime_num % 3 != 0){
            if(prime_num % 5 != 0){
                if(prime_num % 7 != 0){
                    std::cout << "prime\n";
                }
                else{
                    std::cout << "not prime\n";
                }
            }
            else{
                std::cout << "not prime\n";
            }
        }
        else{
            std::cout << "not prime\n";
        }
    }
    else{
        std::cout << "not prime\n";
    }
    // 3 number
    if(s == 10){
        std::cout << "true\n";
    }
    else if(num1 == num2){
        std::cout << "true\n";
    }
    else {
        std::cout << "false\n";
    }
return 0;
}