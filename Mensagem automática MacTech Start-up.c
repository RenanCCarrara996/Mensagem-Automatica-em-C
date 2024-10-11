#include <stdio.h>
#include <locale.h>

int main(){ 1;
    int num1, opc2, voltar;
    setlocale(LC_ALL, "Portuguese");

    //Tela Inicial (1)
    printf("====================================\nOla, somos a MacTech, empresa de start-up que proporciona a sua empresa \nmais qualidade e facilidade em suas ferramentas e redes sociais. \n\n");
    printf("[1] Para ver nossos contatos; \n[2] Para ver nossos servicos; \n[3] Para ver exemplos de empresas que utilizaram nossos servicos;\n");
    printf("Digite aqui: ");
    scanf("%i", &num1);


    //Tela Número 1 - Contatos
    if(num1==1){
        printf("\n====================================\n[1] Telefone; \n[2] WhastApp; \n[3] Site; \n[4] VOLTAR.");
        printf("\nDigite aqui: ");
        scanf("%i", &opc2);

        if(opc2==1){//Tela Telefone
            printf("\n====================================\nTelefone de contato da MacTech: +55 (xx) 99887-7665.");
            printf("\n\nPara VOLTAR digite [1]: ");
            scanf("%i", &voltar);

            if(voltar==1){
                return main(1);
            }
            else {
                printf("Digito invalido... Voltando ao inicio \n====================================\n");
                return main(1);
            }
        }
        else if(opc2==2){
            printf("\n====================================\nWhatsApp de contato da MacTech: +55 (xx) 11223-3445.");
            printf("\n\nPara VOLTAR digite [1]: ");
            scanf("%i", &voltar);

            if(voltar==1){
                return main(1);
            }
            else {
                printf("Digito invalido... Retornando ao inicio. \n====================================\n");
                return main(1);
            }
        }
        else if(opc2==3){
            printf("\n====================================\nNosso site MacTech: www.mactech.com/home");
            printf("\n\nPara VOLTAR digite [1]: ");
            scanf("%i", &voltar);

            if(voltar==1){
                return main(1);
            }
            else {
                printf("Digito invalido... Retornando ao inicio. \n====================================\n");
                return main(1);
            }
        }
        else if(opc2==4){
            return main(1);
        }
        else{
            printf("Numero invalido... Retornando ao inicio. \n====================================\n");
            return main(1);
        }
    }

    //Tela Número 2 - Serviços
    else if(num1==2){
        printf("\n\n====================================\n[1]Criacao e manutencao de Sofwares; \n[2]Acessibilidade; \n[3]Marketing; \n[4] VOLTAR.");
        printf("\nDigite aqui: ");
        scanf("%i", &opc2);

        if(opc2==1){//Tela Software
            printf("\n====================================\nOferecemos servicos como: \n- Criacao de Apps; \n- Criacao de Sites (plataformas web); \n- Desenvolvimento de sistemas; \n- Analise de softwares e manutancao.");
            printf("\n\nPara VOLTAR digite [1]: ");
            scanf("%i", &voltar);

            if(voltar==1){
                return main(1);
            }
            else {
                printf("Digito invalido... Voltando ao inicio \n====================================\n");
                return main(1);
            }
        }
        else if(opc2==2){
            printf("\n====================================\nOferecemos servicos de acessibilidade como: \n- Implantacao de Libras; \n- Implantacao de filtros de cor para daltonismo; \n- Aplicacao de Leitura Avancada.");
            printf("\n\nPara VOLTAR digite [1]: ");
            scanf("%i", &voltar);

            if(voltar==1){
                return main(1);
            }
            else {
                printf("Digito invalido... Retornando ao inicio. \n====================================\n");
                return main(1);
            }
        }
        else if(opc2==3){
            printf("\n====================================\nOferecemos serviços de Marketing como: \n- Criacao de Anuncios e Publicidades; \n- Criacao de prototipos \n- Criacao de comerciais interativos; \n- Postagem semanal nas redes sociais.");
            printf("\n\nPara VOLTAR digite [1]: ");
            scanf("%i", &voltar);

            if(voltar==1){
                return main(1);
            }
            else {
                printf("Digito invalido... Retornando ao inicio. \n====================================\n");
                return main(1);
            }
        }
        else if(opc2==4){
            return main(1);
        }
        else{
            printf("Numero invalido... Retornando ao inicio. \n====================================\n");
            return main(1);
        }
    }


    //Tela Número 3 - Exemplos
    else if(num1==3){
        printf("\n\n====================================\nAlgumas empresas que ja utilizaram nossos servicos, que se encontra entre 600 a 5900 dolares: \n- Ifood; \n- Uber; \n- Nubank; \n- 49 Educacao. \n\nAperte [1] VOLTAR.");
        printf("\nDigite aqui: ");
        scanf("%i", &opc2);

        if(opc2==1){
            return main(1);
        }
        else{
            printf("Numero invalido... Retornando ao inicio. \n====================================\n");
            return main(1);
        }
    }

    //Tela de Erro, se a pessoa digitar um numero diferente de 1, 2 ou 3
    else{
        printf("Numero invalido... Tente novamente. \n====================================\n");
        return main(1);
    }

    return 0;
}
