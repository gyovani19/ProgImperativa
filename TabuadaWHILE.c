#include <stdio.h>
int main(){
  int N, Cont;
  printf("De qual numero deseja a tabuada? ");
  scanf("%d",&N);
  Cont=0; 
  while (Cont<=10)
   {
    printf("%d x %d = %d \n",N,Cont,N*Cont);
    Cont++;
   }
return 0;}
