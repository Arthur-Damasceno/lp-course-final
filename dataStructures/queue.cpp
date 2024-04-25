#include <iostream>
#include <cctype>
#include "lib/queue.h"

using std::cout;
using std::cin;

int main() {
    Queue queue;

    while (true) {
        char operation;

        cout
            << "-------------------------------\n"
            << "[A] Adicionar elementos à fila\n"
            << "[D] Deletar elementos da fila\n"
            << "[P] Imprimir elementos da fila\n"
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

                queue.enqueue(element);

                cout << element << " foi adicionado à fila\n";

                break;
            case 'D':
                if (queue.empty()) {
                    cout << "A fila está vazia\n";
                } else {
                    queue.dequeue();

                    cout << "O primeiro elemento da fila foi deletado\n";
                }

                break;
            case 'P':
                if (queue.empty()) {
                    cout << "A fila está vazia\n";
                } else {
                    cout << "Os elementos da fila são:\n";
                    
                    queue.print();
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
