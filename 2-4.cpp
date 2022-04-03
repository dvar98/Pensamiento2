#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main()
{
    string ngh;
    float tmp,prs,ty;
    int zn;
    setlocale(LC_CTYPE, "Spanish");
    
    cout <<"Ingresa la zona de llamada:" << endl << "America del norte(1)"<< endl << "America central(2)" << endl << "America del sur(3)" << endl 
        << "Europa(4)" << endl << "Asia(5)" << endl << 
        "África(6)"<< endl << "Oceanía(7)"<< endl;
    cin >> zn;
    cout <<"Cuanto duro la llamada" << endl;
    cin >> tmp;
    cout <<"La llamada se realizo entre las 20:00 y 24:00 horas Si(Y) ò No (N)"<< endl;
    cin >> ngh;
    switch (zn)
    {
        case 1:
            if (tmp <=3 && ngh == "Y")
            {
                prs = (tmp*200);
                ty = prs-(prs*0.05);
                cout << "El costo total de la llamada " << tmp << " minutos a America del norte es de $ "<< ty;
            }
            else
            {
                if (tmp <=3 && ngh == "N")
                {
                    prs = (tmp*200);
                    cout << "El costo total de la llamada " << tmp << " minutos a America del norte es de $ "<< prs;
                }
            }
            if (tmp >=4 && tmp<=10 && ngh =="Y")
            {
                prs = (tmp*150);
                ty = prs-(prs*0.05);
                cout << "El costo total de la llamada " << tmp << " minutos a America del norte es de $ "<< ty;
            }
            else
            {
                if (tmp >=4 && tmp<=10 && ngh =="N")
                {
                    prs = (tmp*150);
                    cout << "El costo total de la llamada " << tmp << " minutos a America del norte es de $ "<< prs;
                }
            }
            if (tmp >=10 && ngh =="Y")
            {
                prs = (tmp*100);
                ty = prs-(prs*0.05);
                cout << "El costo total de la llamada " << tmp << " minutos a America del norte es de $ "<< ty;
            }
            else
            {
                if (tmp >=10 && ngh =="N")
                {
                    prs = (tmp*100);
                    cout << "El costo total de la llamada " << tmp << " minutos a America del norte es de $ "<< prs;
                }
            }
            break;
        case 2:
            if (tmp <=3 && ngh == "Y")
            {
                prs = (tmp*190);
                ty = prs-(prs*0.05);
                cout << "El costo total de la llamada " << tmp << " minutos a America central es de $ "<< ty;
            }
            else
            {
                if (tmp <=3 && ngh == "N")
                {
                    prs = (tmp*190);
                    cout << "El costo total de la llamada " << tmp << " minutos a America central es de $ "<< prs;
                }
            }
            if (tmp >=4 && tmp<=10 && ngh =="Y")
            {
                prs = (tmp*130);
                ty = prs-(prs*0.05);
                cout << "El costo total de la llamada " << tmp << " minutos a America central es de $ "<< ty;
            }
            else
            {
                if (tmp >=4 && tmp<=10 && ngh =="N")
                {
                    prs = (tmp*130);
                    cout << "El costo total de la llamada " << tmp << " minutos a America central es de $ "<< prs;
                }
            }
            if (tmp >=10 && ngh =="Y")
            {
                prs = (tmp*90);
                ty = prs-(prs*0.05);
                cout << "El costo total de la llamada " << tmp << " minutos a America central es de $ "<< ty;
            }
            else
            {
                if (tmp >=10 && ngh =="N")
                {
                    prs = (tmp*90);
                    cout << "El costo total de la llamada " << tmp << " minutos a America central es de $ "<< prs;
                }
            }
            break;  
        case 3:
            if (tmp <=3 && ngh == "Y")
            {
                prs = (tmp*150);
                ty = prs-(prs*0.05);
                cout << "El costo total de la llamada " << tmp << " minutos a America del sur es de $ "<< ty;
            }
            else
            {
                if (tmp <=3 && ngh == "N")
                {
                    prs = (tmp*150);
                    cout << "El costo total de la llamada " << tmp << " minutos a America del sur es de $ "<< prs;
                }
            }
            if (tmp >=4 && tmp<=10 && ngh =="Y")
            {
                prs = (tmp*100);
                ty = prs-(prs*0.05);
                cout << "El costo total de la llamada " << tmp << " minutos a America del sur es de $ "<< ty;
            }
            else
            {
                if (tmp >=4 && tmp<=10 && ngh =="N")
                {
                    prs = (tmp*100);
                    cout << "El costo total de la llamada " << tmp << " minutos a America del sur es de $ "<< prs;
                }
            }
            if (tmp >=10 && ngh =="Y")
            {
                prs = (tmp*50);
                ty = prs-(prs*0.05);
                cout << "El costo total de la llamada " << tmp << " minutos a America del sur es de $ "<< ty;
            }
            else
            {
                if (tmp >=10 && ngh =="N")
                {
                    prs = (tmp*50);
                    cout << "El costo total de la llamada " << tmp << " minutos a America del sur es de $ "<< prs;
                }
            }
            break;
        case 4:
            if (tmp <=3 && ngh == "Y")
            {
                prs = (tmp*300);
                ty = prs-(prs*0.05);
                cout << "El costo total de la llamada " << tmp << " minutos a Europa es de $ "<< ty;
            }
            else
            {
                if (tmp <=3 && ngh == "N")
                {
                    prs = (tmp*300);
                    cout << "El costo total de la llamada " << tmp << " minutos a Europa es de $ "<< prs;
                }
            }
            if (tmp >=4 && tmp<=10 && ngh =="Y")
            {
                prs = (tmp*250);
                ty = prs-(prs*0.05);
                cout << "El costo total de la llamada " << tmp << " minutos a Europa es de $ "<< ty;
            }
            else
            {
                if (tmp >=4 && tmp<=10 && ngh =="N")
                {
                    prs = (tmp*250);
                    cout << "El costo total de la llamada " << tmp << " minutos a Europa es de $ "<< prs;
                }
            }
            if (tmp >=10 && ngh =="Y")
            {
                prs = (tmp*120);
                ty = prs-(prs*0.05);
                cout << "El costo total de la llamada " << tmp << " minutos a Europa es de $ "<< ty;
            }
            else
            {
                if (tmp >=10 && ngh =="N")
                {
                    prs = (tmp*120);
                    cout << "El costo total de la llamada " << tmp << " minutos a Europa es de $ "<< prs;
                }
            }
            break;
        case 5:
            if (tmp <=3 && ngh == "Y")
            {
                prs = (tmp*450);
                ty = prs-(prs*0.05);
                cout << "El costo total de la llamada " << tmp << " minutos a Asia es de $ "<< ty;
            }
            else
            {
                if (tmp <=3 && ngh == "N")
                {
                    prs = (tmp*450);
                    cout << "El costo total de la llamada " << tmp << " minutos a Asia es de $ "<< prs;
                }
            }
            if (tmp >=4 && tmp<=10 && ngh =="Y")
            {
                prs = (tmp*400);
                ty = prs-(prs*0.05);
                cout << "El costo total de la llamada " << tmp << " minutos a Asia es de $ "<< ty;
            }
            else
            {
                if (tmp >=4 && tmp<=10 && ngh =="N")
                {
                    prs = (tmp*400);
                    cout << "El costo total de la llamada " << tmp << " minutos a Asia es de $ "<< prs;
                }
            }
            if (tmp >=10 && ngh =="Y")
            {
                prs = (tmp*200);
                ty = prs-(prs*0.05);
                cout << "El costo total de la llamada " << tmp << " minutos a Asia es de $ "<< ty;
            }
            else
            {
                if (tmp >=10 && ngh =="N")
                {
                    prs = (tmp*200);
                    cout << "El costo total de la llamada " << tmp << " minutos a Asia es de $ "<< prs;
                }
            }
            break;
        case 6:
            if (tmp <=3 && ngh == "Y")
            {
                prs = (tmp*500);
                ty = prs-(prs*0.05);
                cout << "El costo total de la llamada " << tmp << " minutos a África es de $ "<< ty;
            }
            else
            {
                if (tmp <=3 && ngh == "N")
                {
                    prs = (tmp*500);
                    cout << "El costo total de la llamada " << tmp << " minutos a África es de $ "<< prs;
                }
            }
            if (tmp >=4 && tmp<=10 && ngh =="Y")
            {
                prs = (tmp*450);
                ty = prs-(prs*0.05);
                cout << "El costo total de la llamada " << tmp << " minutos a África es de $ "<< ty;
            }
            else
            {
                if (tmp >=4 && tmp<=10 && ngh =="N")
                {
                    prs = (tmp*450);
                    cout << "El costo total de la llamada " << tmp << " minutos a África es de $ "<< prs;
                }
            }
            if (tmp >=10 && ngh =="Y")
            {
                prs = (tmp*250);
                ty = prs-(prs*0.05);
                cout << "El costo total de la llamada " << tmp << " minutos a África es de $ "<< ty;
            }
            else
            {
                if (tmp >=10 && ngh =="N")
                {
                    prs = (tmp*250);
                    cout << "El costo total de la llamada " << tmp << " minutos a África es de $ "<< prs;
                }
            }
            break;
        case 7:
            if (tmp <=3 && ngh == "Y")
            {
                prs = (tmp*600);
                ty = prs-(prs*0.05);
                cout << "El costo total de la llamada " << tmp << " minutos a Oceanía es de $ "<< ty;
            }
            else
            {
                if (tmp <=3 && ngh == "N")
                {
                    prs = (tmp*600);
                    cout << "El costo total de la llamada " << tmp << " minutos a Oceanía es de $ "<< prs;
                }
            }
            if (tmp >=4 && tmp<=10 && ngh =="Y")
            {
                prs = (tmp*550);
                ty = prs-(prs*0.05);
                cout << "El costo total de la llamada " << tmp << " minutos a Oceanía es de $ "<< ty;
            }
            else
            {
                if (tmp >=4 && tmp<=10 && ngh =="N")
                {
                    prs = (tmp*550);
                    cout << "El costo total de la llamada " << tmp << " minutos a Oceanía es de $ "<< prs;
                }
            }
            if (tmp >=10 && ngh =="Y")
            {
                prs = (tmp*300);
                ty = prs-(prs*0.05);
                cout << "El costo total de la llamada " << tmp << " minutos a Oceanía es de $ "<< ty;
            }
            else
            {
                if (tmp >=10 && ngh =="N")
                {
                    prs = (tmp*300);
                    cout << "El costo total de la llamada " << tmp << " minutos a Oceanía es de $ "<< prs;
                }
            }
            break;
            
        default:
            cout <<"Verifica la zona ingresada";
    }
    return 0;
}
