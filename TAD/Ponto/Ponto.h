#ifndef PONTO_H //quando fizer um arq .h sempre
#define PONTO_H  //escrever essas duas linhas
//evitar duplicidade nas definicoes
typedef struct _ponto Ponto;
//_ponto esconde os dados pq nao mostar oq tem dentro dele

Ponto* Ponto_create(float, float); //precisa usar ponteiro para pedir/alocar memoria. retornando endereco pro ponto
void Ponto_destroy(Ponto*);
void Ponto_print(Ponto*);
void Ponto_get_x(Ponto*, float*);
void Ponto_get_y(Ponto*, float*);
void Ponto_set_x(Ponto*, float);
void Ponto_set_y(Ponto*, float);
float Ponto_dist(Ponto*, Ponto*);

#endif
