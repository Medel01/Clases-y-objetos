#include <iostream>
#include <cstdlib>

using namespace std;
class Materia {
    private:
int clave;
string nombre;
string ProfesorTit;
string LibroTexto;

protected:

        public:

            Materia (int,string, string,string);
            void imprime ();
            void CambiaClave ();
            void CambiaProfe ();

};

Materia::Materia (int cla, string nom, string profe, string lib){
clave=cla;
nombre=nom;
ProfesorTit=profe;
LibroTexto=lib;
}


void Materia::CambiaProfe (){
cout<< "Ingrese el nombre del nuevo profesor "<<endl;
cin>>ProfesorTit;
cout<<"Tu nuevo profesor sera: "<<ProfesorTit<<endl;


}
void Materia::imprime(){

cout<<"Los datos de la materia son :"<<endl<<"Clave de la materia: "<<clave<<endl<<"Nombre de la materia: "<<nombre<<endl<<"Nombre del profesor: "<<ProfesorTit<<endl<<"Libro de texto: "<<LibroTexto<<endl;

}
void Materia::CambiaClave (){

cout<<"Ingrese la nueva clave de la materia: "<<endl;
cin>>clave;
cout<<"La nueva clave de la maeteria de programacion es: " <<clave<<endl;
}
void pausa();
int main()
{
bool bandera=false;
char tecla;

do{

    system("cls");
    cin.clear();
    cout<<"Eliga la opcion que desea realizar"<<endl;
    cout<<"--------------------------------------"<<endl<<endl;
    cout<<"1. Cambiar la clave de la materia programacion "<<endl;
    cout<<"2. Cambiar el nombre del maestro de la materia BasesDatos "<<endl;
    cout<<"3. Imprimir todos los datos de la materia BasesDatos" <<endl;
    cout<<"4. Salir"<<endl<<endl;
    cout<<"Elige una opcion"<<endl;
     cin>>tecla;

     switch(tecla){
 case '1':{
    system("cls");
    Materia Programacion (12345, "b", "c","s");
    Programacion.CambiaClave();
    system("pause");
 }
    break;

 case '2':{
    system("cls");
    Materia BasesDatos (12345, "d", "Jose Juan", "h");
    BasesDatos.CambiaProfe ();
system("pause");
 }
    break;


 case '3':{
     system("cls");
     Materia BasesDatos (12345, "BasesDatos","Juan Perez","Programacion orientada a objetos" );
     BasesDatos.imprime();
     system("pause");
 }

    break;
 case '4':
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
    cout<<"Pulsa una tecla para continuar";
    getwchar();
    getwchar();
}
