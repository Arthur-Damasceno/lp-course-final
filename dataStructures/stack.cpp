#include <iostream>
#include <cctype>
#include "lib/stack.h"

using std::cout;
using std::cin;

int main() {
    Stack stack;

    while (true) {
        char operation;

        cout
            << "-------------------------------\n"
            << "[A] Adicionar elementos à pilha\n"
            << "[D] Deletar elementos da pilha\n"
            << "[P] Imprimir elementos da pilha\n"
            << "[Q] Sair do programa\n"
            << "-------------------------------\n"
            << "O que deseja fazer?: ";
        cin >> operation;

        operation = toupper(operation);

        switch (operation) {
            case 'A':
                int element;

                cout << "Qual o elemento a ser adicionado?: ";
                cin >> element;

                stack.push(element);

                cout << element << " foi adicionado à pilha\n";

                break;
            case 'D':
                if (stack.empty()) {
                    cout << "A pilha está vazia\n";
                } else {
                    stack.pop();

                    cout << "O último elemento da pilha foi deletado\n";
                }

                break;
            case 'P':
                if (stack.empty()) {
                    cout << "A pilha está vazia\n";
                } else {
                    cout << "Os elementos da pilha são:\n";

                    stack.print();
                }

                break;
            case 'Q':
                char option;

                cout << "Deseja realmente sair [S/n]?: ";
                cin >> option;

                option = toupper(option);

                if (option == 'S') {
                    return 0;
                } else if (option == 'N') {
                    continue;
                } else {
                    cout << '"' << option << '"' << " não é uma opção válida\n";
                }

                break;
            default:
                cout << '"' << operation << '"' << " não é uma opção válida\n";
                break;
        }
    }

    return 0;
}
