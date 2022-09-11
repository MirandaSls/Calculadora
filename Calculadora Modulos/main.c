#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void ad();
void sub();
void divi();
void multi();
void menu();

int main()
{
    char op;
    setlocale(LC_ALL,"portuguese");
    system("CLS");

    fflush(stdin);
    menu();
    printf("\n- Escolha: ");
    scanf("%c", &op);

    do
    {
        switch(op)
        {
        case '+':
            ad();
            break;
        case '-':
            sub();
            break;
        case '/':
            divi();
            break;
        case 'x':
            multi();
            break;
        case 'S':
            break;

        }
        if (op != 'S')
        {
            system("PAUSE");
        }
    }while(op != 'S');
}

void menu()
{
    printf("- Digite qual opre��o voc� deseja: ");
    printf("\n- Soma: +");
    printf("\n- Subtra��o: -");
    printf("\n- Divis�o: /");
    printf("\n- Multiplica��o: x");
    printf("\n- Sair: S");
}

void ad()
{
    int num1, num2, r;

    printf("\n- Digite um n�mero: ");
    scanf("%i", &num1);
    printf("\n- Digite um n�mero: ");
    scanf("%i", &num2);

    r = num1 + num2;

    printf("\n- O resultado da adi��o � %i\n", r);
    getch();
    main();
}

void sub()
{
    int num1, num2, r;

    printf("\n- Digite um n�mero: ");
    scanf("%i", &num1);
    printf("\n- Digite um n�mero: ");
    scanf("%i", &num2);

    r = num1 - num2;

    printf("\n- O resultado da subtra��o � %i\n", r);
    getch();
    main();
}

void divi()
{
    int num1, num2;
    float r;

    printf("\n- Digite um n�mero: ");
    scanf("%i", &num1);
    printf("\n- Digite um n�mero: ");
    scanf("%i", &num2);

    r = num1 / num2;

    printf("\n- O resultado da divis�o � %f\n", r);
    getch();
    main();
}

void multi()
{
    int num1, num2, r;

    printf("\n- Digite um n�mero: ");
    scanf("%i", &num1);
    printf("\n- Digite um n�mero: ");
    scanf("%i", &num2);

    r = num1 * num2;

    printf("\n- O resultado da multiplica��o � %i\n", r);
    getch();
    main();
}
