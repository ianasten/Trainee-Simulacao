from math import pi


#insira valores no SI
massadofoguete = 1
diametrodofoguete = 1
comprimentodofoguete = 1
massadaterra = 5.972*(10**24)
densidadedoar = 1.225
posicao = [0,0]
velocidade = [0,0]
modulodavelocidade = (velocidade[0]**2 + velocidade[1]**2)**0.5
empuxo = [0,200]
comprimentodahaste = 1
q = 1/2*(densidadedoar * modulodavelocidade**2)
variacaodetempo = 0.01
iteracoes = 1
booleano = True
peso = [0,-(massadaterra*massadofoguete*6.67408*10**-11)/(posicao[1] + 6.371*10**6)**2]


CN = 1
X = Cm*d/CN


# x é o número de Reynolds
def callCD (x):
	if x < 1000:
		if x != 0:
			CD = 24/x
			return CD
		return 0
	else:
		CD = 0.45
		return CD

# x é o módulo da velocidade
def callRey (x):
	numerodereynolds = densidadear*x*diametro/viscosidade
	return numerodereynolds

#lançamento
while booleano:
	if posicao[1] <= comprimentodahaste:
		aceleracao = (empuxo[0] + peso[0])/massadofoguete , (empuxo[1] + peso[1])/massadofoguete
		velocidade[0] += variacaodetempo*aceleracao[0]
		velocidade[1] += variacaodetempo*aceleracao[1]
		posicao[0] += variacaodetempo*velocidade[0]
		posicao[1] += variacaodetempo*velocidade[1]
		print(velocidade[0] , velocidade[1])
	else:
		booleano = False



#voo impulsionado
#voo livre
#recuperação