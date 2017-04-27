#include "Text.h"

Text::Text(Graphics & in_gfx)
	:gfx(in_gfx)
{
}

void Text::DrawCh(char ch, int x, int y, Color c)
{
	switch (ch)
	{
		case 'A':
			gfx.chA(x, y, c);
			break;
		case 'B':
			gfx.chB(x, y, c);
			break;
		case 'C':
			gfx.chC(x, y, c);
			break;
		case 'D':
			gfx.chD(x, y, c);
			break;
		case 'E':
			gfx.chE(x, y, c);
			break;
		case 'F':
			gfx.chF(x, y, c);
			break;
		case 'G':
			gfx.chG(x, y, c);
			break;
		case 'H':
			gfx.chH(x, y, c);
			break;
		case 'I':
			gfx.chI(x, y, c);
			break;
		case 'J':
			gfx.chJ(x, y, c);
			break;
		case 'K':
			gfx.chK(x, y, c);
			break;
		case 'L':
			gfx.chL(x, y, c);
			break;
		case 'M':
			gfx.chM(x, y, c);
			break;
		case 'N':
			gfx.chN(x, y, c);
			break;
		case 'O':
			gfx.chO(x, y, c);
			break;
		case 'P':
			gfx.chP(x, y, c);
			break;
		case 'Q':
			gfx.chQ(x, y, c);
			break;
		case 'R':
			gfx.chR(x, y, c);
			break;
		case 'S':
			gfx.chS(x, y, c);
			break;
		case 'T':
			gfx.chT(x, y, c);
			break;
		case 'U':
			gfx.chU(x, y, c);
			break;
		case 'V':
			gfx.chV(x, y, c);
			break;
		case 'W':
			gfx.chW(x, y, c);
			break;
		case 'X':
			gfx.chX(x, y, c);
			break;
		case 'Y':
			gfx.chY(x, y, c);
			break;
		case 'Z':
			gfx.chZ(x, y, c);
			break;
		case '0':
			gfx.ch0(x, y, c);
			break;
		case '1':
			gfx.ch1(x, y, c);
			break;
		case '2':
			gfx.ch2(x, y, c);
			break;
		case '3':
			gfx.ch3(x, y, c);
			break;
		case '4':
			gfx.ch4(x, y, c);
			break;
		case '5':
			gfx.ch5(x, y, c);
			break;
		case '6':
			gfx.ch6(x, y, c);
			break;
		case '7':
			gfx.ch7(x, y, c);
			break;
		case '8':
			gfx.ch8(x, y, c);
			break;
		case '9':
			gfx.ch9(x, y, c);
			break;
		case '.':
			gfx.chPoint(x, y, c);
			break;
		case '\'':
			gfx.chApostrophe(x, y, c);
			break;
		case '!':
			gfx.chExMark(x, y, c);
			break;
		case '?':
			gfx.chQMark(x, y, c);
			break;
		case '-':
			gfx.chDash(x, y, c);
			break;
	}
}
