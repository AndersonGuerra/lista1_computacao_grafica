#include <iostream>

using namespace std;

int main()
{
    int user_input = 0;

    while (true){
        cout << "Insira um numero valido \n";
        cin >> user_input;
        int aux = user_input;

        // verifica se o numero é maior que 2
        if (user_input >= 2){
            // for para criar a quantidade de linhas
            // equivalente ao user_input
            for (int i = 0; i < user_input; i ++){
                // for para printar espacos iniciais
                // vai diminuindo a cada iteração do for de cima
                for (int j = aux; j > 0; j--) {
                    cout << " ";
                }
                // variavel auxiliar que sera utilizada pelo segundo for
                int aux2 = 0;
                // printa a quantidade de numeros solicitados
                for (int k = 0; k <= i; k++) {
                    cout << k+1;
                    // faz o auxiliar valer k
                    aux2 = k;
                }
                // printa os numeros decrescentes de acordo
                // com o valor da var auxiliar
                for (int l = aux2; l > 0; l--){
                    cout << l;
                }
                cout << "\n";
                aux--;

            }
            break;
        }
    }
    return 0;
}
