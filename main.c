#include <stdio.h>

int main(void)
{
    int num1, num2, risultato;
    int i;

    printf("inserisci il primo valore: ");
    scanf("%d", &num1);
    printf("inserisci il secondo valore: ");
    scanf("%d", &num2);


    for(i = 0; i<=num2; i++)
    {
        risultato=num1 + num1;
    }
printf("il risultato e': %d", risultato);
return 0;
}
