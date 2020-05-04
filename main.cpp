#include <iostream>
#include <fstream> //do przesy³ania plików miêdzy sob¹
#include <algorithm> //biblioteka do sortowania
#include <conio.h> //do getch()
using namespace std;
int a;
int tab[500];
int w;
int c, d;
int main()
{
    cout << "Witaj w programie Bartosza Osikowskiego" << endl << "Mamy w pliku tekstowym zapisanych 500 losowych liczb" << endl;
    cout << "Jezeli chcesz, aby 500 liczb zostalo posortowane rosnaco (sczytywanie za pomoca tablic) wybierz 1. " << endl;
    cout << "Jezeli chcesz, aby 500 liczb zostalo posortowane malejaco (sczytywanie za pomoca tablic) wybierz 2. " << endl;
    cout << "Jezeli chcesz wiedziec ile jest liczb parzystych z pieciuset liczb (sczytywanie za pomoca .good()) wybierz 3. " << endl;
    cout << "Jezeli chcesz wiedziec ile jest liczb nieparzystych z pieciuset (sczytywanie za pomoca .good()) liczb wybierz 4. " << endl;
    cout << "Jezeli chcesz wyjsc naciscij 5." << endl;

    cout << "Wprowadz swoj wybor: "; cin >> w;


    fstream odczyt;

    switch(w)
    {
    case 1:
        odczyt.open("liczby.txt",ios::in);
        for(int j=0; j<500; j++)
        {
            odczyt >> tab[a];
            a++;
        }
        sort(tab,tab+500); //u¿ycie komendy która sortuje (zakres)
        cout << "Oto liczby posegregowane rosnaco: " << endl;
        for(int i=0; i<500; i++) //ustawienie aktualne to sortowanie rosn¹ce
        {
            cout << tab[i] << endl;
        }

        odczyt.close();
        cout << "Nacisnij dowolny przycisk, aby kontynuowac";
        //bawilem sie troszke funkcjami, zeby program przypominal prawdziwy,
        getch();  //to zatrzymuje konsole przed restem i czeka na enter, badz dowolny przycisk
        system( "cls" ); //to czysci konsole
        main(); //tutaj rekurencja, aby program sie powtorzyl
        break;


    case 2:
        odczyt.open("liczby.txt",ios::in);
        for(int j=0; j<500; j++)
        {
            odczyt >> tab[a];
            a++;
        }
        sort(tab,tab+500); //u¿ycie komendy która sortuje (zakres)
        cout << "Oto liczby posegregowane malejaco: " << endl;
        for(int i=500; i>0; i--) //ustawienie aktualne to sortowanie rosn¹ce
        {
            cout << tab[i] << endl;
        }
        odczyt.close();
        cout << "Nacisnij dowolny przycisk, aby kontynuowac";
        getch();
        system( "cls" );
        main();
        break;


    case 3:
        odczyt.open("liczby.txt",ios::in);
        int linia;
        cout << "Oto ilosc parzystych liczb: ";
        while(odczyt.good())
        {
            odczyt >> linia;
            if(linia%2==0)
            {
                c++;
            }
        }


        cout << c << endl;
        odczyt.close();
        c=0;  //tutaj trzeba wyzerowac, bo inaczej bedzie sie sumowac liczba
        cout << "Nacisnij dowolny przycisk, aby kontynuowac";
        getch();
        system( "cls" );
        main();
        break;


    case 4:
        odczyt.open("liczby.txt",ios::in);
        int liniaa;
        cout << "Oto ilosc nieparzystych liczb: ";
        while(odczyt.good())
        {
            odczyt >> liniaa;
            if(liniaa%2!=0)
            {
                d++;
            }
        }

        cout << d << endl;
        odczyt.close();
        d=0;
        cout << "Nacisnij dowolny przycisk, aby kontynuowac";
        getch();
        system( "cls" );
        main();
        break;
    case 5:
        exit(0); //tutaj gdy wcisniemy 5 program sie zatrzymuje

    default:
        cout << "Nie poprawna wprowadzona liczba, nacisnij dowolny przycisk, aby ponowic program";
        getch();
        system( "cls" );
        main();
        break;
    }


    return 0;
}
