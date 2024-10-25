#include <iostream>
#include <array>

int main(){
    //2)
    std::array<int,7> lista{5,12, 20, 32, 1, 8, 15};
    for (int i = 0; i < lista.size(); i++)
    {
        for (int j = 1; j < lista.size(); j++)
        {
            if (lista[j] < lista[j-1])
            {
                int temp=lista[j];
                lista[j]=lista[j-1];
                lista[j-1]=temp;
            } 
        }
    }
    for(int num:lista){
        std::cout<<num<<" ";
    }
    
    


    return 0;
}