#include<iostream>  
#include <string>
  

using namespace std; 


int main() 
{ 
    
    string nomB,Trs;
    long pog,ty,id;
    int crt;

    cout <<"Ingrese nombre del estudiante"<<endl ;
    cin >> nomB;
    cout <<"Ingrese semestre que esta cursando (1-10)"<< endl;
    cin >> pog;
    cout <<"Ingrese la ingenieria que esta cursando o consultar:" << endl << "Sistemas(1)" << endl << "Electronica(2)" << endl 
        << "Ambiental(3)" << endl << "Industrial(4)" << endl << "Quimica(5)" <<endl;
    cin >>crt;
    cout << "Pertence alguna caja de compensacion Si(Y) o No (N)";
    cin >> Trs;
    
    switch (crt)
    {
        case 1:
            if (Trs == "Y")
            {
                id = 15000;
                ty = 4780000+(id)-(4780000*0.10);
                cout <<"El estudiante "<< nomB << " del programa ingenieria de sistemas del semestre "<< pog << " debe pagar "<< ty <<endl;
            }
            else
            {
              if (pog >=1 && pog<=5)
              {
                  id = 30000;
                  ty = id+4780000;
                  cout <<"El estudiante "<< nomB << " del programa ingenieria de sistemas del semestre "<< pog << " debe pagar "<< ty << endl;
              }
                else
                {
                    id = 45000;
                    ty = id+4780000;
                    cout <<"El estudiante "<< nomB << " del programa ingenieria de sistemas del semestre "<< pog << " debe pagar "<< ty << endl;
                }
                
            }
            break;
        case 2:
            if (Trs == "Y")
            {
                id = 15000;
                ty = 4520000+(id)-(0.10*4520000);
                cout <<"El estudiante "<< nomB << " del programa ingenieria Electronica del semestre "<< pog << " debe pagar "<< ty << endl;
            }
            else
            {
              if (pog >=1 && pog<=5)
              {
                  id = 30000;
                  ty = id+4520000;
                  cout <<"El estudiante "<< nomB << " del programa ingenieria Ambiental "<< pog << " debe pagar "<< ty << endl;
              }
                else
                {
                    id = 45000;
                    ty = id+4520000;
                    cout <<"El estudiante "<< nomB << " del programa ingenieria Ambiental del semestre "<< pog << " debe pagar "<< ty << endl;
                }
                
            }
            break;
            
        case 3:
            if (Trs == "Y")
            {
                id = 15000;
                ty = 4640000+(id)-(0.10*4640000);
                cout <<"El estudiante "<< nomB << " del programa ingenieria Ambiental del semestre "<< pog << " debe pagar "<< ty << endl;
            }
            else
            {
              if (pog >=1 && pog<=5)
              {
                  id = 30000;
                  ty = id+4640000;
                  cout <<"El estudiante "<< nomB << " del programa ingenieria Ambiental "<< pog << " debe pagar "<< ty << endl;
              }
                else
                {
                    id = 45000;
                    ty = id+4640000;
                    cout <<"El estudiante "<< nomB << " del programa ingenieria Ambiental del semestre "<< pog << " debe pagar "<< ty << endl;
                }
                
            }
            break;
            
        case 4:
            if (Trs == "Y")
            {
                id = 15000;
                ty = 4700000+(id)-(0.10*4700000);
                cout <<"El estudiante "<< nomB << " del programa ingenieria Industrial del semestre "<< pog << " debe pagar "<< ty << endl;
            }
            else
            {
              if (pog >=1 && pog<=5)
              {
                  id = 30000;
                  ty = id+4700000;
                  cout <<"El estudiante "<< nomB << " del programa ingenieria Industrial "<< pog << " debe pagar "<< ty << endl;
              }
                else
                {
                    id = 45000;
                    ty = id+4700000;
                    cout <<"El estudiante "<< nomB << " del programa ingenieria Industrial del semestre "<< pog << " debe pagar "<< ty << endl;
                }
                
            }
            break;
            
        case 5:
            if (Trs == "Y")
            {
                id = 15000;
                ty = 3995000+(id)-(0.10*3995000);
                cout <<"El estudiante "<< nomB << " del programa ingenieria Quimica del semestre "<< pog << " debe pagar "<< ty << endl;
            }
            else
            {
              if (pog >=1 && pog<=5)
              {
                  id = 30000;
                  ty = id+3995000;
                  cout <<"El estudiante "<< nomB << " del programa ingenieria Quimica "<< pog << " debe pagar "<< ty << endl;
              }
                else
                {
                    id = 45000;
                    ty = id+3995000;
                    cout <<"El estudiante "<< nomB << " del programa ingenieria Quimica del semestre "<< pog << " debe pagar "<< ty << endl;
                }
                
            }
            break;
            
        default:
            cout << "Ingrese las materias que estan en la lista de opciones";
          }
    return 0; 
} 
