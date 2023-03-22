#include<iostream>

using namespace std;
//Punteros con asignacion de memoria dinamica;
//new = reservar un espacio en memoria 
// delete [] = liberar la memoria
main(){
int total=0, *p_notas;
p_notas = new int [total];
char res;

do{
cout<<"Ingrese Nota["<<total<<"]:";	
cin>>p_notas[total];
//cout<<&p_notas;	
total++;
cout<<"Desea ingresar otro dato (s/n):";	
cin>>res;
}while(res=='s');


for (int i=0;i<total;i++){
cout<<"Nota"<<i<<":"<<*p_notas<<endl;	
//cout<<&p_notas<<endl;	
p_notas++;

}
	delete []p_notas;
	system("PAUSE");
	return 0;
}
