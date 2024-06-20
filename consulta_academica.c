#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    char nome[50];
    float nascimento;
    float cpf;
    float matricula;
    float nota1, nota2;
    float media_final;

    printf("\n----- CONSULTA ACADÊMICA PRIMEIRO SEMESTRE -----\n\n");
    printf("-> ALUNO 01 <-\n\n");
    printf("DIGITE O PRIMEIRO NOME DO ALUNO(A):\n");
    scanf("%s", nome);
    fflush(stdin);
    printf("DATA DE NASCIMENTO:\n");
    scanf("%f", &nascimento);
    fflush(stdin);
    printf("DIGITE SEU CPF:\n");
    scanf("%f", &cpf);
    fflush(stdin);
    printf("DIGITE SUA MATRÍCULA:\n");
    scanf("%f", &matricula);
    fflush(stdin);
    printf("NOTA 01:\n");
    scanf("%f", &nota1);
    fflush(stdin);
    printf("NOTA 02:\n");
    scanf("%f", &nota2);
    fflush(stdin);
    printf("MÉDIA:\n%.1f\n\n", media_final = (nota1 + nota2) / 2);

    if(media_final >= 7.0){
        printf("STATUS: APROVADO(A)!\n");
    }
    else{
        printf("STATUS: REPROVADO(A)");
    }

    char nome2[50];
    float nascimento2;
    float cpf2;
    float matricula2;
    float nota1_2, nota2_2;
    float media_final2;

    printf("\n\n-> ALUNO 02 <-\n\n");
    printf("DIGITE O PRIMEIRO NOME DO ALUNO(A):\n");
    scanf("%s", nome2);
    fflush(stdin);
    printf("DATA DE NASCIMENTO:\n");
    scanf("%f", &nascimento2);
    fflush(stdin);
    printf("DIGITE SEU CPF:\n");
    scanf("%f", &cpf2);
    fflush(stdin);
    printf("DIGITE SUA MATRÍCULA:\n");
    scanf("%f", &matricula2);
    fflush(stdin);
    printf("NOTA 01:\n");
    scanf("%f", &nota1_2);
    fflush(stdin);
    printf("NOTA 02:\n");
    scanf("%f", &nota2_2);
    fflush(stdin);
    printf("MÉDIA:\n%.1f\n\n", media_final2 = (nota1_2 + nota2_2) / 2);

    if(media_final2 >= 7.0){
        printf("STATUS: APROVADO(A)!\n");
    }
    else{
        printf("STATUS: REPROVADO(A)");
    }

    char nome3[50];
    float nascimento3;
    float cpf3;
    float matricula3;
    float nota1_3, nota2_3;
    float media_final3;

    printf("\n\n-> ALUNO 03 <-\n\n");
    printf("DIGITE O PRIMEIRO NOME DO ALUNO(A):\n");
    scanf("%s", nome3);
    fflush(stdin);
    printf("DATA DE NASCIMENTO:\n");
    scanf("%f", &nascimento3);
    fflush(stdin);
    printf("DIGITE SEU CPF:\n");
    scanf("%f", &cpf3);
    fflush(stdin);
    printf("DIGITE SUA MATRÍCULA:\n");
    scanf("%f", &matricula3);
    fflush(stdin);
    printf("NOTA 01:\n");
    scanf("%f", &nota1_3);
    fflush(stdin);
    printf("NOTA 02:\n");
    scanf("%f", &nota2_2);
    fflush(stdin);
    printf("MÉDIA:\n%.1f\n\n", media_final3 = (nota1_3 + nota2_3) / 2);

    if(media_final3 >= 7.0){
        printf("STATUS: APROVADO(A)!\n");
    }
    else{
        printf("STATUS: REPROVADO(A)\n\n");
    }

    char nome4[50];
    float nascimento4;
    float cpf4;
    float matricula4;
    float nota1_4, nota2_4;
    float media_final4;

    printf("\n\n-> ALUNO 04 <-\n\n");
    printf("DIGITE O PRIMEIRO NOME DO ALUNO(A):\n");
    scanf("%s", nome4);
    fflush(stdin);
    printf("DATA DE NASCIMENTO:\n");
    scanf("%f", &nascimento4);
    fflush(stdin);
    printf("DIGITE SEU CPF:\n");
    scanf("%f", &cpf4);
    fflush(stdin);
    printf("DIGITE SUA MATRÍCULA:\n");
    scanf("%f", &matricula4);
    fflush(stdin);
    printf("NOTA 01:\n");
    scanf("%f", &nota1_4);
    fflush(stdin);
    printf("NOTA 02:\n");
    scanf("%f", &nota2_4);
    fflush(stdin);
    printf("MÉDIA:\n%.1f\n\n", media_final4 = (nota1_4 + nota2_4) / 2);

    if(media_final4 >= 7.0){
        printf("STATUS: APROVADO(A)!\n");
    }
    else{
        printf("STATUS: REPROVADO(A)\n\n");
    }

    printf("-------------------- RELATÓRIO ACADÊMICO --------------------\n\n");
    printf("ALUNO:\tNOTA01:\tNOTA02:\tMÉDIA:\tSTATUS:\n");
    printf("%s\t%.1f\t%.1f\t%.1f\tAPROVADO\n", nome, nota1, nota2, media_final = (nota1 + nota2) / 2);
    printf("%s\t%.1f\t%.1f\t%.1f\tAPROVADO\n", nome2, nota1_2, nota2_2, media_final2 = (nota1 + nota2) / 2);
    printf("%s\t%.1f\t%.1f\t%.1f\tREPROVADO\n", nome3, nota1_3, nota2_3, media_final3 = (nota1_3 + nota2_3) / 2);
    printf("%s\t%.1f\t%.1f\t%.1f\tREPROVADO\n", nome4, nota1_4, nota2_4, media_final4 = (nota1_4 + nota2_4) / 2);
    

}
