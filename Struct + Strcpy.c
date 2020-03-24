#include <stdio.h>
#include <string.h>

    struct a{
    char b[1];

};

main()
{

    struct a ab ;

    strcpy(ab.b, "Hello World!");

    printf("\n %s \n", ab.b);

}