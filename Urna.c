#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_STRING 50

FILE * arquivo;

typedef struct candidato{
    int numero;
    char nome[TAM_STRING];
    char partido[TAM_STRING];
    int codigo_cargo;
    char cargo[TAM_STRING];
    int total_votos;
} Candidato;

Candidato *candidatos;
int num_candidatos = 0;
int pos = 0;

void adicionar_candidato(Candidato c){
    candidatos = (Candidato *)realloc(candidatos, 1);
    candidatos[pos] = c;
    pos++;
    num_candidatos++;
}

int k;


void salvar_voto(Candidato c){
    int i=0;
        if(num_candidatos == 0){
          candidatos = (Candidato*) calloc(1, sizeof(Candidato));

          /*if(candidatos == NULL){
              printf("Falha ao allocar struct.\n");
              return;
            }*/
          candidatos[0] = c;
          num_candidatos++;
          pos++;
          }
        else{
          for(i=0; i < num_candidatos; i++){
              if((candidatos[i].numero == c.numero) && (candidatos[i].codigo_cargo == c.codigo_cargo)){
                  candidatos[i].total_votos += c.total_votos;
                  return;
                  }
          }
        adicionar_candidato(c);
        }
    }


void imprimir_candidato(Candidato c){
    printf("---------------------------------------\n");
    printf("Candidato(a): %d - %s\nPartido: %s\nCargo: %s\nVotos: %d\n",
            c.numero, c.nome, c.partido, c.cargo, c.total_votos);
}

int main() {
    Candidato temp;
    int total_lido = 0;
    int pos_linha = 1;
    char linha[300];
    char * token;
    int cont = 0;


    arquivo = fopen("min.txt", "r");
    if(arquivo == NULL){
        printf("Falha ao ler arquivo!");
        exit(1);
    }

    while(fgets(linha, 300, arquivo) != NULL){
        token = strtok (linha, "\";");
        while(token != NULL){
            switch(pos_linha){
                case 6:
                    temp.codigo_cargo = atoi(token);
                    break;
                case 7:
                    strcpy(temp.cargo, token);
                    break;
                case 8:
                    break;
                case 9:
                    break;
                case 11:
                    temp.numero = atoi(token);
                    break;
                case 12:
                    strcpy(temp.partido, token);
                    break;
                case 13:
                    //cod municipio
                    break;
                case 14:
                    //nome municipio
                    break;
                case 23:
                    //nome do votavel
                    strcpy(temp.nome, token);
                    break;
                case 24:
                    //quantidade de votos
                    temp.total_votos = atoi(token);
                    break;
            }
            pos_linha++;
            token = strtok(NULL, "\";");
        }
        if(temp.numero != 99){
            salvar_voto(temp);
            total_lido++;
        }
        pos_linha=1;
    }
    for(int i=0; i < num_candidatos; i++){
        imprimir_candidato(candidatos[i]);
        cont++;
    }
    free(candidatos);

    printf("\n---------------------------\n%d e %d\n", cont, k);
    return 0;
}
