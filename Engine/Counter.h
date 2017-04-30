#pragma once
#include "Graphics.h"
#include "Colors.h"

class Counter
{
private:
	struct Position
	{
		int x;
		int y;
	};
private:
	enum Alignment
	{
		Middle,
		Left,
		Right
	};
public:
	Counter(Graphics & in_gfx);
	void Reset();
	void SetPostion(int in_x, int in_y);
	void SetColor(Color in_c);
	void SetColor(int r, int g, int b);
	void SetSpacing(int in_spacing);
	void AlignLeft();
	void AlignRigth();
	void AlignMiddle();
	void Draw();
public:
	Counter operator+(int rhs);
	Counter operator+(const Counter& rhs);
	Counter operator-(int rhs);
	Counter operator-(const Counter& rhs);
	Counter operator*(int rhs);
	Counter operator*(const Counter& rhs);
	Counter operator/(int rhs);
	Counter operator/(const Counter& rhs);
	Counter operator%(int rhs);
	Counter operator%(const Counter& rhs);
	Counter operator++(int); // T++
	Counter operator--(int); // T--
public:
	Counter& operator++(); // ++T
	Counter& operator--(); // --T
	Counter& operator=(int rhs);
	Counter& operator=(const Counter& rhs);
	Counter& operator+=(int rhs);
	Counter& operator+=(const Counter& rhs);
	Counter& operator-=(int rhs);
	Counter& operator-=(const Counter& rhs);
	Counter& operator*=(int rhs);
	Counter& operator*=(const Counter& rhs);
	Counter& operator/=(int rhs);
	Counter& operator/=(const Counter& rhs);
	Counter& operator%=(int rhs);
	Counter& operator%=(const Counter& rhs);
public:
	bool operator<(int rhs);
	bool operator<(const Counter& rhs);
	bool operator>(int rhs);
	bool operator>(const Counter& rhs);
	bool operator<=(int rhs);
	bool operator<=(const Counter& rhs);
	bool operator>=(int rhs);
	bool operator>=(const Counter& rhs);
	bool operator==(int rhs);
	bool operator==(const Counter& rhs);
	bool operator!=(int rhs);
	bool operator!=(const Counter& rhs);
private:
	Graphics& gfx;
	Position Pos;
	Alignment Align;
	int Num;
	int Spacing;
};