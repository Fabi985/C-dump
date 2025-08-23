#include <iostream>
#include <vector>
#include <cmath>

int radix(int number)
{
    int Decimal = number;
    int rounds = 0;


    while (Decimal > 0) {
        int r;
        r = Decimal % 10;
        Decimal = Decimal / 10;
        std::cout << r << "*10^" << rounds << ": ";
        std::cout << r * pow(10, rounds) << "\n";
        rounds += 1;
    }

    return 0;
}

int dec_to_bin(int number)
{
    std::vector<int> data;
    int decimal = number;
    int dec_remainder;
    int next_int = decimal;

    while (next_int > 0)
    {
        dec_remainder = next_int % 2;
        next_int = next_int / 2;
        data.insert(data.begin(), dec_remainder);
    }

    for (auto i : data){
        std::cout << i;
    }
    return 0;
}

int main()
{
    std::cout << "input number: ";
    int x;
    std::cin >> x;

    radix(x);
    dec_to_bin(x);
    std::cout << "\n";

    return 0;
}