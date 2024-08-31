# include "kernel/types.h" //todos los tipo de datos están en types.h
# include "user/user.h"

int main(){
    char *name =(char*)malloc(16*sizeof(char));
    int r = getpname(name,16);

    if(r == -1){
        printf("No pude leer el nombre!");
        exit(1);
    }

    printf("hello world! from program %d \n", getpid());

    exit(0);
}