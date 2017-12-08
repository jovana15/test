#include <stdio.h>
#include <stdlib.h>
typedef struct polinom{
int stepen;
int koeficijent;
}POLINOM;
void citaj(POLINOM *);
void kvadrat(POLINOM *, POLINOM *);
void pisi(POLINOM *);
int main()
{
    int i, n;
    POLINOM *niz, *rezultat;
    do{
        printf("n= ");
        scanf("%d", &n);
    }while(n<1);
    niz=(POLINOM*)malloc(n*sizeof(POLINOM));
    for(i=0;i<n;i++)
    {
        printf("\n%d. polinom:\n ", i+1);
        citaj(niz+i);

    kvadrat(niz, rezultat);
    pisi(kvadrat+i);
    }
    free(niz);
    return 0;


}
void citaj(POLINOM *p)
{
    int i;
    printf("Unesi stepen: ");
    scanf("%d", &p->stepen);
    printf("Koeficijenti: ");
    for(i=0;i<p->stepen+1;i++)
    scanf("%d", &p->koeficijent);
}
void kvadrat(POLINOM *p, POLINOM *rezultat)
{
    int i;
    rezultat->stepen=p->stepen*2;
    for(i=0;i<p->stepen+1;i++)
        rezultat[i].koeficijent=p[i].koeficijent*p[i].koeficijent;
}
void pisi(POLINOM *p)
{
    int i;
    printf("Polinom \n");
    for(i=p->stepen;i!=-1;i--){
    printf("%dx^%d %c", p[i].koeficijent, i, p[i-1].koeficijent<0?'-':'+');
    }
}

