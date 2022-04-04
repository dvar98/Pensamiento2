#include<iostream>  
  
using namespace std; 

int main() 
{ 
  long prs1,prs2,prs3,tnt,tnt2,tnt3,Fp,bol,cp1,cp2,cp3;
    
    Fp = 0;
    tnt = 0;
    tnt2 = 0;
    tnt3 = 0;
    prs1 = 100000;
    prs2 = 750000;
    prs3 = 950000;
    
    cout<<"Cual en cual localida quiere comprar"<< endl <<"localida 1"<<endl<<"localida 2"<<endl<<"localida 3"<<endl;
    cin >> bol;
    
    switch(bol)
    {
        case 1:
            cout <<"El precio de boleta localidad1 1 $"<< prs1 << endl;
            cout <<"# de boletas que quiere comprar ?"<< endl;
            cin >> cp1;
            tnt = (cp1*prs1);
            cout  <<"El total de venta de boletos en  localida 1 es "<< cp1 
                << " El total recaudado fue de $: "<< tnt << endl;
            break;
            
        case 2:
            cout <<"El precio de boleta localidad 2 $"<< prs2 << endl;
            cout <<"# de boletas que quiere comprar ?"<< endl;
            cin >> cp2;
            tnt2 = (cp2*prs2);
            cout  <<"El total de venta de boletos en  localida 2 es "<< cp2 
                << " El total recaudado fue de $: "<< tnt2 << endl;
            break;
            
        case 3:
            cout <<"El precio de boleta localidad 3 $"<< prs3 << endl;
            cout <<"# de boletas que quiere comprar ?"<< endl;
            cin >> cp3;
            tnt3 = (cp3*prs3);
            cout  <<"El total de venta de boletos en  localida 3 es "<< cp3 
                << " El total recaudado fue de $: "<< tnt3 << endl;
            break;
        
        default:
            cout <<"Ingrese una localidad valida";
    }
    Fp =(tnt+tnt2+tnt3);
    cout <<"El total de venta fue de $"<< Fp;
  
  return 0; 
} 
