#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(){

    // 1) Declare uma variável do tipo inteiro e preencha com o valor informado na entrada

    int var;
    cin >> var;
    cout << "valor de var: " << var << endl;
    
    // 2) Declare um ponteiro para inteiros e inicialize com valor nulo
    
    int *ptr = nullptr;
    cout << "valor de var: " << var << endl;

    // 3) Declare um vetor de inteiros com tamanho informado na entrada e preencha com os dados passados
    
    int vetor[var];
    for(int i=0; i < var; i++){
        cin >> vetor[i];
    }
    cout << "valor de var: " << var << endl;

    // 4) Imprima o ENDEREÇO da variável declarada em (1)
    
    cout << &var << endl;
    cout << "valor de var: " << var << endl;

    // 5) Imprima o VALOR da variável declarada em (1)
    cout << var << endl;
    cout << "valor de var: " << var << endl;

    // 6) Imprima o ENDEREÇO da variável declarada em (2)
    
    cout << &ptr << endl;
    cout << "valor de var: " << var << endl;
    
    // 7) Imprima o VALOR da variável declarada em (2)
    
    cout << ptr << endl;
    cout << "valor de var: " << var << endl;

    // 8) Imprima o ENDEREÇO da variável declarada em (3)
    cout << &vetor << endl;
    cout << "valor de var: " << var << endl;

    // 9) Imprima o ENDEREÇO da primeira posição da variável declarada em (3)
    cout << &vetor[0] << endl;
    cout << "valor de var: " << var << endl;

    // 10) Imprima o VALOR da primeira posição da variável declarada em (3)
    cout << vetor[0] << endl;
    cout << "valor de var: " << var << endl;

    // 11) Atribua o ENDEREÇO da variável declarada em (1) à variável declarada em (2)
    ptr = &var;
    cout << "valor de var: " << var << endl;

    // 12) Imprima o VALOR da variável declarada em (2)
    
    cout << *ptr << endl;
    cout << "valor de var: " << var << endl;

    // 13) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
   
    cout << &ptr << endl;
    cout << "valor de var: " << var << endl;

    // 14) Imprima o resultado da comparação do ENDEREÇO de (1) e do VALOR de (2)
    
    cout << "ENDEREÇO DE (1): " << &var << " VALOR DE (2): " << *ptr << endl;
    cout << "valor de var: " << var << endl;

    // 15) Coloque o VALOR '5' no ENDEREÇO apontado por (2)
    
    *ptr = 5;
    cout << "valor de var: " << var << endl;
    // 16) Imprima o VALOR da variável declarada em (1)
    
    cout << var << endl;
    cout << "valor de var: " << var << endl;
    // 17) Atribua o ENDEREÇO da variável (3) à variável declarada em (2)
    
    ptr = &vetor[0];
    cout << "valor de var: " << var << endl;
    // 18) Imprima o VALOR da variável declarada em (2)

    cout << *ptr << endl;
    cout << "valor de var: " << var << endl;
    // 19) Imprima o VALOR guardado no ENDEREÇO apontado por (2)

    cout << &ptr << endl;
    cout << "valor de var: " << var << endl;

    // 20) Atribua o ENDEREÇO da primeira posição de (3) à variável declarada em (2)
    cout << "Endereço da primeira posição : ";
    ptr = &vetor[0];
    
    // 21) Imprima o VALOR da variável declarada em (2)

    cout << *ptr << endl;    
    cout << "valor de var: " << var << endl;
    // 22) Imprima o VALOR guardado no ENDEREÇO apontado por (2)

    cout << &ptr << endl;
    cout << "valor de var: " << var << endl;

    // 23) Multiplique todos os valores do vetor declarado em (3) por '10', porém manipulando apenas a variável (2)

        for(int i =0; i < sizeof(vetor) ; i++){
            ptr[i]  *= 10;
            cout << ptr[i] << endl;
        }
    cout << "valor de var: " << var << endl;
         
    // 24) Imprima os elementos de (3) a partir variável do vetor utilizando a notação [] (colchetes)

    // for(int j =0; j < var; j ++){
    //     cout << "[" << vetor[j] << "]" << endl;
    // }
    

    // 25) Imprima os elementos de (3) a partir variável do vetor utilizando a notação ponteiro/deslocamento
    // Ou seja, você NÃO deve efetivamente alterar o valor do ponteiro inicial de (3)
    

    // 26) Imprima os elementos de (3) utilizando a variável (2) e a notação ponteiro/deslocamento
    // Ou seja, você NÃO deve efetivamente alterar o valor do ponteiro inicial de (3)
    

    // 27) Atribua o ENDEREÇO da quinta posição de (3) à variável declarada em (2)
    

    // 28) Imprima o VALOR da variável declarada em (2)
    

    // 29) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    

    // 30) Imprima o VALOR guardado no ENDEREÇO do ponteiro (2) decrementado de 4
    

    // 31) Declare um ponteiro para ponteiro e o inicialize com o ENDEREÇO da variável (2)
    

    // 32) Imprima o VALOR da variável declarada em (31)
    

    // 33) Imprima o ENDEREÇO da variável declarada em (31)
    

    // 34) Imprima o VALOR guardado no ENDEREÇO apontado por (31)
    

    // 35) Imprima o VALOR guardado no ENDEREÇO do ponteiro apontado por (31)
    
    
    return 0;
}