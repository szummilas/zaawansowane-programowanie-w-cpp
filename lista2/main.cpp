#include <iostream>
#include <math.h>

// zadanie 5
template <typename T, typename U>
auto add1(T *a, U *b){
    return *a + *b;
}

template <typename T, typename U>
auto add2(const T x, const U y){
    std::string a = x;
    std::string b = y;
    return a + b;
}

// zadanie 6
template <typename T, typename U>
constexpr auto hiperszescian(T a, U b) -> decltype (pow(a, b)){
    if (a < 0 || b < 0){
        return -1;
    }

    else{
        return pow(a, b);
    }
}

int main(){

    // zadanie 5
    std::cout << "ZADANIE5" << '\n';
    int num1, num2;
    int *num_ptr1, *num_ptr2;

    num1 = 21;
    num2 = 11;

    const char* first = "M";
    const char* second = "S";

    num_ptr1 = &num1;
    num_ptr2 = &num2;

    std::cout << add1(num_ptr1, num_ptr2) << '\n';
    std::cout << add2(first, second) << "\n\n";

    // zadanie 6
    std::cout << "ZADANIE6" << '\n';
    std::cout << "HIPERSZESCIAN(5 BOKOW, 6 WYMIAROW): " << hiperszescian(6.5f, 7) << "\n\n";


    return 0;
}