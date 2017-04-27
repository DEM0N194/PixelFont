#include "Text.h"

Text::Text(Graphics & in_gfx)
	:gfx(in_gfx)
{
	Reset();
}

void Text::Reset()
{
	c = Colors::White;
	Pos.x = gfx.ScreenWidth / 2;
	Pos.y = gfx.ScreenHeight / 2;
	Box1.x = 0;
	Box1.y = 0;
	Box2.x = gfx.ScreenWidth;
	Box2.y = gfx.ScreenHeight;
	text = "";
	spacing = 25 + 5;
	lineSpacing = 30 + 5;
}

void Text::SetPostion(int in_x, int in_y)
{
	Pos.x = in_x;
	Pos.y = in_y;
}

void Text::SetColor(Color in_c)
{
	c = in_c;
}

void Text::SetColor(int r, int g, int b)
{
	c = {unsigned char(r), unsigned char(g), unsigned char(b)};
}

void Text::SetBoxSize(int x1, int y1, int x2, int y2)
{
	Box1.x = x1;
	Box1.y = y1;
	Box2.x = x2;
	Box2.y = y2;
}

void Text::SetSpacing(int in_spacing)
{
	spacing = 25 + in_spacing;
}

void Text::SetLineSpacing(int in_lineSpacing)
{
	lineSpacing = 30 + in_lineSpacing;
}

void Text::SetText(std::string in_text)
{
	text = in_text;
	for (auto& c : text) c = toupper(c);
}

void Text::Draw()
{
	Position PosOld = Pos;
	int relativeX = 0;
	for (auto& c : text)
	{
		Pos.x = PosOld.x + relativeX * spacing;
		if (c == '\n')
		{
			Pos.y += lineSpacing;
			relativeX = -1;
		}
		else
		{
			DrawCh(c);
		}
		relativeX++;
	}
	Pos = PosOld;
}

void Text::DrawCh(char ch)
{
	switch (ch)
	{
		case 'A':
			gfx.chA(Pos.x, Pos.y, c);
			break;
		case 'B':
			gfx.chB(Pos.x, Pos.y, c);
			break;
		case 'C':
			gfx.chC(Pos.x, Pos.y, c);
			break;
		case 'D':
			gfx.chD(Pos.x, Pos.y, c);
			break;
		case 'E':
			gfx.chE(Pos.x, Pos.y, c);
			break;
		case 'F':
			gfx.chF(Pos.x, Pos.y, c);
			break;
		case 'G':
			gfx.chG(Pos.x, Pos.y, c);
			break;
		case 'H':
			gfx.chH(Pos.x, Pos.y, c);
			break;
		case 'I':
			gfx.chI(Pos.x, Pos.y, c);
			break;
		case 'J':
			gfx.chJ(Pos.x, Pos.y, c);
			break;
		case 'K':
			gfx.chK(Pos.x, Pos.y, c);
			break;
		case 'L':
			gfx.chL(Pos.x, Pos.y, c);
			break;
		case 'M':
			gfx.chM(Pos.x, Pos.y, c);
			break;
		case 'N':
			gfx.chN(Pos.x, Pos.y, c);
			break;
		case 'O':
			gfx.chO(Pos.x, Pos.y, c);
			break;
		case 'P':
			gfx.chP(Pos.x, Pos.y, c);
			break;
		case 'Q':
			gfx.chQ(Pos.x, Pos.y, c);
			break;
		case 'R':
			gfx.chR(Pos.x, Pos.y, c);
			break;
		case 'S':
			gfx.chS(Pos.x, Pos.y, c);
			break;
		case 'T':
			gfx.chT(Pos.x, Pos.y, c);
			break;
		case 'U':
			gfx.chU(Pos.x, Pos.y, c);
			break;
		case 'V':
			gfx.chV(Pos.x, Pos.y, c);
			break;
		case 'W':
			gfx.chW(Pos.x, Pos.y, c);
			break;
		case 'X':
			gfx.chX(Pos.x, Pos.y, c);
			break;
		case 'Y':
			gfx.chY(Pos.x, Pos.y, c);
			break;
		case 'Z':
			gfx.chZ(Pos.x, Pos.y, c);
			break;
		case '0':
			gfx.ch0(Pos.x, Pos.y, c);
			break;
		case '1':
			gfx.ch1(Pos.x, Pos.y, c);
			break;
		case '2':
			gfx.ch2(Pos.x, Pos.y, c);
			break;
		case '3':
			gfx.ch3(Pos.x, Pos.y, c);
			break;
		case '4':
			gfx.ch4(Pos.x, Pos.y, c);
			break;
		case '5':
			gfx.ch5(Pos.x, Pos.y, c);
			break;
		case '6':
			gfx.ch6(Pos.x, Pos.y, c);
			break;
		case '7':
			gfx.ch7(Pos.x, Pos.y, c);
			break;
		case '8':
			gfx.ch8(Pos.x, Pos.y, c);
			break;
		case '9':
			gfx.ch9(Pos.x, Pos.y, c);
			break;
		case '.':
			gfx.chPoint(Pos.x, Pos.y, c);
			break;
		case '\'':
			gfx.chApostrophe(Pos.x, Pos.y, c);
			break;
		case '!':
			gfx.chExMark(Pos.x, Pos.y, c);
			break;
		case '?':
			gfx.chQMark(Pos.x, Pos.y, c);
			break;
		case '-':
			gfx.chDash(Pos.x, Pos.y, c);
			break;
	}
}
