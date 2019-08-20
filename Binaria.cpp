#include "Binaria.h"

int pesquisabin(int array[], int tamanho, int procura ) {
   int inf=0;
   int sup=tamanho-1;
   int meio;
   if(array[0]<= array[sup]){
   while(inf<=sup){
       meio=(inf+sup)/2;
       if(procura==array[meio]){
           return procura;
       }
       if (procura<=array[meio]){
           sup=meio-1;
       }
       else{
           inf=meio+1;
       }


   }
   }
   else{

return -1;
   }
}
