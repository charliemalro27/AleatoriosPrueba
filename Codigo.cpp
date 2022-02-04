#include <iostream>

using namespace std;

//Funcion rellenar lista con mayores de 5
void rellenarmayor5(int vector[],int tamano){
int numero;
for(int count=0;count<tamano;count++){
 do{
     cout<<"Introduce un numero mayor a 5"<<endl;
     cin>>numero;
     cout<<endl;
     if(numero>5){
         vector[count]=numero;
         count+=1;
   }
}while(count<=tamano);
}
}
//Funcion rellenar lista con 9 0s y un 1
void rellenarcon0(int vector[],int tamano){
  for(int i=0;i<tamano;i++){
    vector[i]=0;
    vector[tamano-1]=1;
}
}
//Funcion Imprimir lista
void imprimirlista(int lista[],int tamano){
  for(int i=0;i<tamano;i++){
    cout<<lista[i]<<endl;
}
}
//Funcion restar de 5 a la posicion introducida
void restar5posicion(int vector[],int tamano){
  int numero;
   do{
       cout<<"Introduce un numero del 1 al 10"<<endl;
       cin>>numero;
       vector[numero]=vector[numero]-5;

}while(vector[numero]>=0);
}
//Adivina adivinanzaaaa
void adivinarposicion(int vector[]){
  int count=0;
  int numero;
  int posicion;
  cout<<"Que numero quieres adivinar de la lista? "<<endl;
  cin>>numero;
  do{
    count+=1;
    cout<<"Intenta adivinar su posicion! "<<endl;
    cin>>posicion;
    if(vector[posicion]==numero){
      cout<<"ENHORABUENA LO HAS ADIVINADO OLEEEEE "<<endl;
    }else{
      cout<<"Prueba suerte otra vez..."<<endl;
    }
    if(count==5){
      cout<<"Llegaste a tu limite losiento :( "<<endl;
    }

}while(vector[posicion]!=numero && count!=5);
}

//Cuerpo principal
int main(){

 int lista[10];
 int lista0[10];
//Nombre
cout<<"Nombre: Soy Charlieeee"<<endl;

//Rellenar lista con funcion rellenarmayor5
rellenarmayor5(lista,10);
cout<<"Esta es la lista de numeros"<<endl;
imprimirlista(lista,10);

//Rellenar lisat con funcionar rellenarcon0
rellenarcon0(lista0,10);
cout<<"Esta es la lista de 0 y 1"<<endl;
imprimirlista(lista0,10);

//Introduce un numero 1-10 y resta a la posicion;
int numero;

restar5posicion(lista,10);
cout<<"Lista modificada! "<<endl;
imprimirlista(lista,10);

//Adivina la posicion del numero 1 en la lista0
adivinarposicion(lista0);

  return 0;
}
