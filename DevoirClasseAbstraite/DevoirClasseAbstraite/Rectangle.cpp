#include "Rectangle.h"
using namespace std;
#include <iostream>






CRectangle::~CRectangle()
{
}

void CRectangle::Setm_Largeur(int L) // Set largeur
{
	this->m_Largeur = L;
}

int CRectangle::Getm_Largeur() // Get largeur
{
	return this->m_Largeur;
}

void CRectangle::Setm_Longueur(int L) // Set longueur
{
	this->m_Longueur = L;
}

int CRectangle::Getm_Longueur() // Get Longueur
{
	return this->m_Longueur;
}

void CRectangle::Dessiner() // Renseigne la largeur et la longueur
{
	cout << "dessin = " << this->m_Largeur << this->m_Longueur << endl;
	
}

int CRectangle::aire() // Calcul de l'aire
{
	return this->m_Largeur * this->m_Longueur;
}

int CRectangle::perimetre() // Calcul du périmetre
{
	return (this->m_Largeur + this->m_Longueur) * 2;
}
