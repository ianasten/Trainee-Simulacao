#include <iostream>

struct VETOR2D
{
	double x;
	double y;
};

double Cd(double Re)
{
	if(Re > 0 && Re < 10e3)
		return 24.0 / Re;
	if (Re < 10e5)
		return 0.45;
	else
		return 0.5;
}

int main()
{
	const double massa = 1.0;
	
	const double dt = 0.01;
	const double tempMaximo = 25.0;
	
	const size_t nIter = static_cast<size_t>(tempMaximo / dt);
	
	const double forcaGrav = 9.81 * massa;
	
	const double rho = 1.2;
	const double diam = 0.3;
	const double mi = 1.8 * 10e-5;
	
	VETOR2D vel = {0.0, 0.0};
	VETOR2D pos = {0.0, 0.0};
	
	double lt = 0.0;
	for (size_t i = 0; i < nIter; i++)
	{
		double v = sqrt((vel.x*vel.x) + (vel.y * vel.y));
		double t = i * dt;
		double Re = (rho * v * diam)/mi;
	
		VETOR2D peso = { 0.0, -forcaGrav };

		VETOR2D dirVel;
		if (v != 0.0)
		{
			dirVel = { vel.x / v, vel.y / v };
		}
		else
		{
			dirVel = { 0.0, 0.0 };
		}

		double modArr = 0.5 * rho * v * v * diam * diam * 3.14159 * 0.25 * Cd(Re);

		VETOR2D arrasto = { -dirVel.x * modArr, -dirVel.y * modArr };

		VETOR2D forcaTotal = { arrasto.x + peso.x, arrasto.y + peso.y };

		VETOR2D acelTotal = { forcaTotal.x / massa, forcaTotal.y / massa };

		vel.x += acelTotal.x * dt;
		vel.y += acelTotal.y * dt;

		pos.x += vel.x * dt;
		pos.y += vel.y * dt;

		const double nt = (int(t * 10)) / 10.0;
	
		if (nt != lt)
		{
			std::cout << "t: " << nt << "Vel: " << vel.x << " " << vel.y << " Re:" << Re << "\n";
			lt = nt;
		}
	}
	
	return 0;
}