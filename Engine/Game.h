/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.h																				  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#pragma once

#include "Keyboard.h"
#include "Mouse.h"
#include "Graphics.h"

class Game
{
public:
	Game( class MainWindow& wnd );
	Game( const Game& ) = delete;
	Game& operator=( const Game& ) = delete;
	void Go();
private:
	void ComposeFrame();
	void UpdateModel();
	/********************************/
	/*        User Functions        */
	/********************************/
private:
	MainWindow& wnd;
	Graphics gfx;
	/********************************/
	/*        User Variables        */
	/********************************/

	/********************************/
	/*         Pixel Font           */
	/********************************/
	void Block(int x, int y, int r, int g, int b);

	void chA(int x, int y, int r, int g, int b);
	void chB(int x, int y, int r, int g, int b);
	void chC(int x, int y, int r, int g, int b);
	void chD(int x, int y, int r, int g, int b);
	void chE(int x, int y, int r, int g, int b);
	void chF(int x, int y, int r, int g, int b);
	void chG(int x, int y, int r, int g, int b);
	void chH(int x, int y, int r, int g, int b);
	void chI(int x, int y, int r, int g, int b);
	void chJ(int x, int y, int r, int g, int b);
	void chK(int x, int y, int r, int g, int b);
	void chL(int x, int y, int r, int g, int b);
	void chM(int x, int y, int r, int g, int b);
	void chN(int x, int y, int r, int g, int b);
	void chO(int x, int y, int r, int g, int b);
	void chP(int x, int y, int r, int g, int b);
	void chQ(int x, int y, int r, int g, int b);
	void chR(int x, int y, int r, int g, int b);
	void chS(int x, int y, int r, int g, int b);
	void chT(int x, int y, int r, int g, int b);
	void chU(int x, int y, int r, int g, int b);
	void chV(int x, int y, int r, int g, int b);
	void chW(int x, int y, int r, int g, int b);
	void chX(int x, int y, int r, int g, int b);
	void chY(int x, int y, int r, int g, int b);
	void chZ(int x, int y, int r, int g, int b);

	void ch0(int x, int y, int r, int g, int b);
	void ch1(int x, int y, int r, int g, int b);
	void ch2(int x, int y, int r, int g, int b);
	void ch3(int x, int y, int r, int g, int b);
	void ch4(int x, int y, int r, int g, int b);
	void ch5(int x, int y, int r, int g, int b);
	void ch6(int x, int y, int r, int g, int b);
	void ch7(int x, int y, int r, int g, int b);
	void ch8(int x, int y, int r, int g, int b);
	void ch9(int x, int y, int r, int g, int b);

	void chPoint(int x, int y, int r, int g, int b);
	void chApostrophe(int x, int y, int r, int g, int b);
	void chExMark(int x, int y, int r, int g, int b);
	void chQMark(int x, int y, int r, int g, int b);
	void chDash(int x, int y, int r, int g, int b);
};