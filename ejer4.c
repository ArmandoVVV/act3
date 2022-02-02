#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>
#include <signal.h>

//ejemplo de input: ./ejer1.out

int main(){
    char comando[30];
	int pid;
	int salida = 0;
	
	do{
		printf(">");
		fgets(comando,  80, stdin);
		strtok(comando, "\n");
		if(strcmp(comando, "exit") == 0)
			salida = 1;
		else{
            pid = fork();
            if(pid == 0){
                system(comando);
            }
            else{
                wait(NULL);
                }
        }         
		memset(comando, 0, sizeof(comando));
    }while(!salida);
}
