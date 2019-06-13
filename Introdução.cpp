- Declaração e uso de variáveis:
    tipo da variável:
        float = números reais(4 bytes);
        int = números inteiros;
        double = números reais(8 bytes);
        string = objetos para manipular caracteres;
        char = caractere;
        ...
    tipo_da_variável + nome_da_variável;
    nome_da_variável = valor_da_variável;


- Operadores e funções matemáticas básicas (soma, multiplicação, raizquadrada, etc):
    os operadores básicos como soma (+), substração(-), multiplicação(*) e divisão(/), podem ser usados sem acrescentar outra biblioteca no código
    para fazer raiz quadrada, por exemplo, acrescenta a biblioteca: #include<cmath> e usa o termo "sqrt"
    para manipular potências, é só usar o termo "pow" da seguinte forma: pow(base, expoente)


- Operadores condicionais (if, else):
    são operadores usados para fazer desvios no programa.
    if (aqui dentro é feita alguma comparação de variáveis com valores, ou de variáveis com variáveis) {
        aqui você coloca o que o seu programa vai fazer se essa comparação for verdadeira;
    } else if (caso tenha 2 ou mais comparações a serem feitas, é colocado outra condição, acrescentando o else){
        aqui você coloca o que o seu programa vai fazer se essa comparação for verdadeira;
    } else {
        aqui você coloca o que o seu programa vai fazer caso nenhuma das outras comparações forem verdadeiras;
    }


- Loops/Laços (while, for):
    é uma estrutura de repetição, e permite que um conjunto de instruções sejam realizadas repetidamente até a condição de parada.
    for: você consegue escrever o loop para ser executado um número específico de vezes:
        for ( tipo(normalmente é int) + nome_da_variável + valor_da_variável; nome_da_variável + operador_de_comparação + valor_de_comparação; operação_aritmética ){
            aqui você coloca as instruções que devem ser realizadas dentro do loop;
        }
        ex: for (int i = 0; i<10; i++){
                aux = i; // supondo que a variável aux já tenha sido declarada
            }
            for (i=1; i<=10; i++){
                aux = i; // supondo que as variáveis aux e i já tenham sido declaradas
            }
    while: fica no loop enquanto a condição dada é verdadeira.
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


- Definição de funções:
    tipo_da_função: vai ser igual a qualquer tipo de variável (float, int, char, string...) se a função retornar esse mesmo tipo
                    mas também pode ser void (quando a função não retorna nenhum valor), bool (função booleana, retorna true ou false)
    parâmetros: é quando a função recebe algum valor de outra função

        tipo_da_função + nome_da_função (parâmetros) {
            aqui você coloca o que você quer que a função faça.
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

