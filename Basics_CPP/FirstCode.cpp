#include <iostream>
using namespace std;

int main(){

    int a,b, soma;

    cout << "Digite 2 números: ";  // caso não seja definido antes da main o "using namespace std;", escreva: "std::cout << ..."

    cin >> a;
    cin >> b;

    soma = a + b;

    cout << "/nA soma dos números é: " << soma << endl;
}