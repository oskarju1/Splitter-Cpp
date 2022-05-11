#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <fstream>
#include <windows.h>


using namespace std;




//"animacja" ³adowania
void ladowanie()
{
    for(int i=0; i < 11 ; i++)
    {
    cout<<".";
    Sleep(200);
    }
}


//! DZIELENIE PLIKU
void dziel_plik()
{




    //@tu funkcja





    //plik.close();
}


//! SCALANIE PLIKU
void scal_pliki()
{

    //@tu funkcja




    //plik.close();
}




//! PROGRAM
void zacznijprogram()
{
    int scaldziel, rozmiar;
    string nazwapliku;

    cout<<"Wpisz rodzaj funkcji(1.dzielenie lub 2.scalanie),"<<endl<<"rozmiar plikow(w bajtach) po podziale oraz nazwe"<<endl;
    cout<<"pliku z rozszerzeniem np. 1 54 plik.txt. W przypadku"<<endl<<"scalania rozmiar nie ma znaczenia(wpisac 0)."<<endl<<endl;
    cout<<"#program.exe - ";
    cin>>scaldziel>>rozmiar>>nazwapliku;                        //podawanie wartosci
    system("CLS");

    fstream plik;
    plik.open(nazwapliku.c_str());
    if(plik.good()==false)
    {
        cout<<"Podaj wlasciwe wartosci!"<<endl;
        nazwapliku = rozmiar = scaldziel = '/0';
        ladowanie();
		system("CLS");
		zacznijprogram();
    }

    switch(scaldziel)
    {
        case 1:
            scal_pliki();
        break;

        case 2:
            dziel_plik();
        break;

        default:
            {
                cout<<"le wybrana funkcja";
                scaldziel='/0';
                ladowanie();
                system("CLS");
                zacznijprogram();
            }
    }
}


//! MENU
void menu()
{
    int wybor;
    cout<<"Witaj w programie SPLITER"<<endl<<endl<<"Program polega na dzieleniu duzego pliku w male o"<<endl<<"takiej samej wielkosci i laczeniu ich potem w calosc."<<endl<<endl;
    cout<<"1-Zacznij program"<<endl<<"2-Zakoncz program"<<endl<<endl<<"Wybierz:";

    cin>>wybor;             //wybor opcji zacznij/zakoncz
    switch(wybor)
    {
        case 1:
            system("CLS");
            zacznijprogram();
        break;

        case 2:
            system("CLS");
            exit(0);
        break;

        default:
            {
                system("CLS");
                cout<<endl<<"Podaj dobry wybor!"<<endl;
                wybor='/0';
                ladowanie();
                system("CLS");
                menu();
            }
    }

}





//! MAIN
int main()
{
    menu();
    return 0;
}
