#include <stdio.h>
#include <string.h>
void revs(char*);
int main()
{
    char l[200];
    printf("Enter the string: ");
    scanf("%s", l);
    revs(l);
    return 0;
}

void revs(char* l) {
    int i, n;
    n = strlen(l);
    for (i = n - 1; i >= 0; i--)
    {
        printf("%c", l[i]); 
    }
    printf("\n");

}
