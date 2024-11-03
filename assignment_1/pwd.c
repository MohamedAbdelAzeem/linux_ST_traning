
#define _GNU_SOURCE
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main()
{


    char *p = get_current_dir_name();

    printf("Working dir is %s\n",p);


    //Test with the command: valgrind --leak-check=full --track-origins=yes ./pwd.out
    free(p); //needed!
    return 0;
}