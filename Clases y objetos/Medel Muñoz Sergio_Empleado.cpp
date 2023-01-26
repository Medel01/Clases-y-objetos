#include <iostream>
#include <cstdlib>



using namespace std;

class Empleado{

private:
string nombre;
string domicilio;
string ReportaA;
float sueldo;
int ClaveEmpleado;

protected:

public:
Empleado (string, string, string, float, int);
void imprime ();
void CambiaDomic ();
void CambiaReportaA ();
void ActualSueldo ();
};

Empleado::Empleado (string nom, string dom,string repor,float sue, int clav){
nombre = nom;
domicilio=dom;
ReportaA=repor;
sueldo=sue;
ClaveEmpleado=clav;

}
void Empleado::imprime (){
cout<<"Los datos del empleado son: "<<endl<<"Nombre: "<<nombre<<endl<<"Domicilio: "<<domicilio<<endl<<"sueldo: "<<sueldo<<endl<<"Clave: "<<ClaveEmpleado<<endl;
}
void Empleado::CambiaDomic (){
    cout<<"Ingrese su clave de empleado: "<<endl;
    cin>>ClaveEmpleado;
    cout<<"Ingrese el nuevo domicilio: "<<endl;
    cin>>domicilio;
    cout<<"El nuevo domicilio es: "<<domicilio<<endl;
}
void Empleado::ActualSueldo (){
    cout<<"Ingrese su clave de empleado: "<<endl;
    cin>>ClaveEmpleado;
    cout<<"Ingrese su sueldo actual: "<<endl;
    cin>>sueldo;
    cout<<"Ingrese el porcentaje de aumento de sueldo: "<<endl;

}
void Empleado::CambiaReportaA(){
    cout<<"Persona a la cual quiere reportar: "<<endl;
    cin>>ReportaA;
    cout<<"Esta persona ha sido reportada: "<<ReportaA<<endl;
    cout<<"Ingrese nombre de persona nueva: "<<endl;
    cin>>ReportaA;
    cout<<"El nombre del nuevo empleado es: "<<ReportaA<<endl;
}
void pausa();
int main()
{
    float sueldo, porcentaje, sueldof;
   bool bandera=false;
   char tecla;

   do{
    system("cls");
        cout<<"Eliga la opcion que desea realizar. "<<endl;
        cout<<"---------------------------------------"<<endl<<endl;
        cout<<"1. Cambiar el domicilio de un empleado. "<<endl;
        cout<<"2. Actualizar sueldo del empleado. "<<endl;
        cout<<"3. Imprimir los datos de un empleado. "<<endl;
        cout<<"4. Cambiar nombre de la persona reportada. "<<endl;
        cout<<"5. Salir. "<<endl<<endl;
        cout<<"Elige una opcion: "<<endl;
        cin>>tecla;

        switch(tecla){
        case '1':{
        system("cls");
        Empleado JefePlanta ("Robert Rios","Calle ok No.74","a",1250.2,9897);
        JefePlanta.CambiaDomic();
        system("pause");
        }
        break;
        case '2':{
        system("cls");
        Empleado JefePlanta ("Robert Rios","Calle ok No.74","a",1250.2,9897);
        JefePlanta.ActualSueldo();
        system("pause");
        }
        break;
        case '3':{
        system("cls");
        Empleado JefePlanta ("Robert Rios","Calle ok No.74","No cuenta con reporte",1250.2,9897);
        JefePlanta.imprime();
        system("pause");

        }
        break;
        case '4':{
        system("cls");
        Empleado JefePlanta ("Robert Rios","Calle ok No.74","Cuenta con reporte",1250.2,9897);
        JefePlanta.CambiaReportaA();
        system("pause");

        }
        break;
        case '5':
            bandera=true;
            system("pause");
            break;

        }
   }
   while(bandera!=true);
    return 0;
}
void pausa()
{
cout<<"Pulsa cualquier tecla para continuar.";
getwchar();
getwchar();
}
