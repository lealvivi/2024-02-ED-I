#include "Ponto.h"

int main(){
    Ponto *umPonto = Ponto_create(2.4566, 6.877654);// criando umPonto  do tipo Ponto. aloca esses valores e 
    //A prox linha nao funciona, se descomentar.
    //printf("%f",umPonto->x);
    Ponto_print(umPonto);
    return 0;
}
