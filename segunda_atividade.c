#include <stdio.h>
#include <stdlib.h>

int main(void) {
int n1,n2,n3, media;
    printf("digite o primeiro numero:");
    scanf("%d", &n1);
    
    printf("digite o segundo numero:");
    scanf("%d", &n2);
    
    printf("digite o terceiro numero:");
    scanf("%d", &n3);
    
    media = (n1+n2+n3)/3;
    printf("a media dos numeros e:");
    
    printf("%d", media);
    
    
    system("pause");
    return 0;
}
