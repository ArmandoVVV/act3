#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){
    int p;
    int i = 10;
    p = fork();
    if(p == 0){
        while(i != 0){
            sleep(2);
            printf("soy el hijo\n");
            i--;
        }
    }
    else{
        sleep(1);
        while( i != 0){
            printf("soy el padre\n");
            i--;
            sleep(2);
        }
        wait(NULL);
        printf("Mi proceso hijo ya ha terminado\n");
    }
    
    return 0;
}