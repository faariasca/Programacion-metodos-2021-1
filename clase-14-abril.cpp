#include "iostream"
#include "stdio.h"
#include<cstdlib>
#include "fstream"
#include "string"
#include<math.h>
#include<iomanip>
using namespace std;

#define nC 20

void impMat(int m,int n, double A[][nC]){
    cout.precision(4);
    for(int i=0; i<m;i++){
         for(int j=0; j<n;j++)
                cout<<A[i][j]<<"\t";
         cout<<endl;
    }
}
void leeFicheroCreaMatriz( string fichero, double  A[][nC],int m, int n){
    ifstream archivo ( fichero.c_str());
    double c;
    string linea;
    getline(archivo, linea);

   	for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++){
         archivo >> c ;
          if(c!= EOF)
             A[i][j]=c;
    }
              cout<<linea<<"--------------------"<<endl;
}
void creaFicheroMatriz( string fichero, double  A[][nC],int m,int n){
	ofstream archivo ( fichero.c_str());
	 archivo<<"MATRIZ DE PRUEBA ";
       archivo<<endl;
    for (int i = 0; i < m; i++){
       for (int j = 0; j < n; j++)
           archivo<<" "<< A[i][j]<<"\t";
       archivo<<endl;
    }
    archivo.close();
}
int main(){
	int m=4,n=3;
    double  L[m][nC],A[m][nC];
    /*
	 for (int i = 0; i < m; i++)
       for (int j = 0; j < m; j++)
          L[i][j]=0;
    */
    cout<<endl;
    leeFicheroCreaMatriz( "archivoExistente.txt", A , m,n);
    cout<<"archivo leido "<<endl;
    impMat(m,n,A);
    for(int i=0;i<n;i++)
        A[m-1][i]=-5;

    creaFicheroMatriz( "archivo1234.txt",A,m,n);
    cout<<"archivo creado "<<endl;

    impMat(m,n,A);

    return 0;
}
