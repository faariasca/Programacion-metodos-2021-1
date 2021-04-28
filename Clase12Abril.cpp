#include <cstdlib>
#include <iostream>

using namespace std;
//subrutinas
int valor(int a)
{
 a+=5;
 return a;
}
void referencia(int *p){
  *p+=5;
}

void f(double *A,double *B,double *C){
    for(int i=0;i<3;i++){
    *(C+i)=*(A+i)+*(B+i);
    }
}
//main
int main(){
    double A[]={3.4,4.5,2.9};
    double B[]={2.5,3.5,1.3};
    double C[3];
    for(int i=0;i<3;i++){
      C[i]= (*(A+i))+(*(B+i));
      cout<<C[i]<<"  ";
      }
      cout<<endl;

    int a=3,b;
    cout<<"el valor de a es: "<<a<<endl;
    b=valor(a);
    cout<<"el valor de b es: "<<b<<endl;
    int *f;
    f=&a;
    cout<<"valor(*f)"<<valor(*f)<<endl;
    cout<<"valor(f)"<<valor(*f)<<endl;
    cout<<"el valor de a es: "<<a<<endl;
    cout<<"*f"<<*f<<endl;
    cout<<"         "<<endl;

    int c=3,*q;
    cout<<"c= "<<c<<endl;
    q=&c;
    cout<<"*q= "<<*q<<endl;
    referencia(q);
    cout<<"c= "<<c<<endl;
    cout<<"*q= "<<*q<<endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
