#include "Carre.h"
using namespace std;
#include <iostream>



CCarre::CCarre()
{
}


CCarre::~CCarre()
{
}


int CCarre::GetBord() // Getter du bord
{
	return CRectangle::Getm_Largeur();
}

void CCarre::SetBord(int B = 5) // Setter du bord, de la largeur et longueur de Rectangle
{
	CRectangle::Setm_Largeur(B);
	CRectangle::Setm_Longueur(B);
	
}

void CCarre::Dessiner() // Renseigne les bords
{
	cout << "Dessin = "<< GetBord() << endl;
}

int CCarre::aire() // calcul de l'aire
{
	return this->GetBord() * this->GetBord();
}

int CCarre::perimetre() // Calcul de périmetre
{
	return 4 * this->GetBord();
}

