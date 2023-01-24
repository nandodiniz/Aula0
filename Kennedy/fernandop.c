#include<stdio.h>    // Biblioteca para entrada e saída de dados
#include<stdlib.h>   // Biblioteca para utilizar funções próprias do Sistema Operacional

main(){
    
      int a=0,b,c,n,d; // Variaveis   
      printf("Quantos numeros primos voce quer exibir? ");      
      scanf("%i",&n); // Digite 25, para saber todos os numeros primos de 1 a 100.
      d=n*(-1);
      printf("Os primeiros %i numeros primos sao:\n",n);
      do         
      {  a++;        
         c=0;
         for(b=1;b<a;b++)
             if(a%b==0)
             c++;
         if(c==1){
             printf("%i\n",a);      
             d++;
                 }
      }while(d); 

      printf("\n\n");
          
system("pause");          
}   