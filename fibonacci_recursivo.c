#include <stdio.h>  
#include <stdlib.h>

int fib(int n);

int main(){
    int num, fibo;

    printf("Digite que numero deseja fibonacci\n");
    scanf("%d", &num);

    fibo = fib(num);

    printf("Resposta: %d\n", fibo);

    return 0;
}

int fib(int n){
    if(n == 1 || n == 2){
        return 1;
    } else{
        return fib(n-1) + fib(n-2);
    }
}