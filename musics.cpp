/*

    DESENVOLVIDO POR:   FELIPE DOS ANJOS SANTANA

    ULTIMA MODIFICAÇÃO: 30/12/2019 20:21

    USE PARA EMITIR UMA NOTA:

    b(x , y , z)  x = NOTA MUSICAL EX: DoS1                                  DoS1 = DÓ SUSTENIDO COM UMA OITAVA ACIMA
                  y = FIGURA MUSICAL (TEMPO DA NOTA) EX: SM                  SM   = SEMIBREVE
                  z = CASO POSSUA FERMATA USE FMC = (FERMATA CURTA) OU
                  FML = (FERMATA LONGA), CASO NÃO POSSUA USE 0

    EX: b(DoS1, SM, 0);


    USE PARA EMITIR UMA PAUSA:

    p(x)          x = TEMPO       EX: pMM                                    pMM = PAUSA DA MINIMA


    EX: p(pMM);


*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <locale>

#include "musicalNotes.h"


using namespace std;

double gBpm; //BATIDAS POR MINUTOS, DEFINE O TEMPO DE DERURAÇÃO DAS NOTAS MUSICAIS

void b(double, double, double); //EMITE A NOTA MUSICAL
void p(double);                 //PAUSA - TEMPO

int main(){

    setlocale(LC_ALL, "pt-br");

    system("chcp 65001 && cls"); //FAZER O CMD EXIBIR CARACTERES UTF-8

    //===================================================MUSICAS======================================================================

    char Opcao[2];

    cout<<"\n"
        <<"1 - PARABÉNS PRA VOCÊ\n\n"
        <<"2 - TEMA MARIO BROS\n\n"
        <<"3 - HINO NACIONAL BRASILEIRO\n\n"
        <<"> ";

    setbuf(stdin, 0); cin.getline(Opcao, 2);

    if(strcmp(Opcao, "1") == 0){

        cout<<"\n\nPARABÉNS PRA VOCÊ\n\n";

        gBpm = 250; //DEFINE A VELOCIDADE DA MUSICA

        b(Re, CC, 0); b(Re, CC, 0); b(Mi, SM, 0); b(Re, SM, 0); b(So, SM, 0); b(FaS, MM, 0); b(Re, CC, 0); b(Re, CC, 0); b(Mi, SM, 0); b(Re, SM, 0); b(La, SM, 0);
        b(So, MM, 0); b(Si, CC, 0); b(Si, CC, 0); b(Re1, SM, 0); b(Si, SM, 0); b(So, SM, 0); b(FaS, SM, 0); b(Mi, SM, 0); b(Do1, CC, 0); b(Do1, CC, 0); b(Si, SM, 0); b(So, SM, 0); b(La, SM, 0);
        b(So, MM, 0); b(Re, CC, 0); b(Re, CC, 0); b(Mi, SM, 0); b(Re, SM, 0); b(So, SM, 0); b(FaS, MM, 0); b(Re, CC, 0); b(Re, CC, 0); b(Mi, SM, 0); b(Re, SM, 0); b(La, SM, 0);
        b(So, MM, 0); b(Si, CC, 0); b(Si, CC, 0); b(Re1, SM, 0); b(Si, SM, 0); b(So, SM, 0); b(FaS, SM, 0); b(Mi, SM, 0); b(Do1, CC, 0); b(Do1, CC, 0); b(Si, SM, 0); b(So, SM, 0); b(La, SM, 0);
        b(So, MM, 0);

        cout<<"\n\n";

    }
    else if(strcmp(Opcao, "2") == 0){

        cout<<"\n\nTEMA MARIO BROS\n\n";

        gBpm = 200; //DEFINE A VELOCIDADE DA MUSICA

        //INTRODUÇÃO
        b(Mi1, CC, 0); b(Mi1, CC, 0); b(Mi1, CC, 0); b(Do1, CC, 0); b(Mi1, SM, 0); b(So1, SM, 0); p(pSM); b(So, SM, 0); p(pSM); b(Do1, SMP, 0); b(So, CC, 0); p(pSM); b(Mi, SMP, 0);
        b(La, SM, 0); b(Si, SM, 0); b(Sib, CC, 0); b(La, SM, 0); b(So, SM, 0); b(Mi1, SM, 0); b(So1, SM, 0); b(La1, SM, 0); b(Fa1, CC, 0); b(So1, CC, 0); p(pCC); b(Mi1, SM, 0); b(Do1, CC, 0);
        b(Re1, CC, 0); b(Si, SMP, 0); b(Do1, SMP, 0); b(So, CC, 0); p(pSM); b(Mi, SMP, 0); b(La, SM, 0); b(Si, SM ,0); b(Sib, CC, 0); b(La, SM, 0); b(So, SM, 0); b(Mi1, SM, 0); b(So1, SM, 0);
        b(La1, SM, 0); b(Fa1, CC, 0); b(So1, CC, 0); p(pCC); b(Mi1, SM, 0); b(Do1, CC, 0); b(Re1, CC, 0); b(La, SM, 0); b(Do1, SM, 0); b(So, CC, 0); p(pSM); b(Mi, SMP, 0); b(La, SM, 0); b(Si, SM, 0);
        b(Sib, CC, 0); b(La, SM, 0); b(So, SM, 0); b(Mi1, SM, 0); b(So1, SM, 0); b(La1, SM, 0); b(Fa1, CC, 0); b(So1, CC, 0); p(pCC); b(Mi1, SM, 0); b(Do1, CC, 0); b(Re, CC, 0); b(Si, SMP, 0);
        //RITORNELO

        gBpm = 150;

        p(pSM); b(So1, CC, 0); b(FaS1, CC, 0); b(Fa1, CC, 0); b(ReS1, SM, 0); b(Mi, CC, 0); p(pCC); b(SoS, CC, 0); b(La, CC, 0); b(Do1, CC, 0); p(pCC); b(La, CC, 0); b(Do1, CC, 0); b(Re1, CC, 0);
        p(pSM); b(So1, CC, 0); b(FaS1, CC, 0); b(Fa1, CC, 0); b(ReS1, SM, 0); b(Mi, CC, 0); p(pCC); b(Do2, SM, 0); b(Do2, CC, 0); b(Do2, MM, 0); p(pSM); b(So1, CC, 0); b(FaS1, CC, 0); b(Fa1, CC, 0);
        b(ReS1, SM, 0); b(Mi, CC, 0); p(pCC); b(SoS, CC, 0); b(La, CC, 0); b(Do1, CC, 0); p(pCC); b(La, CC, 0); b(Do1, CC, 0); b(Re1, CC, 0); p(pSM); b(Mib1, CC, 0); p(pCC); b(Re1, SMP, 0); b(Do1, MM, 0);
        p(pMM); p(pSM); b(So1, CC, 0); b(FaS1, CC, 0); b(Fa1, CC, 0); b(ReS1, SM, 0); b(Mi, CC, 0); p(pCC); b(SoS, CC, 0); b(La, CC, 0); b(Do1, CC, 0); p(pCC); b(La, CC, 0); b(Do1, CC, 0); b(Re1, CC, 0);
        p(pSM); b(So1, CC, 0); b(FaS1, CC, 0); b(Fa1, CC, 0); b(ReS1, SM, 0); b(Mi, CC, 0); p(pCC); b(Do2, SM, 0); b(Do2, CC, 0); b(Do2, MM, 0); p(pSM); b(So1, CC, 0); b(FaS1, CC, 0); b(Fa1, CC, 0);
        b(ReS1, SM, 0); b(Mi, CC, 0); p(pCC); b(SoS, CC, 0); b(La, CC, 0); b(Do1, CC, 0); p(pCC); b(La, CC, 0); b(Do1, CC, 0); b(Re1, CC, 0); p(pSM); b(Mib1, CC, 0); p(pCC); b(Re1, SMP, 0); b(Do1, MM, 0);
        p(pMM);
        //FINAL

        gBpm = 200;

        b(Do1, CC, 0); b(Do1, SM, 0); b(Do1, CC, 0); p(pCC); b(Do1, CC, 0); b(Re1, SM, 0); b(Mi1, CC, 0); b(Do1, SM, 0); b(La, CC, 0); b(So, MM, 0);

        cout<<"\n\n";

    }
    else if(strcmp(Opcao, "3") == 0){

        cout<<"\n\nHINO NACIONAL BRASILEIRO\n\n";

        //PRIMEIRA PARTE

        gBpm = 150;

        b(Do1, SM, 0); b(Fa1, CCP, 0); b(Mi1, SC, 0); b(Fa1, CCP, 0); b(So1, SC, 0); b(La1, CCP, 0); b(So1, SC, 0); b(La1, CCP, 0); b(Sib1, SC, 0);
        b(Si1, SMP, 0); b(Do2, SC, 0); b(La1, SC, 0); b(Fa1, CC, 0); p(pCC); b(Do1, CCP, 0); b(Do1, SC, 0); b(Fa1, CCP, 0); b(Mi1, SC, 0); b(So1, CCP, 0); b(Fa1, SC, 0);
        b(La1, CCP, 0); b(So1, SC, 0); b(Sib1, CCP, 0); b(La1, SC, 0); b(FaS1, SM, 0); b(So1, SM, 0); p(pSM); b(Do1, SM, 0); b(So1, CCP, 0); b(FaS1, SC, 0); b(So1, CCP, 0); b(La1, SC, 0);
        b(Sib1, CCP, 0); b(La1, SC, 0); b(Sib1, CCP, 0); b(Do2, SC, 0);

        b(DoS2, SMP, 0); b(Re2, SC, 0); b(Sib1, SC, 0); b(So1, CC, 0); p(pCC); b(Do1, CCP, 0); b(Do1, SC, 0); b(So1, CCP, 0); b(FaS1, SC, 0); b(La1, CCP, 0); b(So1, SC, 0); b(Sib1, CCP, 0);
        b(La1, SC, 0); b(Do2, CCP, 0); b(Sib1, SC, 0); b(SoS1, SM, 0); b(La1, SM, 0); p(pSM); b(La1, SM, 0); b(Sib1, SM, 0); b(La1, SM, 0); p(pCC); b(La1, CC, 0); b(Sib1, CCP, 0); b(La1, SC, 0);
        b(La1, SM, 0); b(Re2, MM, 0); b(Do2, CC, 0); b(Sib1, CC, 0);

        b(Sib1, CC, 0); b(La1, CC, 0); b(La1, CC, 0); b(So1, CC, 0); b(So1, CC, 0); b(Fa1, CC, 0); b(Fa1, CC, 0); b(Mi1, CC, 0); b(Mi1, SM, 0); b(Re1, SM, 0); p(pSM); b(So1, SM, 0); b(La1, SM, 0);
        b(So1, SM, 0); p(pCC); b(So1, CC, 0); b(La1, CCP, 0); b(So1, SC, 0); b(So1, SM, 0); b(Do2, MM, 0); p(pCC); b(Si1, CC, 0); b(La1, CCP, 0); b(La1, CC, 0); b(So1, CC, 0); b(So1, CC, 0);
        b(Fa1, CC, 0); b(Fa1, CC, 0); b(Mi1, CC, 0); b(Mi1, CC, 0); b(Re1, CC, 0); b(Re1, SM, 0); b(Do1, SM, 0); p(pMM);

    }
    else{

        cout<<"\n\nNão temos esse tema, desculpe :(";
        setbuf(stdin, 0); getchar();
    }

}

void b(double Nota_Musical, double Figura_Musical, double Fermata){ //EMITE A NOTA MUSICAL

    double Tempo_Figura_Musical = Figura_Musical + Fermata;   //TEMPO DA FIGURA MUSICAL
    double Tempo_Batida = 60000 / gBpm;                       //TEMPO DA BATIDA EM MILISSEGUNDOS, EQUAÇÃO DE BPM EM MILISSEGUNDOS
    double Tempo_Figura_Musical_Convertida;                   //TEMPO DA NOTA EM MILISSEGUNDOS

    if(Tempo_Figura_Musical >= 1) Tempo_Figura_Musical_Convertida = Tempo_Figura_Musical * Tempo_Batida;                 //CALCULANDO TEMPO REAL DAS FIGURAS MUSICAIS
    if(Tempo_Figura_Musical <  1) Tempo_Figura_Musical_Convertida = (Tempo_Batida * (Tempo_Figura_Musical * 100)) / 100; //CALCULANDO TEMPO REAL DAS FIGURAS MUSICAIS

    cout<<"♫ ";

    Beep(Nota_Musical, Tempo_Figura_Musical_Convertida); //EXECUTANDO A NOTA MUSICAL

}

void p(double Figura_Musical){ // PAUSA/RESPIRAÇÃO

    double Tempo_Figura_Musical = Figura_Musical;   //TEMPO DA FIGURA MUSICAL
    double Tempo_Batida = 60000 / gBpm;             //TEMPO DA BATIDA EM MILISSEGUNDOS, EQUAÇÃO DE BPM EM MILISSEGUNDOS
    double Tempo_Figura_Musical_Convertida;         //TEMPO DA NOTA EM MILISSEGUNDOS

    if(Tempo_Figura_Musical >= 1) Tempo_Figura_Musical_Convertida = Tempo_Figura_Musical * Tempo_Batida;                 //CALCULANDO TEMPO REAL DAS FIGURAS MUSICAIS
    if(Tempo_Figura_Musical <  1) Tempo_Figura_Musical_Convertida = (Tempo_Batida * (Tempo_Figura_Musical * 100)) / 100; //CALCULANDO TEMPO REAL DAS FIGURAS MUSICAIS

    Beep(0, Tempo_Figura_Musical_Convertida);
}

