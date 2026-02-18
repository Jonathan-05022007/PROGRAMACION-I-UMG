#include<iostream>
using namespace std;

float calcularPromedio(float totalGeneral,int numeroVeces);
int main(){
float totalInicial=100+200;
int numeroVeces=10;
cout<<"Promedio general: "<<calcularPromedio(totalInicial,numeroVeces)<<endl;
return 0;
}
float calcularPromedio(float totalGeneral,int numeroVeces){
    return totalGeneral/numeroVeces;
}
