#include "Cercle.h"
using namespace std;
#include <iostream>





CCercle::~CCercle()
{
}

void CCercle::Setm_Radius(int R) // Setter de radius
{
	this->m_Radius = R;
}

int CCercle::Getm_Radius() // Getter de radius
{
	return this->m_Radius;
}

void CCercle::Dessiner() // Renseigne le radius
{
	cout << "Dessin = " << this->m_Radius << endl;
}

int CCercle::aire() // Calcul de l'aire
{
	return 3.14 * (this->m_Radius * this->m_Radius);
}

int CCercle::perimetre() // Calcul du perimetre 
{
	return 2 * 3.14 * this->m_Radius;
}
