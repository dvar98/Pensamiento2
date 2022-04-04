#include <iostream>
#include <string>

using namespace std;

int main()
{
    float temp,com;
    cout << "Temperatura donde se va plantar en grados C°"<< endl;
    cin >> temp;
    cout << "Contiente donde se desea plantar"<< endl<< "America(1)"<< endl<< "Europa(2)"<< endl << "Asia(3)"
        << endl << "Oceania (4)" << endl << "Africa(5)"<< endl;
    cin >> com;
    switch (com)
    {
        case 1:
            if (temp >=32 && temp<=70)
            {
                cout << "Arbol a plantar es Roble";
            }
            else
            {
                if (temp >85)
                {
                    cout <<"Arbol a plantar es Plama de cera";
                }
                else
                {
                    cout <<"Revisar el continente a plantar";
                }
            }
            break;
            
        case 2:
            if (temp >=70 && temp<=85)
            {
                cout << "Arbol a plantar es Roble";
            }
            else
            {
                if (temp>85)
                {
                    cout <<"Arbol a plantar es Plama de cera"; 
                }
                else
                {
                    cout <<"Revisar Contiente ingresado";
                }
            }
            break;
            
        case 3:
            if (temp >=70 && temp<=85)
            {
                cout << "Arbol a plantar es Cedro";
            }
            else
            {
                cout <<"Revisar el continente a plantar";
            }
            break;
            
        case 4:
            if (temp >=10 && temp <=32)
            {
                cout << "Arbol a plantar es Pino";
            }
            else
            {
                cout <<"Revisar el continente a plantar";
            }
            break;
            
        case 5:
            if ( temp<=10 )
            {
                cout <<"Arbol a plantar es Eucalipto";
            }
            else
            {
                cout <<"Revisar el continente a plantar";
            }
            break
        
        default:
            cout << "Revisar los datos ingresados";
    }
    return 0;
}
