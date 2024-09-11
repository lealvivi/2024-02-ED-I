#include "Ponto.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct _ponto{
    float x,y;
};

Ponto* Ponto_create(float x,float y){
    Ponto* novo = (Ponto*) malloc(sizeof(Ponto));
    if(novo!=NULL){
        novo->x = x;
        novo->y = y;
    }
    return novo;
}

void Ponto_destroy(Ponto* ponto){
    if(ponto!=NULL){
        free(ponto);
       
    }
}

void Ponto_print(Ponto* ponto){
    if(ponto!=NULL){
         printf("ponto x: %.2f, ponto y: %.2f",ponto->x, ponto->y);

    }
}

void Ponto_get_x(Ponto* ponto, float* px){
    if(ponto!=NULL){
       *px = ponto->x;

    }
}

void Ponto_get_y(Ponto* ponto,float* py){
    if(ponto!=NULL){
        *py = ponto->y;
    }
}

void Ponto_set_x(Ponto* ponto, float x){
    if(ponto!= NULL){
       ponto ->x = x;
    }
}

void Ponto_set_y(Ponto* ponto, float y){
    if(ponto!= NULL){
      ponto ->y = y;
    }
}
float Ponto_dist(Ponto* p1,Ponto*p2){
    if(p1 != NULL && p2 !=NULL){
        float x = p2->x - p1 -> x;
        float y = p2->y - p1 -> y;
        return sqrt((x*x)+(y*y));
    }
}
