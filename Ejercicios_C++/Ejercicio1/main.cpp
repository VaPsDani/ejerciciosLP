#include <iostream>
#include "funcionalidades.h"
#include <cctype>
#include <array>
#include <vector>

struct Persona{
    std::string nombre;
    int edad;
};

int main(){

    int edad=25;
    std::string letra= "A";
    std::cout<<edad<<"\n";
    std::cout<<letra<<"\n";
    //g++ main.cpp -o main
    //.\main.exe
    std::cout<<"Inserte letra"<<"\n";
    std::cin >> letra;
    //2)
    if (isupper(letra[0]))
    {
        std::cout<<"Mayuscula"<<"\n";
    }else{
        std::cout<<"minuscula"<<"\n";
    }
    
    //3)
    for (int i = 1; i <= 10; i++)
    {
        std::cout<<i<<" ";
    }

    //4)
    std::cout<<"\n";
    int cont=0;
    while (cont<=20)
    {
        if(cont % 2==0){
            std::cout<<cont<<" ";            
        }
        cont++;
    }

    //6)
    std::cout<<"\n";
    int ingresado=0;
    std::cout<<"Inserte numero"<<"\n";
    std::cin>>ingresado;
    if(ingresado%2==0){
        std::cout<<"Par";
    }else{
        std::cout<<"Impar";
    }

    //7)
    std::cout<<"\n";
    int num=4;
    switch (num)
    {
    case 1:
        std::cout<<"Lunes";
        break;
    case 2:
        std::cout<<"Martes";
        break;
    case 3:
        std::cout<<"Miercoles";
        break;
    case 4:
        std::cout<<"Jueves";
        break;
    case 5:
        std::cout<<"Viernes";
        break;
    case 6:
        std::cout<<"Sabado";
        break;
    case 7:
        std::cout<<"Domingo";
        break;
    
    default:
        break;
    }

    //8)
    std::cout<<"\n";
    std::array<int,5> numeros{1,4,5,2,6};
    for (int numero:numeros)
    {
        std::cout << numero << " ";
    }

    //9)
    std::cout<<"\n";
    int numer=0;
    int suma=0;
    for (int i = 0; i < 5; i++)
    {
        std::cout << "Ingrese numero:" << "\n";
        std::cin>>numer;
        numeros[i]=numer;
        suma=suma+numer;
    }
    std::cout<<suma;
    std::cout<<"\n";
    
    //10)
    Persona pers;
    pers.edad=10;
    pers.nombre="Daniel";
    std::cout<< pers.nombre <<" "<<pers.edad;
    std::cout<<"\n";

    //18)
    std::string a;
    std::array<std::string,10> palabra;
    std::cout<<"Ingresa valor"<<"\n";
    std::cin>>a;
    palabra[0]=a;
    
    //21)
    int numeroAleatorio= rand() % 100 + 1;
    int nm;
    do {
        std::cout<<"Ingrese numeroo"<<"\n";
        std::cin >> nm;
        if (nm < numeroAleatorio)
        {
            std::cout<<"Bajo";
        }else if(nm > numeroAleatorio){
            std::cout<<"Alto";
        }
        
    }while (nm!=numeroAleatorio);


    //22)
    std::vector<int> lista;
    std::cout<<"Ingrese num:";
    std::cin>>num;
    for (int i = 0; i < num; i++)
    {
        std::cout<<fibonacci(i)<<" ";
    }

    return 0;

    //23)
    std::vector<std::vector<int>> matriz;
    matriz[2][1]=0;
}