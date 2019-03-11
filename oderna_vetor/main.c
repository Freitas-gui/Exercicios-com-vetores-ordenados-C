#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,ord=10,aux,iessimo_menor,valor_menor,posicao_menor=0;
    int vet1[10],vet2[10];

    //cria vetor
    printf("Digite 10 elementos diferentes em um vetor!\n");
    for(i=0;i<10;i++){
        printf("Digite o valor do elemento na posicao %d) valor: ",i);
        scanf("%d",&vet1[i]);
    }

    //printa vetor recem criado
    for(i=0;i<10;i++)
           printf("%d ",vet1[i]);

    //cria segundo vetor e o torna ordenado
    for(i=0;i<10;i++)
        vet2[i]=vet1[i];
    while(ord>1){
        for(i=0;i<9;i++){
            if(vet2[i]>vet2[i+1]){
                aux=vet2[i];
                vet2[i]=vet2[i+1];
                vet2[i+1]=aux;
            }
        }
        ord--;
    }
    //printa vetor recem ordenado
    printf("\n");
    for(i=0;i<10;i++)
           printf("%d ",vet2[i]);
    //busca o iessimo-menor,retorna o valor e sua posicao no vetor ñ-ordenado
    printf("\n Digite o Iessimo menor valor: ");
    scanf("%d",&iessimo_menor);
    iessimo_menor--;
    valor_menor=vet2[iessimo_menor];
    for(i=0;vet1[i]!=valor_menor;i++)
        posicao_menor++;

    printf("\n o iessimo menor valor e:%d, esta na posicao:%d",valor_menor,posicao_menor);
    return 0;
}
