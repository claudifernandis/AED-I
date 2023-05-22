#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXSIZE 100


typedef struct no{

  char chave;
  char letra;
  struct no *esq;
  struct no *dir;
  
 }no; 

typedef no *arvore;


arvore Insere(arvore, no*);
no *Busca(arvore, char); 
  //if (Busca() == NULL) 
void infixa (no *);
void prefixa (no *);
void posfixa (no *);
void printinfixa (char *);
void printprefixa (char *);
void printposfixa (char *);

char letrasInfixa[MAXSIZE] = {0};
char letrasPrefixa[MAXSIZE] = {0};
char letrasPosfixa[MAXSIZE] = {0};

int i = 0;
int j = 0;
int k = 0;

int main(){

  
}



arvore Insere(arvore r, no *novo){
  no *f, *p;
  if (r == NULL) return novo;
  f = r;
  while(f != NULL){
    p = f;
    if (f->chave > novo->chave) f = f->esq;
    else f = f->dir;
  }
  if (p->chave > novo->chave) p->esq = novo;
  else p->dir = novo;
  return r;
}

no *Busca(arvore r, char n) {
  if (r == NULL || r->chave == n)
    return r; //precisa imprimir "n não existe"
  if (r->chave > n)
    return Busca (r->esq, n);
  else
    return Busca (r->dir, n); //ou imprime "n existe"
}

void printInfixa (){
  int z;

  for (z = 0; z < i; z++){
    if(!z) 
      printf("%c", letrasInfixa[z]);
    else
      printf(" %c", letrasInfixa[z]);
  }
  i = 0;
  printf("\n");
}

void printPrefixa (){
  int z;

  for (z = 0; z < k; z++){
    if(!z) 
      printf("%c", letrasPrefixa[z]);
    else
      printf(" %c", letrasPrefixa[z]);
  }
  k = 0;
  printf("\n");
}

void printPosfixa (){
  int z;

  for (z = 0; z < j; z++){
    if(!z) 
      printf("%c", letrasPrefixa[z]);
    else
      printf(" %c", letrasPrefixa[z]);
  }
  j = 0;
  printf("\n");
}

void Infixa(no *no){
  
  if(no)

}

void Prefixa(no *no){

}

void Posfixa(no *no){

}