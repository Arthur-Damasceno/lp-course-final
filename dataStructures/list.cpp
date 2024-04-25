#include <iostream>
#include <cctype>
#include "lib/list.h"

using std::cout;
using std::cin;

int main() {
    List list;

    while (true) {
        char operation;

        cout
            << "-------------------------------\n"
            << "[A] Adicionar elementos à lista\n"
            << "[D] Deletar elementos da lista\n"
            << "[P] Imprimir elementos da lista\n"
            << "[Q] Sair do programa\n"
            << "-------------------------------\n"
            << "O que deseja fazer?: ";
        cin >> operation;

        operation = toupper(operation);

        switch (operation) {
            case 'A':
                int element;
                int position;

                cout << "Qual o elemento a ser adicionado?: ";
                cin >> element;

                cout << "Qual a posição (Digite -1 para adicionar ao final)?: ";
                cin >> position;

                if (position == -1) {
                    list.push(element);
                } else if (position <= 0 || !list.exists(position - 1)) {
                    cout << "Posição não encontrada\n";
                    break;
                } else {
                    list.insert(element, position - 1);
                }

                cout << element << " foi adicionado à lista\n";

                break;
            case 'D':
                if (list.empty()) {
                    cout << "A lista está vazia\n";
                } else {
                    int position;

                    cout << "Qual a posição (Digite -1 para adicionar ao final)?: ";
                    cin >> position;

                    if (position == -1) {
                        list.pop();
                    } else if (position <= 0 || !list.exists(position - 1)) {
                        cout << "Posição não encontrada\n";
                        break;
                    } else {
                        list.remove(position - 1);
                    }

                    cout << "O elemento foi deletado da lista\n";
                }

                break;
            case 'P':
                if (list.empty()) {
                    cout << "A lista está vazia\n";
                } else {
                    cout << "Os elementos da lista são:\n";
                    
                    list.print();
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
