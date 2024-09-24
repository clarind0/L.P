#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

#define RANGE_MAX 10
#define TAM 5
typedef struct{
    float x;
    float y;
}Coord;

void PreencherCoord(Coord *coord, int n){
    for(int i=0;i<n;i++){
        coord[i].x = rand() % RANGE_MAX; 
        coord[i].y = rand() % RANGE_MAX;
    }
        
}

Coord* PontoDist(Coord *coord, int n, Coord coordref){
   
    float dist0 =  sqrt((pow((coord[1].x-coordref.x),2)+pow((coord[1].y-coordref.y),2)));
    Coord* pontoMaisProximo = &coord[1];

    for(int i=2;i<n;i++){
        float dist =  sqrt((pow((coord[i].x-coordref.x),2)+pow((coord[i].y-coordref.y),2)));

        if(dist<dist0){
            dist0 = dist;
            pontoMaisProximo = &coord[i];
        }        
    }
    return pontoMaisProximo;
}

int main(){
   
    Coord *coords = (Coord*)malloc(TAM*sizeof(Coord));
    if(coords == NULL)
    {
        printf("falha na alocação\n");
        return 1;
    }

    srand(time(NULL));

    PreencherCoord(coords, TAM);

    for(int i=0;i<TAM;i++){
        printf("pontos[%d]:\n",i);
        printf("%.1f\n",coords[i].x);
        printf("%.1f\n\n",coords[i].y);
    }

    Coord* pontoMaisProximo = PontoDist(coords, TAM, coords[0]);

    printf("Ponto mais próximo de coords[0]:\n");
    printf("Endereço: %p\n", (void*)pontoMaisProximo);
    printf("x: %.1f\n", pontoMaisProximo->x);
    printf("y: %.1f\n", pontoMaisProximo->y);

    free(coords);


    return 0;
    


}