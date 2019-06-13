- Declara��o e uso de vari�veis:
    tipo da vari�vel:
        float = n�meros reais(4 bytes);
        int = n�meros inteiros;
        double = n�meros reais(8 bytes);
        string = objetos para manipular caracteres;
        char = caractere;
        ...
    tipo_da_vari�vel + nome_da_vari�vel;
    nome_da_vari�vel = valor_da_vari�vel;


- Operadores e fun��es matem�ticas b�sicas (soma, multiplica��o, raizquadrada, etc):
    os operadores b�sicos como soma (+), substra��o(-), multiplica��o(*) e divis�o(/), podem ser usados sem acrescentar outra biblioteca no c�digo
    para fazer raiz quadrada, por exemplo, acrescenta a biblioteca: #include<cmath> e usa o termo "sqrt"
    para manipular pot�ncias, � s� usar o termo "pow" da seguinte forma: pow(base, expoente)


- Operadores condicionais (if, else):
    s�o operadores usados para fazer desvios no programa.
    if (aqui dentro � feita alguma compara��o de vari�veis com valores, ou de vari�veis com vari�veis) {
        aqui voc� coloca o que o seu programa vai fazer se essa compara��o for verdadeira;
    } else if (caso tenha 2 ou mais compara��es a serem feitas, � colocado outra condi��o, acrescentando o else){
        aqui voc� coloca o que o seu programa vai fazer se essa compara��o for verdadeira;
    } else {
        aqui voc� coloca o que o seu programa vai fazer caso nenhuma das outras compara��es forem verdadeiras;
    }


- Loops/La�os (while, for):
    � uma estrutura de repeti��o, e permite que um conjunto de instru��es sejam realizadas repetidamente at� a condi��o de parada.
    for: voc� consegue escrever o loop para ser executado um n�mero espec�fico de vezes:
        for ( tipo(normalmente � int) + nome_da_vari�vel + valor_da_vari�vel; nome_da_vari�vel + operador_de_compara��o + valor_de_compara��o; opera��o_aritm�tica ){
            aqui voc� coloca as instru��es que devem ser realizadas dentro do loop;
        }
        ex: for (int i = 0; i<10; i++){
                aux = i; // supondo que a vari�vel aux j� tenha sido declarada
            }
            for (i=1; i<=10; i++){
                aux = i; // supondo que as vari�veis aux e i j� tenham sido declaradas
            }
    while: fica no loop enquanto a condi��o dada � verdadeira.
        while (1){
            aux += 1; // mesma coisa de escrever aux = aux + 1
        } // loop infinito
        while (aux!=9){
            aux += 1;
        } // != significa diferente
        while (aux!=9 && j==1){
            aux += j;
            j = 1;
        } // && significa operador de AND


- Defini��o de fun��es:
    tipo_da_fun��o: vai ser igual a qualquer tipo de vari�vel (float, int, char, string...) se a fun��o retornar esse mesmo tipo
                    mas tamb�m pode ser void (quando a fun��o n�o retorna nenhum valor), bool (fun��o booleana, retorna true ou false)
    par�metros: � quando a fun��o recebe algum valor de outra fun��o

        tipo_da_fun��o + nome_da_fun��o (par�metros) {
            aqui voc� coloca o que voc� quer que a fun��o fa�a.
        }

        int somaAB (int A, int B){
            int soma = 0;
            soma = A + B;
            return soma;
        }

        void somaABN (int A, int B){
            int soma = 0;
            soma = A + B;
        }

        bool comparaAB (int A, int B){
            if (A < B){
                return true;
            }else
                return false;
        }

