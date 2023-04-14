#include <stdio.h>
 
int main() {
int n, a = 0, b = 1, c = 0, Var = 0;
  
  printf("informe um numero: "); 
  scanf("%d", &n);

  while (c < n){ /* enquanto "c" for menor que "n", ele recebera o valor "a" + "b" e na sequencia "a" tomara o valor de "b" e "b" tomara o valor de "c" */ 
      c = a + b ;
      a = b;
      b = c;

    if(c == n){ /* se "c" o valor de "c" for igual a "n" o loop para e a varivel "Var" assumi o valor de 1 */
        Var = 1;
        break;
    }
    
   }

if (Var == 1){ 
  printf("%d pertence à sequência de Fibonacci\n",n);
}else{
  printf("%d não pertence à sequência de Fibonacci \n",n);
}
  return 0;
 }


