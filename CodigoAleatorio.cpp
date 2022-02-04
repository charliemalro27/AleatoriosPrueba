#include <iostream>

//Añadimos la biblioteca time y stdlib.h para poder usar la funcion time
//fundamental para el uso de los numeros aleatorios
#include <ctime>
#include<stdlib.h>
//

using namespace std;

//Funcion rellenar lista con mayores de 5 aleatoriamente
void rellenarmayor5(int vector[],int tamano){
int numero;
for(int i=0;i<tamano;i++){
 numero= 5 + rand()%20;
 vector[i]=numero;
}
}
//Funcion rellenar lista con 9 0s y el 1 es colocado aleatoriamente
void rellenarcon0(int vector[],int tamano){
  int numero;
  numero= 0 + rand()% 10;
  for(int i=0;i<tamano;i++){
    vector[i]=0;
    vector[numero]=1;
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

//Iniciamos los numeros aleatorios
//La funcion time asigna valores enteros leyendo
//el tiempo de reloj de nuestra computadora en segundos

 srand(time(NULL));

 int listaleatoria[10];
 int lista0[10];
//Nombre
cout<<"Nombre: Soy Charlieeee"<<endl;

//Rellenar lista con funcion rellenarmayor5
rellenarmayor5(listaleatoria,10);
cout<<"Esta es la lista de numeros aleatorios"<<endl;
imprimirlista(listaleatoria,10);

//Rellenar lisat con funcionar rellenarcon0
rellenarcon0(lista0,10);
cout<<"Esta es la lista de 0 y 1"<<endl;
imprimirlista(lista0,10);

//Introduce un numero 1-10 y resta a la posicion;
int numero;

restar5posicion(listaleatoria,10);
cout<<"Lista modificada! "<<endl;
imprimirlista(listaleatoria,10);

//Adivina la posicion del numero 1 en la lista0
adivinarposicion(lista0);

  return 0;
}
