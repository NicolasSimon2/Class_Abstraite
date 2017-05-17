#pragma once
class CFigure
{
	int m_X = 0;
	int m_Y = 0;
public:
	
	// Getter et Setter
	void Setm_X(int X);
	int Getm_X();
	void Setm_y(int Y);
	int Getm_Y();

	// Procedure et fonction
	virtual void Dessiner() = 0;
	virtual int aire() = 0;
	virtual int perimetre() = 0;

};

