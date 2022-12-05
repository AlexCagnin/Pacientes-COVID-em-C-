#include <stdio.h>
#include <stdlib.h>

int main(void) {

    //Arquivo txt
    FILE *grupo_de_risco,*cadastro_geral;

    grupo_de_risco=fopen("Gruporisco.txt","a");
    cadastro_geral=fopen("Cadastropaciente.txt","a");

char login[15] = "medico";
char login1[15];
char senha[15] = "123";
char senha1[15];
char nome[40];
char sobrenome[20];
char nascimento[50];
char telefone[15];
char cpf[15];
char email[30];
char rua [50];
char numero[15];
char bairro[50];
char cidade[50];
char estado[50];
char data_do_diagnostico[15];
int login_efetuado;
int resultado;
int ano;
int idade;
int comorbidade;
int obesidade;
int hipertensao;
int tuberculose;
int opcao = 1;
long int cep;


    //Sistema de Login

    while(!login_efetuado){
        printf("Digite seu Login:\n");
            scanf("%s", &login1);

        printf("Digite a senha:\n");
            scanf("%s", &senha1);

    if (strcmp(login, login1) == 0 && strcmp(senha, senha1) == 0){

        printf("\n\Logado!\n\n");
            login_efetuado = 1;
                system("pause");
                system("cls");
}
    else{
        printf("Dados invalidos\n");
            login_efetuado = 0;
                system("pause");
                system("cls");
}
}

    // Abertura

    printf("--------Hospital PIM IV-------\n");
    printf("--------Cadastro de pacientes com COVID-------\n");
    printf("O paciente esta com sintomas?\nDigite 1 para Sim\nDigite 2 para Nao\n");
        scanf("%d", &resultado);

    switch(resultado){
        case 1 :
            printf("Sim\n");
                break;

        case 2 :
            printf("\nRecomende ao paciente o uso de alcool e gel, mascara e os cuidados necessarios contra a COVID-19. Obrigado!\n");
                return 0;
                break;
        default:
            printf("Erro, tente novamente");
                return resultado;
                system("cls");
}

   //Cadastro

    printf("Insira seu primeiro nome:\n");
        scanf("%s", &nome);
            fflush(stdin);

    printf("Insira seu sobrenome:\n", nome);
        scanf("%s", &sobrenome);
            fflush(stdin);

    //Gravação de nome
    fprintf(cadastro_geral, "Nome: %s %s \n", nome,sobrenome);

    printf("Qual sua data de nascimento? ex: --/--/--\n");
        scanf("%s", nascimento);
    fprintf(cadastro_geral, "Data de nascimento: %s \n", nascimento);


    printf("Insira seu CPF:\n");
        scanf("%s", &cpf);
            fflush(stdin);

    //Gravação de cpf
    fprintf(cadastro_geral, "CPF: %s  \n", cpf);
            fflush(stdin);

    printf("Insira o nome da sua rua:\n");
        fgets(rua,50,stdin);


    printf("Insira o numero da casa:\n");
        fgets(numero,15,stdin);

    printf("Insira o bairro:\n");
        fgets(bairro,50,stdin);


    printf("Insira a cidade:\n");
        fgets(cidade,50,stdin);

    printf("Insira o estado:\n");
        fgets(estado,50,stdin);


    fprintf(cadastro_geral, "Endereço: %s\n", rua);
    fprintf(cadastro_geral, "Numero: %s\n", numero);
    fprintf(cadastro_geral, "Bairro: %s\n", bairro);
    fprintf(cadastro_geral, "Cidade: %s\n", cidade);
    fprintf(cadastro_geral, "Estado: %s\n ", estado);

    printf("Insira seu telefone:\n");
        scanf("%s", &telefone);
            fflush(stdin);

    //Gravação de telefone
    fprintf(cadastro_geral,"Telefone: %s \n", telefone);

    printf("Insira seu CEP:\n");
        scanf("%lu", &cep);
            fflush(stdin);

    printf("Insira seu email:\n");
        scanf("%s", &email);
            fflush(stdin);

    //Gravação de email
    fprintf(cadastro_geral, "Email: %s  \n", email);

    printf("Data do diagnostico: ex: --/--/-- \n");
        scanf("%s", &data_do_diagnostico);
            fflush(stdin);
            system("cls");

    //Gravação de data do diagnóstico
    fprintf(cadastro_geral, "Data do diagnostico: %s  \n", data_do_diagnostico);

    printf("Voce nasceu em que ano?\n");
        scanf("%d", &ano);
            idade= 2022-ano;
    printf("%d anos \n", idade);
        system("pause");
        system("cls");


    printf("Tem comorbidades?\n[1] para Sim\n[2] para Nao\n");
        scanf("%d", &opcao);

    if (opcao == 2 && idade>=65){
    printf("Voce esta no grupo de risco!\n Cadastro-Paciente salvo!\n");

     //Gravação de nome
    fprintf(grupo_de_risco, "Nome: %s \n", nome);

    //Gravação de cep
    fprintf(grupo_de_risco, "CEP: %d \n", cep);

    //Gravação de idade
    fprintf(grupo_de_risco, "Idade: %d anos \n", idade);
    system("pause");
    system("cls");
    }

    else (opcao == 2 && idade<65);
    system("pause");
    system("cls");

    if (opcao == 1) {
    	printf("\nVoce tem obesidade?\n[1]Sim\n[2]Nao\n ");
            scanf("%d", &obesidade);

    if (obesidade==1){
        fprintf(cadastro_geral, "Obesidade: Sim  \n", obesidade);
}
    else
        fprintf(cadastro_geral, "Obesidade: Não  \n", obesidade);

        printf("\nVoce tem hipertensao?:\n[1]Sim\n[2]Nao\n ");
            scanf("%d", &hipertensao);

    if (hipertensao==1){
       fprintf(cadastro_geral, "Hipertensao: Sim \n", hipertensao);
}
    else
        fprintf(cadastro_geral, "Hipertensao: Não \n", hipertensao);

        printf("\nVoce tem tuberculose?:\n[1]Sim\n[2]Nao\n ");
            scanf("%d", &tuberculose);

    if (tuberculose==1){
       fprintf(cadastro_geral, "Tuberculose: Sim \n", tuberculose);
}
    else
        fprintf(cadastro_geral, "Tuberculose: Não \n", tuberculose);


    if (idade>=65||obesidade==1 || hipertensao==1 || tuberculose ==1 ){
                //Gravação de nome
    fprintf(grupo_de_risco, "Nome: %s %s \n", nome, sobrenome);

                //Gravação de cep
    fprintf(grupo_de_risco, "CEP: %d \n", cep);

                //Gravação de idade
    fprintf(grupo_de_risco, "Idade: %d anos \n", idade);

    printf("Voce esta no grupo de risco!\n Cadastro-Paciente salvo!\n");
    system("pause");
    system("cls");
}



}
    printf("---------------------------------------------------\n");
    printf("-----------------Dados do Paciente-----------------\n");
    printf("Nome: %s %s\n", nome,sobrenome);
    printf("CPF: %s\n", cpf);
    printf("Endereco: %s \n ",rua);
    printf("Numero: %s\n ",numero);
    printf("Bairro: %s\n", bairro);
    printf("Cidade: %s\n", cidade);
    printf("Estado: %s\n", estado);
    printf("Telefone: %s\n", telefone);
    printf("CEP: %lu\n",cep);
    printf("Data do diagnostico: %s\n",data_do_diagnostico);
    printf("Idade: %d anos\n ", idade);
    printf("---------------------------------------------------\n");

    //Separador txt
    fprintf(grupo_de_risco, "------------------------------\n");
    fprintf(cadastro_geral, "------------------------------\n");

fclose(grupo_de_risco);
system("pause");

fclose(cadastro_geral);
system("pause");
return(0);


}
