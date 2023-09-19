#include <iostream>
//using namespace std;

int main(){

    int a,b, soma;

    std::cout << "Digite 2 numeros: ";  // caso não seja definido antes da main o "using namespace std;", escreva: "std::cout << ..."

    std::cin >> a;
    std::cin >> b;

    soma = a + b;

    std::cout << "\nA soma dos numeros eh: " << soma << std::endl;
}