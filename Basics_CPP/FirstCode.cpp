#include <iostream>
using namespace std;

int main() {
    // Declaração das variáveis para armazenar a entrada do usuário
    int a, b, soma;

    // Solicitar ao usuário que insira os números
    cout << "Digite dois numeros inteiro: ";
    
    // Ler a entrada do usuário
    cin >> a;
    cin >> b;

    // Calcular a soma dos números
    soma = a + b;

    // Exibir o resultado
    std::cout << "A soma de " << a << " e " << b << " eh "<< soma << endl;

    return 0;
}

