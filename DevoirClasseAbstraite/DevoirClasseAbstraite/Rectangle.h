#pragma once
#include"Figure.h"

class CRectangle : public CFigure
{
	int m_Largeur;
	int m_Longueur;

public:
	CRectangle(int La = 1, int Lo = 2) { this->m_Largeur = La; this->m_Longueur = Lo; }; // constructeur
	~CRectangle();

	// Getter et Setter
	void Setm_Largeur(int L = 0);
	int Getm_Largeur();
	void Setm_Longueur(int L = 0);
	int Getm_Longueur();

	// Procedure et Fonction
	void Dessiner();
	int aire();
	int perimetre();
};

