#include <iostream>

using namespace std;

int main() {
    double num1, num2;
    int operacao;

    cout << "Digite o primeiro número: ";
    cin >> num1;

    cout << "Escolha a operação:\n";
    cout << "1. Soma\n";
    cout << "2. Subtração\n";
    cout << "3. Multiplicação\n";
    cout << "4. Divisão\n";
    cout << "Digite o número da operação: ";
    cin >> operacao;

    cout << "Digite o segundo número: ";
    cin >> num2;

    switch (operacao) {
        case 1:
            cout << "Resultado: " << num1 + num2 << endl;
            break;
        case 2:
            cout << "Resultado: " << num1 - num2 << endl;
            break;
        case 3:
            cout << "Resultado: " << num1 * num2 << endl;
            break;
        case 4:
            if (num2 != 0) {
                cout << "Resultado: " << num1 / num2 << endl;
            } else {
                cout << "Erro: Divisão por zero não é permitida." << endl;
            }
            break;
        default:
            cout << "Opção inválida." << endl;
            break;
    }

    return 0;
}

