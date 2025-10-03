#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    // Apenas declaramos o array aqui. Ele ser� preenchido na op��o 1.
    int numeros[20];
    // Flag para garantir que o usu�rio n�o use as op��es 2, 3 ou 4 antes da 1.
    bool numerosForamGerados = false;

    int opcao;

    do {
        cout << "\n--- Menu de Opcoes ---\n";
        cout << "1. Gerar novos numeros aleatorios\n";
        cout << "2. Mostrar o array\n";
        cout << "3. Mostrar o maior numero do array\n";
        cout << "4. Procurar um valor no array\n";
        cout << "-1. Sair\n";
        cout << "Digite sua opcao: ";
        cin >> opcao;
        cout << "-----------------------\n";


        // Se o usu�rio tentar as op��es 2, 3 ou 4 sem ter gerado os n�meros primeiro
        if (!numerosForamGerados && (opcao == 2 || opcao == 3 || opcao == 4)) {
            cout << "Erro: Voce precisa gerar os numeros primeiro usando a opcao 1.\n";
            continue; // Pula o resto do c�digo e volta para o menu
        }

        switch (opcao) {
            case 1:
                // AJUSTE 1: A l�gica de gerar n�meros foi movida para c�.
                for (int i = 0; i < 20; i++) {
                    numeros[i] = (rand() % 100) + 1;
                }
                numerosForamGerados = true; // Avisa ao programa que os n�meros j� existem.
                cout << "Array de 20 numeros aleatorios gerado com sucesso!\n";
                break;

            case 2:
                cout << "Array atual: ";
                for (int i = 0; i < 20; i++) {
                    cout << numeros[i] << " ";
                }
                cout << endl;
                break;

            case 3: {
                // AJUSTE 2: A vari�vel 'maior' � inicializada AQUI DENTRO.
                // Isso garante que o c�lculo recomece corretamente toda vez.
                int maior = numeros[0];
                for (int i = 1; i < 20; i++) {
                    if (numeros[i] > maior) {
                        maior = numeros[i];
                    }
                }
                cout << "O maior numero do array e: " << maior << "\n";
                break;
            }

            case 4: {
                cout << "Digite o valor que deseja procurar:\n";
                int usuario;
                cin >> usuario;

                // AJUSTE 2: A flag 'valorEncontrado' � criada e resetada para 'false' AQUI.
                // Isso garante que toda nova busca comece do zero.
                bool valorEncontrado = false;
                for (int i = 0; i < 20; i++) {
                    if (usuario == numeros[i]) {
                        cout << "Esse valor existe no array e sua primeira ocorrencia esta na posicao " << i << endl;
                        valorEncontrado = true;
                        break;
                    }
                }
                if (valorEncontrado == false) { // Ou simplesmente if (!valorEncontrado)
                    cout << "O valor " << usuario << " nao foi encontrado no array.\n";
                }
                break;
            }
            case -1:
                cout << "Saindo...\n";
                break;
            default:
                cout << "Opcao invalida.\n";
        }
    } while (opcao != -1);

    return 0;
}
