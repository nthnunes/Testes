#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
  int repeat, i;
  int idade, calouro, genero, curso, praticaEsporte, tipoEsporte, frequencia, esporteColetivo, tipo;
  char x;

  cout<<"*******************************************************"<<endl;
  cout << "         Gerador de Informacoes Aleatorias" << endl;
  cout<<"\n*******************************************************"<<endl;

  std::cout << "\n\nQual o numero de casos a serem gerados: ";
  cin >> repeat;
  std::cout << "\n\n";
  for(i = 0; i < repeat; i++){
    idade = rand() % 9;
    if(idade == 1){
      std::cout << "Idade: 18\n";
    }
    else if(idade == 2){
      std::cout << "Idade: 19\n";
    }
    else if(idade == 3){
      std::cout << "Idade: 20\n";
    }
    else if(idade == 4){
      std::cout << "Idade: 21\n";
    }
    else if(idade == 5){
      std::cout << "Idade: 22\n";
    }
    else if(idade == 6){
      std::cout << "Idade: 23\n";
    }
    else if(idade == 7){
      std::cout << "Idade: 24\n";
    }
    else if(idade == 8){
      std::cout << "Idade: 25\n";
    }
    else if(idade == 0){
      std::cout << "Idade: 26\n";
    }

    calouro = rand() % 2;
    if(calouro == 1){
      std::cout << "Calouro: Sim\n";
    }
    else{
      std::cout << "Calouro: Nao\n";
    }

    genero = rand() % 2;
    if(genero == 1){
      std::cout << "Genero: Masculino\n";
    }
    else{
      std::cout << "Genero: Feminino\n";
    }

    curso = rand() % 6;
    if(curso == 1){
      std::cout << "Curso: Ciencia da Computacao\n";
    }
    else if(curso == 2){
      std::cout << "Curso: Biologia\n";
    }
    else if(curso == 3){
      std::cout << "Curso: Enfermagem\n";
    }
    else if(curso == 4){
      std::cout << "Curso: Computacao\n";
    }
    else if(curso == 5){
      std::cout << "Curso: Agronomia\n";
    }
    else if(curso == 0){
      std::cout << "Curso: Medicina Veterinaria\n";
    }

    praticaEsporte = rand() % 2;
    if(praticaEsporte == 1){
      std::cout << "Pratica Atividade Fisica: Sim\n";

      tipoEsporte = rand() % 7;
      if(tipoEsporte == 1){
        std::cout << "Qual: Academia\n";
      }
      else if(tipoEsporte == 2){
        std::cout << "Qual: Volei\n";
      }
      else if(tipoEsporte == 3){
        std::cout << "Qual: Tenis de Mesa\n";
      }
      else if(tipoEsporte == 4){
        std::cout << "Qual: Futebol\n";
      }
      else if(tipoEsporte == 5){
        std::cout << "Qual: Pilates\n";
      }
      else if(tipoEsporte == 6){
        std::cout << "Qual: Caminhada\n";
      }
      else if(tipoEsporte == 0){
        std::cout << "Qual: Basketball\n";
      }

      frequencia = rand() % 4;
      if(frequencia == 1){
        std::cout << "Frequencia: 1 vez por semana\n";
      }
      else if(frequencia == 2){
        std::cout << "Frequencia: 2 vezes por semana\n";
      }
      else if(frequencia == 3){
        std::cout << "Frequencia: 3 vezes por semana\n";
      }
      else if(frequencia == 0){
        std::cout << "Frequencia: Mais que 3 vezes por semana\n";
      }

      esporteColetivo = rand() % 2;
      if(esporteColetivo == 1){
        std::cout << "Gosta de Esportes Coletivos: Nao\n";
      }
      else{
        std::cout << "Gosta de Esportes Coletivos: Sim\n";

        tipo = rand() % 2;
        if(tipo == 1){
          std::cout << "Qual: Volei\n";
        }
        else{
          std::cout << "Qual: Futebol\n";
        }
      }

    }
    else{
      std::cout << "Pratica Esporte: Nao\n";

      esporteColetivo = rand() % 2;
      if(esporteColetivo == 1){
        std::cout << "Gosta de Esportes Coletivos: Nao\n";
      }
      else{
        std::cout << "Gosta de Esportes Coletivos: Sim\n";

        tipo = rand() % 2;
        if(tipo == 1){
          std::cout << "Qual: Volei\n";
        }
        else{
          std::cout << "Qual: Futebol\n";
        }
      }

    }

    cout<<"------------------------------------------"<<endl;
  }

  std::cout << "\n\nDeseja gerar mais pessoas? [S/n]\n";
  cin >> x;
  if(x == 's' || x == 'S'){
    std::cout << "\n\n";
    return main();
  }

  return 0;
}
