#pragma once
#include "Figure.h"
class CCercle : public CFigure
{
	int m_Radius;
public:
	CCercle(int Ra = 3) { this->m_Radius = Ra;}; // Constructeur
	~CCercle();

	// Geter et Setter
	void Setm_Radius(int R = 0);
	int Getm_Radius();

	// Procédure et Fonction
	void Dessiner();
	int aire();
	int perimetre();
};

