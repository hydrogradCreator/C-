#include <iostream>
#include <string>


using namespace std;


int main(){

    //fazer um for que lê a string até não ter nada

    cout << "Seu tweet: " << endl;

    string tweet;

    int aux1 = 0;
    int aux0 = 0;

    while(cin >> tweet){

        for( int i = 0; i < tweet.length(); i++){


            if(tweet[i] == '@'){
                aux0++;
                cout << tweet << endl;

                if(aux0 == 0){
                    cout << "Não há marcações" << endl;
                }

            } 

            if(tweet[i] == '#'){
                aux1++;
                cout << tweet << endl;

                if(aux1 == 0){
                        cout << "Não há hashtags" << endl;
                    }
            } 
        }
    }



    return 0;
}