
 #include <iostream>
#include <random>   // Biblioteca moderna para n�meros aleat�rios
#include <vector>   // Usaremos vector como um array mais seguro

int main() {
    // 1. Configura��o do gerador de n�meros aleat�rios
    std::random_device rd;        // Semente aleat�ria de alta qualidade [cite: 102]
    std::mt19937 gen(rd());       // Motor Mersenne Twister [cite: 104]
    // Distribui��o uniforme de inteiros no intervalo [2, 12]
    std::uniform_int_distribution<> dist(2, 12);

    // 2. Array para contar as ocorr�ncias de cada soma
    // Usamos um vetor de tamanho 13 (�ndices 0-12) e inicializamos com 0.
    // Ignoraremos os �ndices 0 e 1 para facilitar.
    std::vector<int> contador(13, 0);

    const int NUMERO_DE_SORTEIOS = 1000;

    // 3. Realiza os 1000 sorteios
    for (int i = 0; i < NUMERO_DE_SORTEIOS; ++i) {
        int soma_sorteada = dist(gen); // Sorteia um n�mero entre 2 e 12
        contador[soma_sorteada]++;      // Incrementa o contador para a soma que saiu
    }

    // 4. Exibe os resultados
    std::cout << "Frequencia de cada soma apos " << NUMERO_DE_SORTEIOS << " sorteios:\n";
    for (int i = 2; i <= 12; ++i) {
        std::cout << "Soma " << i << ": " << contador[i] << " vezes\n";
    }

    return 0;
}
