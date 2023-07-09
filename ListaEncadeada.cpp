#include <iostream>

using namespace std;

/*Opção 1: o algoritmo deverá ler um elemento inteiro, inseri-lo em um novo noh e
adicioná-lo no fim da lista utilizando a função adicionar que deve ser elaborada. Opção
2: o algoritmo deverá ler um elemento inteiro, busca-lo na lista e, caso seja encontrado,
removê-lo utilizando a função remover que deve ser elaborada.
Opção 3: o algoritmo deverá exibir todos os elementos da lista utilizando a função
relatorio que deve ser elaborada. */

struct Noh {
    int valor;
    Noh* proximo;
};

void adicionar(Noh** headRef, int valor);
void remover(Noh** headRef, int valor);
void relatorio(Noh* head);

int main() {
    Noh* head = nullptr;
    int opcao;

    do {
        cout << "\n\t-------------------------------------------------------";
        cout << "\n\tMENU PRINCIPAL";
        cout << "\n\t-------------------------------------------------------";
        cout << "\n\t1 - ADICIONAR ELEMENTO";
        cout << "\n\t2 - REMOVER ELEMENTO";
        cout << "\n\t3 - MOSTRAR TODOS OS ELEMENTOS";
        cout << "\n\t4 - SAIR";

        cout << "\n\nDigite a opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1: {
                int valor;
                cout << "\nDigite o elemento inteiro: ";
                cin >> valor;
                adicionar(&head, valor);
                break;
            }
            case 2: {
                int valor;
                cout << "\nDigite o elemento inteiro a ser removido: ";
                cin >> valor;
                remover(&head, valor);
                break;
            }
            case 3:
                relatorio(head);
                break;
            case 4:
                cout << "\nSaindo...";
                break;
            default:
                cout << "\nOpcao invalida!";
        }

    } while (opcao != 4);

    cout << "\nFim do programa!\n";

    return 0;
}

void adicionar(Noh** headRef, int valor) {
    Noh* novoNoh = new Noh;
    novoNoh->valor = valor;
    novoNoh->proximo = nullptr;

    if (*headRef == nullptr) {
        *headRef = novoNoh;
    } else {
        Noh* ultimo = *headRef;
        while (ultimo->proximo != nullptr) {
            ultimo = ultimo->proximo;
        }
        ultimo->proximo = novoNoh;
    }
}

void remover(Noh** headRef, int valor) {
    Noh* atual = *headRef;
    Noh* anterior = nullptr;

    while (atual != nullptr) {
        if (atual->valor == valor) {
            if (anterior == nullptr) {
                *headRef = atual->proximo;
            } else {
                anterior->proximo = atual->proximo;
            }
            delete atual;
            cout << "\nElemento removido com sucesso!";
            return;
        }
        anterior = atual;
        atual = atual->proximo;
    }

    cout << "\nElemento nao encontrado!";
}

void relatorio(Noh* head) {
    if (head == nullptr) {
        cout << "\nA lista esta vazia!";
        return;
    }

    cout << "\nElementos da lista: ";
    Noh* atual = head;
    while (atual != nullptr) {
        cout << atual->valor << " ";
        atual = atual->proximo;
    }
}