#include <iostream>
#include <vector>

void hello() { 

    std::cout << "hello world\n"; 

}

double square(double x) {

    return x*x;
}

void square_print(double x) {

    std::cout << "the square of : " << x << " is : " << square(x) <<std::endl;

}

void roundtoint (double d ) {

    int base = d;
    float dec = d-base ;
    if (dec >= .5) {
        base++;
    }
    std::cout << base << std::endl;

}

void arthimetic () {

    char x = 'f';
    std::cout << +x << " < this is what +x did to " << x << std::endl;


}

void typing () {

    auto b = 123;
    auto a = 1.25; 
    auto c {7.666666666666666666};

    std::cout << "b a c " << b << " " << a << " " << c << std::endl;
}


void constants () {

    //const std::vector<char> hello {'h','e','l','l','o'};
    std::vector<char> hello {'h','e','l','l','o'};
    std::vector<char> c = hello;
    c[2] = 'g';
    std::cout << hello[2]  << ' ' <<  c[2] << std::endl;
}

void arr_looper () {

    int x[] = {1,2,3,4,5};

    for (auto& values : x) {
        values++;
        
    }

    for (auto values : x) { 
        std::cout << values << std::endl;
    }

}
int main() {

    //hello();

    double x = 17.447;

    //square_print(x);
    //roundtoint(x);
    //arthimetic();
    //typing();
    //constants();
    arr_looper();

    return(0); //windows rarely makes use of the return
    //linux/unix makes use of the return often

}


