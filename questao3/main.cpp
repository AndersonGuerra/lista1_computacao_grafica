#include <iostream>

using namespace std;

int main()
{
    int user_input = 0;

    while (true){
        cout << "Insira um numero valido \n";
        cin >> user_input;
        int aux = (int)user_input/2;

        // verifica se o numero é maior que 2
        if (user_input >= 2){
            // for para criar a quantidade de linhas
            // equivalente ao user_input
            for (int i = 0; i < (user_input/2)+1; i ++){
                // for para printar espacos iniciais
                // vai diminuindo a cada iteraчуo do for de cima
                for (int j = aux; j > 0; j--) {
                    cout << " ";
                }
                // variavel auxiliar que sera utilizada pelo segundo for
                int aux2 = 0;
                // printa a quantidade de numeros solicitados
                for (int k = 0; k <= i; k++) {
                    cout << "*";
                    // faz o auxiliar valer k
                    aux2 = i;
                }
                // printa os numeros decrescentes de acordo
                // com o valor da var auxiliar
                for (int l = aux2; l > 0; l--){
                    cout << "*";
                }
                cout << "\n";
                aux--;

            }
            aux = (int)user_input/2;
            for (int i = 0; i < (user_input/2)+1; i ++){
                // for para printar espacos iniciais
                // vai diminuindo a cada iteraчуo do for de cima
                for (int j = 0; j > aux; j--) {
                    cout << " ";
                }
                // variavel auxiliar que sera utilizada pelo segundo for
                int aux2 = user_input;
                // printa a quantidade de numeros solicitados
                for (int k = aux2; k > 0; k--) {
                    cout << "*";
                    // faz o auxiliar valer k
                    aux2--;
                }
                // printa os numeros decrescentes de acordo
                // com o valor da var auxiliar

                cout << "\n";
                aux--;

            }
            break;
        }
    }
    return 0;
}
