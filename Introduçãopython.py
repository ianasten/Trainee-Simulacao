#Declaração e uso de variáveis

No python existem variáveis literais e numéricas:

	Literal:
		string(str): conjunto de caracteres, deve vir entre '' ou ""

	Numéricas:
		inteira(int): números com apenas um algarismo significativo

		flutuante(float): permite valores decimais

		booleana(bool): só pode ser True ou False, usa álgebra booleana, ou seja,
		aceita operações de conjunção, disjunção, disjunção exclusiva, equivalência
		 lógica e negação.

		...

Cria-se uma variável de acordo com a seguinte fórmula:
(nome da variável) = (valor)
Exemplo: 
a = 2
Lê-se 'a recebe dois'

#Operadores e funções matemáticas básicas (soma, multiplicação, raizquadrada, etc);

Alguns operadores já vem com o Python, estes são:
+ soma -------------------------------- 1 + 1 = 2.0
- subtração --------------------------- 2 - 1 = 1.0
* multiplicação ----------------------- 2 * 2 = 4.0
/ divisão ----------------------------- 4 / 2 = 2.0
** potência --------------------------- 2** 2 = 4.0
// divisão exata ---------------------- 3// 2 = 2.0
+= adiciona certo valor a uma variável
-= subtrai certo valor a uma variável 
*= multiplica variável por um valor
...

Também é possível importar bibliotecas com outros operadores, exemplo:
	É possível importar o comando sqrt do módulo math 'from math import sqrt', mas também pode-se usar o operador de potência (**) por frações para obter raizes
Exemplo: 4**1/2 = 2.0

#Operadores condicionais (if, else);

Dividem o código em diferentes possibilidades de caminho de acordo com condições

if (condição para executar primeiro caminho):
	primeiro caminho
elif(condição para executar segundo caminho):
	segundo caminho
else:
	caso nenhuma das condições seja verdadeira, esse caminho será executado

Exemplo:

a = 2

if (a < 1):
	print(1)
elif(a == 3):
	print(2)
else:
	print(3)

Retorna 3

#Loops/Laços (while, for);

Os comandos while e for são estruturas de repetição,
ou seja, enquanto uma condição for verdadeira, eles 
irão executar um código.

Os esquemas de uso de cada um são:

while (condição que deve ser verdadeira para iniciar loop):
	(ação de cada loop)

Na estrutura for é possível criar uma variável auxiliar
para estabelecer condição. Ela não precisa de ter sido 
declarada antes.

for (variável) in (range):
	(ação de cada loop)

#Definição de funções;

Funções permitem criar comandos que executam códigos dependendo de uma ou mais variáveis.
A definição de funções segue a fórmula:

def (nome da função) ((nome da variável)):
	(ação)

def sucessor (x):
	return(x + 1)

print (sucessor(1))

Retorna 2