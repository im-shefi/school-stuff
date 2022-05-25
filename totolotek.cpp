#include <iostream>
#include <stdio.h> // NULL
#include <stdlib.h> // srad, rand, system(cls)
#include <time.h> // time
#include <climits> // INT_MAX

using namespace std;

int main(){

    int yourNumbers[6];
    int luckyNumbers[6];
    srand(time(NULL));

    for(int i = 0; i < 6; i++){
        luckyNumbers[i] = rand()%48+1;
    }

    cout << "===== TOTOLOTEK =====" << endl;
    cout << "Podaj 6 liczb z zakresu od 1 do 49" << endl << endl;

    for(int i = 0; i < 6; i++){

        cout << "Podaj " << i+1 << " liczbe: ";
        cin >> yourNumbers[i];

        // sprawdza czy wprowadzona wartosc jest typu int
        if(cin.fail()){
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cout << "[!] Podaj poprawna wartosc!" << endl;
            i--;
        }
        else if((yourNumbers[i] > 49) || (yourNumbers[i] < 1)){
            cout << "[!] Podaj poprawna wartosc!" << endl;
            i--;
        }
        else{
            for(int j = 0; j < i; j++){
                if(yourNumbers[i]==yourNumbers[j]){
                    cout << "[!] Liczby nie moga sie powtarzac!" << endl;
                    i--;
                }
            }
        }
    }

    int correct=0;
    int correctNumbers[6];

    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            if(yourNumbers[j]==luckyNumbers[i]){
                correct++;
                correctNumbers[correct-1]=yourNumbers[j];
            }
        }
    }

    system("clear");
    cout << "===== TOTOLOTEK =====" << endl;
    if(correct==6){
        cout << "WIELKA WYGRANA! Odgadles wszystkie 6 liczb poprawnie!!!" << endl;
    }
    else if(correct>0){
        cout << "Poprawnie odgadnietych liczb: " << correct << endl;
        cout << "Te liczby to: ";
        for(int i = 0; i < correct; i++){
            cout << correctNumbers[i] << " ";
        }
        cout << "\n\n";
    }
    else{
        cout << "Nie odgadles nic poprawnie! :(" << endl;
    }


    return 0;
}