#pragma once
#include "Graphics.h"
#include "Colors.h"

class Text
{
public:
	Text(Graphics & in_gfx);
	void DrawCh(char ch, int x, int y, Color c);
private:
	Graphics& gfx;
};