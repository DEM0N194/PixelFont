#include "Counter.h"
#include <string>

Counter::Counter()
{
	Reset();
}

void Counter::Reset()
{
	pos = {0,0};
	alignment = Left;
	c = Colors::White;
	num = 123;
	spacing = 25 + 5;
}

void Counter::SetPostion(int x, int y)
{
	pos = {x,y};
}

void Counter::SetColor(Color in_c)
{
	c = in_c;
}

void Counter::SetColor(int r, int g, int b)
{
	c = {unsigned char(r), unsigned char(g), unsigned char(b)};
}

void Counter::SetSpacing(int in_spacing)
{
	spacing = 25 + in_spacing;
}

void Counter::AlignLeft()
{
	alignment = Left;
}

void Counter::AlignMiddle()
{
	alignment = Middle;
}

void Counter::AlignRight()
{
	alignment = Right;
}

void Counter::Draw(Graphics & gfx)
{
	Position posOld = pos;
	std::string snum = std::to_string(num);
	int digit = 0;
	for (auto& ch : snum)
	{
		switch (alignment)
		{
			case Left:
				pos.x = posOld.x + digit*spacing;
				break;
			case Middle:
				pos.x = posOld.x - snum.size()/2.0f*spacing + digit*spacing;
				break;
			case Right:
				pos.x = posOld.x - snum.size()*spacing + digit*spacing;
				break;
		}
		digit++;
		DrawCh(ch,gfx);
	}
	pos = posOld;
}

void Counter::DrawCh(char ch, Graphics & gfx)
{
	switch (ch)
	{
		case '0':
			gfx.ch0(pos.x, pos.y, c);
			break;
		case '1':
			gfx.ch1(pos.x, pos.y, c);
			break;
		case '2':
			gfx.ch2(pos.x, pos.y, c);
			break;
		case '3':
			gfx.ch3(pos.x, pos.y, c);
			break;
		case '4':
			gfx.ch4(pos.x, pos.y, c);
			break;
		case '5':
			gfx.ch5(pos.x, pos.y, c);
			break;
		case '6':
			gfx.ch6(pos.x, pos.y, c);
			break;
		case '7':
			gfx.ch7(pos.x, pos.y, c);
			break;
		case '8':
			gfx.ch8(pos.x, pos.y, c);
			break;
		case '9':
			gfx.ch9(pos.x, pos.y, c);
			break;
	}
}
