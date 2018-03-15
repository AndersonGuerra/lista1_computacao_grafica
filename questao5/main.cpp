#include <iostream>

using namespace std;

int main()
{
    int user_input = 0;
    bool isVazado = true;

    while (true){
        cout << "Insira um numero valido para altura\n";
        cin >> user_input;
        int aux = user_input;

        // verifica se o numero é maior que 2
        if (user_input >= 0){
            // for para criar a quantidade de linhas
            // equivalente ao user_input
            for (int i = 0; i < user_input; i++){
                for (int j = 0; j < user_input; j++){
                    if (i == 0 || i == user_input-1
                        || j == 0 || j == user_input-1
                        || i==j){
                        cout << "*";
                    }else{
                        cout << " ";
                    }
                }
                cout << "\n";
            }

            break;
        }
    }
    return 0;
}
