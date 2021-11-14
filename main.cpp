#include <iostream>

int fibo(int n){

    int i;
    int a=1, b=1, c;

    std::cout << a << std::endl;
    std::cout << b << std::endl;

    for(i=2; i<n; i++){

        c=a+b;

        if(c<n){

            std::cout << c << std::endl;


        }else {

            return 0;

        }

        a=b;
        b=c;


    }

}

int main() {

    int n=0;
    std::cin >> n;

    int x= fibo(n);
    std::cout << n << std::endl;

    return 0;
}
