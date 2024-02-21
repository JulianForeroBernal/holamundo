#include <iostream>
#include <string>
#define TAM 3

using namespace std;

struct Alumno {
    string nombre;
    int nota[3];
    int codigo, promedio;
}estu[TAM];
int main(){	
	for (int i=0; i<3; i++){
		cout<<"ingrese el nombre del estudiante "<<i+1<<": "<<endl;
		cin>>estu[i].nombre;
		cout<<"ingrese el codigo del estudiante "<<i+1<<": "<<endl;
		cin>>estu[i].codigo;
		for (int j=0; j<3;j++){
			cout<<"ingrese la nota "<<j+1<<" del estudiante "<<i+1<<": "<<endl;
			cin>>estu[i].nota[j];	
		}
		estu[i].promedio=(estu[i].nota[0]+estu[i].nota[1]+estu[i].nota[2])/3;
	}
	Alumno* ptrEstudiante = estu;
	cout<<"DATOS DE LOS ESTUDIANTESS: \n";	
	for (int k=0;k<TAM;k++){
		cout<<"nombre estudiante "<<(ptrEstudiante + k)->nombre<<endl;
		cout<<"codigo estudiante "<<(ptrEstudiante + k)->codigo<<endl;
		for (int l=0;l<3;l++){
			cout<<"nota "<<l+1<< ": "<<(ptrEstudiante + k)->nota<<endl;
		}
		cout<<"promedio estudiante "<<(ptrEstudiante + k)->promedio<<endl;	
	}	
	return 0;
}


