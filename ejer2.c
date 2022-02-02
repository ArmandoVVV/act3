#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){
    int n;
    int i = 1;
    printf("n = ");
    scanf("%d", &n);
    printf("0\n");
    
    while(n){
        fork();
        printf("%d\n", i);
        n--;
        i++;
        wait(NULL);
    }
    
    return 0;
}