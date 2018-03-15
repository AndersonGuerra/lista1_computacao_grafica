#include <iostream>

using namespace std;

int main()
{
    int user_input = 0;
    bool isVazado = true;

    while (true){
        cout << "Insira um numero valido \n";
        cin >> user_input;
        cout << "Vazado ou preenchido? Responda com 1 ou 0, respectivamente \n";
        cin >> isVazado;
        int aux = user_input;

        // verifica se o numero é maior que 2
        if (user_input >= 0){
            // for para criar a quantidade de linhas
            // equivalente ao user_input
            for (int i = 0; i < user_input; i ++){
                // verifica se nao esta na ultima linha da piramide
                // para printar a linha completa caso seja vazado
                if (i != user_input-1){
                    // for menor que a quantidade de linhas
                    // para imprimir os asteriscos
                    // de maneira crescente
                    for (int j = 0; j <= i; j ++){
                        // varifica se nao esta na primeira
                        // ou ultima coluna
                        if (j != 0 && j != i){
                            // caso seja vazado
                            if (isVazado == 0){
                                cout << "*";
                            }else if(isVazado == 1){
                                cout << " ";
                            }
                        }else{
                            cout << "*";
                        }
                    }
                }else{
                    for (int j = 0; j <= i; j ++){
                        cout << "*";
                    }
                }
                cout << "\n";
            }
            break;
        }
    }
    return 0;
}
