/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

void quickSort(int vetor[5],int lefth, int right){
int i,j,x,y;
i=lefth;
j=right;
x=vetor[(lefth+right)/2];


  while(i<=j)
    {
        while(vetor[i]<x && i<right){
         i++;}
         while(vetor[j]> x && j> lefth){
         j--;}
   if(i<=j) {
     y=vetor[i];
     vetor[i]=vetor[j];
     vetor[j]=y;
     i++; j--;}
       }
    if(j>lefth) {
        quickSort(vetor,lefth,j);
      }
     if(i<right){
         quickSort(vetor,i,right);
     }
   
}
   



using namespace std;

int main()
{
    cout<<"Boa noite professor Bezerra\n";
    int vet[5],i;
    int valor=1; 
    for(i=0;i<5;i++){
    std::cout <<"Digite o " << valor<< "º" << " valor " <<endl;
    valor++;
    std::cin >> vet[i];
    }
    quickSort(vet,0,5-1);
    for(i=0;i<5;i++){
    std::cout <<vet[i];  
    }
   
   return 0;
}
