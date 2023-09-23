#include <stdio.h>
#include <string.h>

int main(void){
    char elevador[2], turno[2], elevA[2] = "a", elevB[2] = "b", elevC[2] = "c", matutitno[2] = "m", verspertino[2] = "v", noturno[2] = "n";
    int turnoMat = 0, turnoVesp = 0, turnoNot = 0, elevadorA = 0, elevadorB = 0, elevadorC = 0, maisUsado = 0, percent = 0, menosUsado = 0;

    int i;
    for(i = 0; i < 50; i++){
        printf("Qual elevador voce utiliza com mais frequencia? (Utilizando letras minusculas entre 'a', 'b' e 'c')\n");
        fgets(elevador, 2, stdin);
        fflush(stdin);


        if(strcmp(elevador, elevA)==0){
            elevadorA++;
        }else if(strcmp(elevador, elevB)==0){
            elevadorB++;
        }else if(strcmp(elevador, elevC)==0){
            elevadorC++;
        }else{
            printf("Entrada Invalida.\n");
            i--;
        }

        printf("E em qual periodo voce mais utiliza? ('m' para matutino, 'v' para vespertino e 'n' para noturno)\n");
        fgets(turno, 2, stdin);
        fflush(stdin);

        if(strcmp(turno, matutitno)==0){
            turnoMat++;
        }else if(strcmp(turno, verspertino)==0){
            turnoVesp++;
        }else if(strcmp(turno, noturno)==0){
            turnoNot++;
        }else{
            printf("Entrada Invalida.\n");
            i--;
        }
        
    }

    if(turnoMat >= turnoVesp && turnoMat >= turnoNot){
        printf("O periodo mais usado e o matutino");
    }else if(turnoVesp >= turnoMat && turnoVesp >= turnoNot){
        printf("O periodo mais usado e o vespertino");
    }else if(turnoNot >= turnoMat && turnoNot >= turnoVesp){
        printf("O periodo mais usado e o notruno");
    }

    if(elevadorA >= elevadorB && elevadorA >= elevadorC){
        printf(" e o elevador mais usado e o A\n");
        maisUsado = elevadorA;
    }else if(elevadorB >= elevadorA && elevadorB >= elevadorC){
        printf(" e o elevador mais usado e o B\n");
        maisUsado = elevadorB;
    }else if(elevadorC >= elevadorA && elevadorC >= elevadorB){
        printf(" e o elevador mais usado e o C\n");
        maisUsado = elevadorC;
    }

    if(elevadorA <= elevadorB && elevadorA <= elevadorC){
        menosUsado = elevadorA;
    }else if(elevadorB <= elevadorA && elevadorB <= elevadorC){
        menosUsado = elevadorB;
    }else if(elevadorC <= elevadorA && elevadorC <= elevadorB){
        menosUsado = elevadorC;
    }

    percent = (maisUsado - menosUsado) * 2;
    printf("A diferença percentual entre o mais usado dos horários e o menos usado e: %d", percent);

    return 0;
}
