#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

double calculaCD (double Re){
    if (Re<1000 && Re>0){
        return 24/Re;
    } else if (Re>1000){
        return 0.45;
    } else
        return 0;
}

double calculaRE (double vel, double d){
    double reynolds = (1.2*vel*d)/(1.8*10e-5);
    return reynolds;
}

struct vetor{
    double x, y;
};

int main()
{
    // definição inicial
    double massa = 1.0;
    double diam = 0.3;
    double ro = 1.2;

    double tmax = 20;
    double dt = 0.01;
    int n = tmax/dt;

    vetor velocidade = {0.0,0.0};
    vetor posicao = {0.0,0.0};

    double lt = 0.0;

    for(int i = 0; i<n; i++){

        double v = sqrt(pow(velocidade.x,2)+pow(velocidade.y,2));
        double Re = calculaRE(v,diam);
        double Cd = calculaCD(Re);
        double Fa = (Cd*ro*3.14159*pow(v,2)*pow(diam,2))/8;
        double peso = massa*9.81;

        vetor dirvel;

        if (v == 0){
            dirvel = {0.0,0.0};
        }
        else{
            dirvel = {velocidade.x/v, velocidade.y/v};
        }


        vetor forcaPeso = {0,-peso};
        vetor forcaFa = {dirvel.x*(-1)*(Fa),dirvel.y*(-1)*(Fa)};
        vetor acel = {(forcaPeso.x+forcaFa.x)/massa, (forcaPeso.y+forcaFa.y)/massa};

        velocidade = {velocidade.x+(dt*acel.x),velocidade.y+(dt*acel.y)};
        posicao = {posicao.x+(dt*velocidade.x), posicao.y+(dt*velocidade.y)};

        const double nt = (int(dt * 10 * n))/10.0;

        if(nt != lt)
        {
            cout << "t: " << dt * i << " Vel: " << velocidade.x << " " << velocidade.y << " Re:"<< Re << endl;
        }

    }


    return 0;
}
