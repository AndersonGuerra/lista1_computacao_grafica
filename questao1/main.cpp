#include <iostream>

using namespace std;

int main()
{
    int user_base= 0;
    int user_tronco_a= 0;
    int user_tronco_l= 0;

    while (true){
        cout << "Insira um numero valido para a base\n";
        cin >> user_base;
        cout << "Insira um numero valido para a altura do tronco\n";
        cin >> user_tronco_a;
        cout << "Insira um numero valido para a largura do tronco\n";
        cin >> user_tronco_l;
        int aux = (int)user_base/2;

        // verifica se o numero é maior que 2 e se é impar
        if (user_base > 2 && user_base%2 != 0 && user_tronco_a >=1 && user_tronco_a  <= (user_base/2)){
            // for para criar a quantidade de linhas
            // equivalente ao user_base
            for (int i = 0; i < (user_base/2)+1; i ++){
                // for para printar espacos iniciais
                // vai diminuindo a cada iteração do for de cima
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
            for (int i = 0; i < user_tronco_a; i++){
                for (int j = 0; j < ((user_base/2) - (user_tronco_l/2)); j++) {
                    cout << " ";
                }

                for (int k = 0; k < user_tronco_l; k++) {
                    cout << "*";
                }
                cout << "\n";
            }
            break;
        }
    }
    return 0;
}
