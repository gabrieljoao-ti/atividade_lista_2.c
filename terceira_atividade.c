#include <stdio.h>
#include <stdlib.h>

int main(void) {
char a,A,e,E,i,I,o,O,u,U;
    
    printf("digite uma letra:");
    scanf("%c",&a);
    
    if(a=='a'||a=='A'||a=='e'||a=='E'||a=='i'||a=='I'||a=='o'||a=='O'||a=='u'||a=='U'){
        printf("a letra digitada é uma vogal");
    }
     else
        printf("a letra digitada é uma consoante");

    system("pause");
    return 0;
}
