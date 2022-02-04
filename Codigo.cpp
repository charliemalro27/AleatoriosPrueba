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
int main(){

 int numero=0;
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

  return 0;
}
