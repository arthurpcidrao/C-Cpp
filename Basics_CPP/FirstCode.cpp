#include <iostream>
using namespace std;

int main(){

    int a,b, soma;

    cout << "Digite 2 numeros: ";  // caso não seja definido antes da main o "using namespace std;", escreva: "std::cout << ..."

    cin >> a;
    cin >> b;

    soma = a + b;

    cout << "/nA soma dos numeros é: " << soma << endl;
}