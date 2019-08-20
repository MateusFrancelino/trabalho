#include <iostream>
#include "search/Binaria.h"


using namespace std;




int main()
{ int array[]{0,1,2,3,5};
    int tamanho=5;
    int procura=2;
    procura=pesquisabin(array,tamanho,procura);
    if(procura!=-1){
        cout<<procura<<endl;
    }

    else{
        cout<<"não existe"<<endl;
    }
    return 0;
}
