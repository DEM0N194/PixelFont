/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.cpp																			  *
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
#include "MainWindow.h"
#include "Game.h"

Game::Game( MainWindow& wnd )
	:
	wnd( wnd ),
	gfx( wnd )
{
}

void Game::Go()
{
	gfx.BeginFrame();	
	UpdateModel();
	ComposeFrame();
	gfx.EndFrame();
}

void Game::UpdateModel()
{
}

void Game::ComposeFrame()
{
}

void Game::Block(int x, int y, int r, int g, int b)
{
	for (int xPos = x; xPos <= (x + 3); xPos++)
	{
		for (int yPos = y; yPos <= (y + 3); yPos++)
		{
			gfx.PutPixel(xPos, yPos, r, g, b);
		}
	}
}

void Game::chA(int x, int y, int r, int g, int b)
{
	Block(x+10, y, r, g, b);

	Block(x+5, y+5, r, g, b);
	Block(x+15, y+5, r, g, b);

	Block(x, y+10, r, g, b);
	Block(x+20, y+10, r, g, b);

	Block(x, y+15, r, g, b);
	Block(x+5, y + 15, r, g, b);
	Block(x+10, y + 15, r, g, b);
	Block(x+15, y + 15, r, g, b);
	Block(x+20, y + 15, r, g, b);

	Block(x, y + 20, r, g, b);
	Block(x+20, y + 20, r, g, b);

	Block(x, y + 25, r, g, b);
	Block(x+20, y + 25, r, g, b);
}
void Game::chB(int x, int y, int r, int g, int b)
{
	Block(x, y, r, g, b);
	Block(x+5, y, r, g, b);
	Block(x+10, y, r, g, b);
	Block(x+15, y, r, g, b);

	Block(x, y+5, r, g, b);
	Block(x+20, y+5, r, g, b);

	Block(x, y+10, r, g, b);
	Block(x+5, y+10, r, g, b);
	Block(x+10, y+10, r, g, b);
	Block(x+15, y+10, r, g, b);

	Block(x, y+15, r, g, b);
	Block(x+20, y+15, r, g, b);

	Block(x, y+20, r, g, b);
	Block(x+20, y+20, r, g, b);

	Block(x, y+25, r, g, b);
	Block(x+5, y+25, r, g, b);
	Block(x+10, y+25, r, g, b);
	Block(x+15, y+25, r, g, b);
}
void Game::chC(int x, int y, int r, int g, int b)
{
	Block(x+5, y, r, g, b);
	Block(x+10, y, r, g, b);
	Block(x+15, y, r, g, b);

	Block(x, y+5, r, g, b);
	Block(x+20, y+5, r, g, b);

	Block(x, y+10, r, g, b);

	Block(x, y+15, r, g, b);

	Block(x, y+20, r, g, b);
	Block(x+20, y+20, r, g, b);

	Block(x+5, y+25, r, g, b);
	Block(x+10, y+25, r, g, b);
	Block(x+15, y+25, r, g, b);
}
void Game::chD(int x, int y, int r, int g, int b)
{
	Block(x, y, r, g, b);
	Block(x+5, y, r, g, b);
	Block(x+10, y, r, g, b);

	Block(x, y+5, r, g, b);
	Block(x+15, y+5, r, g, b);

	Block(x, y+10, r, g, b);
	Block(x+20, y+10, r, g, b);

	Block(x, y+15, r, g, b);
	Block(x+20, y+15, r, g, b);

	Block(x, y+20, r, g, b);
	Block(x+15, y+20, r, g, b);

	Block(x, y+25, r, g, b);
	Block(x+5, y+25, r, g, b);
	Block(x+10, y+25, r, g, b);
}
void Game::chE(int x, int y, int r, int g, int b)
{
	Block(x, y, r, g, b);
	Block(x+5, y, r, g, b);
	Block(x+10, y, r, g, b);
	Block(x+15, y, r, g, b);
	Block(x+20, y, r, g, b);

	Block(x, y+5, r, g, b);

	Block(x, y+10, r, g, b);
	Block(x+5, y+10, r, g, b);
	Block(x+10, y+10, r, g, b);

	Block(x, y+15, r, g, b);

	Block(x, y+20, r, g, b);

	Block(x, y+25, r, g, b);
	Block(x+5, y+25, r, g, b);
	Block(x+10, y+25, r, g, b);
	Block(x+15, y+25, r, g, b);
	Block(x+20, y+25, r, g, b);
}
void Game::chF(int x, int y, int r, int g, int b)
{
	Block(x, y, r, g, b);
	Block(x+5, y, r, g, b);
	Block(x+10, y, r, g, b);
	Block(x+15, y, r, g, b);
	Block(x+20, y, r, g, b);

	Block(x, y+5, r, g, b);

	Block(x, y+10, r, g, b);
	Block(x+5, y+10, r, g, b);
	Block(x+10, y+10, r, g, b);

	Block(x, y+15, r, g, b);

	Block(x, y+20, r, g, b);

	Block(x, y+25, r, g, b);
}
void Game::chG(int x, int y, int r, int g, int b)
{
	Block(x+5, y, r, g, b);
	Block(x+10, y, r, g, b);
	Block(x+15, y, r, g, b);

	Block(x, y+5, r, g, b);
	Block(x+20, y+5, r, g, b);

	Block(x, y+10, r, g, b);

	Block(x, y+15, r, g, b);
	Block(x+10, y+15, r, g, b);
	Block(x+15, y+15, r, g, b);
	Block(x+20, y+15, r, g, b);

	Block(x, y+20, r, g, b);
	Block(x+20, y+20, r, g, b);

	Block(x+5, y+25, r, g, b);
	Block(x+10, y+25, r, g, b);
	Block(x+15, y+25, r, g, b);
}
void Game::chH(int x, int y, int r, int g, int b)
{
	Block(x, y, r, g, b);
	Block(x+20, y, r, g, b);

	Block(x, y+5, r, g, b);
	Block(x+20, y+5, r, g, b);

	Block(x, y+10, r, g, b);
	Block(x+5, y+10, r, g, b);
	Block(x+10, y+10, r, g, b);
	Block(x+15, y+10, r, g, b);
	Block(x+20, y+10, r, g, b);

	Block(x, y+15, r, g, b);
	Block(x+20, y+15, r, g, b);

	Block(x, y+20, r, g, b);
	Block(x+20, y+20, r, g, b);

	Block(x, y+25, r, g, b);
	Block(x+20, y+25, r, g, b);
}
void Game::chI(int x, int y, int r, int g, int b)
{
	Block(x, y, r, g, b);
	Block(x+5, y, r, g, b);
	Block(x+10, y, r, g, b);
	Block(x+15, y, r, g, b);
	Block(x+20, y, r, g, b);

	Block(x+10, y+5, r, g, b);

	Block(x+10, y+10, r, g, b);

	Block(x+10, y+15, r, g, b);

	Block(x+10, y+20, r, g, b);

	Block(x, y+25, r, g, b);
	Block(x+5, y+25, r, g, b);
	Block(x+10, y+25, r, g, b);
	Block(x+15, y+25, r, g, b);
	Block(x+20, y+25, r, g, b);
}
void Game::chJ(int x, int y, int r, int g, int b)
{
	Block(x, y, r, g, b);
	Block(x+5, y, r, g, b);
	Block(x+10, y, r, g, b);
	Block(x+15, y, r, g, b);
	Block(x+20, y, r, g, b);

	Block(x+10, y+5, r, g, b);

	Block(x+10, y+10, r, g, b);

	Block(x+10, y+15, r, g, b);

	Block(x, y+20, r, g, b);
	Block(x+10, y+20, r, g, b);

	Block(x+5, y+25, r, g, b);
	Block(x+10, y+25, r, g, b);
}
void Game::chK(int x, int y, int r, int g, int b)
{
	Block(x, y, r, g, b);
	Block(x+20, y, r, g, b);

	Block(x, y+5, r, g, b);
	Block(x+15, y+5, r, g, b);

	Block(x, y+10, r, g, b);
	Block(x+5, y+10, r, g, b);
	Block(x+10, y+10, r, g, b);

	Block(x, y+15, r, g, b);
	Block(x+10, y+15, r, g, b);

	Block(x, y+20, r, g, b);
	Block(x+15, y+20, r, g, b);

	Block(x, y+25, r, g, b);
	Block(x+20, y+25, r, g, b);
}
void Game::chL(int x, int y, int r, int g, int b)
{
	Block(x, y, r, g, b);

	Block(x, y+5, r, g, b);

	Block(x, y+10, r, g, b);

	Block(x, y+15, r, g, b);

	Block(x, y+20, r, g, b);

	Block(x, y+25, r, g, b);
	Block(x+5, y+25, r, g, b);
	Block(x+10, y+25, r, g, b);
	Block(x+15, y+25, r, g, b);
	Block(x+20, y+25, r, g, b);
}
void Game::chM(int x, int y, int r, int g, int b)
{
	Block(x, y, r, g, b);
	Block(x+20, y, r, g, b);

	Block(x, y+5, r, g, b);
	Block(x+5, y+5, r, g, b);
	Block(x+15, y+5, r, g, b);
	Block(x+20, y+5, r, g, b);

	Block(x, y+10, r, g, b);
	Block(x+10, y+10, r, g, b);
	Block(x+20, y+10, r, g, b);

	Block(x, y+15, r, g, b);
	Block(x+10, y+15, r, g, b);
	Block(x+20, y+15, r, g, b);

	Block(x, y+20, r, g, b);
	Block(x+20, y+20, r, g, b);

	Block(x, y+25, r, g, b);
	Block(x+20, y+25, r, g, b);
}
void Game::chN(int x, int y, int r, int g, int b)
{
	Block(x, y, r, g, b);
	Block(x+20, y, r, g, b);

	Block(x, y+5, r, g, b);
	Block(x+5, y+5, r, g, b);
	Block(x+20, y+5, r, g, b);

	Block(x, y+10, r, g, b);
	Block(x+10, y+10, r, g, b);
	Block(x+20, y+10, r, g, b);

	Block(x, y+15, r, g, b);
	Block(x+15, y+15, r, g, b);
	Block(x+20, y+15, r, g, b);

	Block(x, y+20, r, g, b);
	Block(x+20, y+20, r, g, b);

	Block(x, y+25, r, g, b);
	Block(x+20, y+25, r, g, b);
}
void Game::chO(int x, int y, int r, int g, int b)
{
	Block(x+5, y, r, g, b);
	Block(x+10, y, r, g, b);
	Block(x+15, y, r, g, b);

	Block(x, y+5, r, g, b);
	Block(x+20, y+5, r, g, b);

	Block(x, y+10, r, g, b);
	Block(x+20, y+10, r, g, b);

	Block(x, y+15, r, g, b);
	Block(x+20, y+15, r, g, b);

	Block(x, y+20, r, g, b);
	Block(x+20, y+20, r, g, b);

	Block(x+5, y+25, r, g, b);
	Block(x+10, y+25, r, g, b);
	Block(x+15, y+25, r, g, b);
}
void Game::chP(int x, int y, int r, int g, int b)
{
	Block(x, y, r, g, b);
	Block(x+5, y, r, g, b);
	Block(x+10, y, r, g, b);
	Block(x+15, y, r, g, b);

	Block(x, y+5, r, g, b);
	Block(x+20, y+5, r, g, b);

	Block(x, y+10, r, g, b);
	Block(x+5, y+10, r, g, b);
	Block(x+10, y+10, r, g, b);
	Block(x+15, y+10, r, g, b);

	Block(x, y+15, r, g, b);

	Block(x, y+20, r, g, b);

	Block(x, y+25, r, g, b);
}
void Game::chQ(int x, int y, int r, int g, int b)
{
	Block(x+5, y, r, g, b);
	Block(x+10, y, r, g, b);
	Block(x+15, y, r, g, b);

	Block(x, y+5, r, g, b);
	Block(x+20, y+5, r, g, b);

	Block(x, y+10, r, g, b);
	Block(x+20, y+10, r, g, b);

	Block(x, y+15, r, g, b);
	Block(x+10, y+15, r, g, b);
	Block(x+20, y+15, r, g, b);

	Block(x, y+20, r, g, b);
	Block(x+15, y+20, r, g, b);

	Block(x+5, y+25, r, g, b);
	Block(x+10, y+25, r, g, b);
	Block(x+20, y+25, r, g, b);
}
void Game::chR(int x, int y, int r, int g, int b)
{
	Block(x, y, r, g, b);
	Block(x+5, y, r, g, b);
	Block(x+10, y, r, g, b);
	Block(x+15, y, r, g, b);

	Block(x, y+5, r, g, b);
	Block(x+20, y+5, r, g, b);

	Block(x, y+10, r, g, b);
	Block(x+5, y+10, r, g, b);
	Block(x+10, y+10, r, g, b);
	Block(x+15, y+10, r, g, b);

	Block(x, y+15, r, g, b);
	Block(x+20, y+15, r, g, b);

	Block(x, y+20, r, g, b);
	Block(x+20, y+20, r, g, b);

	Block(x, y+25, r, g, b);
	Block(x+20, y+25, r, g, b);
}
void Game::chS(int x, int y, int r, int g, int b)
{
	Block(x+5, y, r, g, b);
	Block(x+10, y, r, g, b);
	Block(x+15, y, r, g, b);
	Block(x+20, y, r, g, b);

	Block(x, y+5, r, g, b);

	Block(x+5, y+10, r, g, b);
	Block(x+10, y+10, r, g, b);
	Block(x+15, y+10, r, g, b);

	Block(x+20, y+15, r, g, b);

	Block(x+20, y+20, r, g, b);

	Block(x, y+25, r, g, b);
	Block(x+5, y+25, r, g, b);
	Block(x+10, y+25, r, g, b);
	Block(x+15, y+25, r, g, b);
}
void Game::chT(int x, int y, int r, int g, int b)
{
	Block(x, y, r, g, b);
	Block(x+5, y, r, g, b);
	Block(x+10, y, r, g, b);
	Block(x+15, y, r, g, b);
	Block(x+20, y, r, g, b);

	Block(x+10, y+5, r, g, b);

	Block(x+10, y+10, r, g, b);

	Block(x+10, y+15, r, g, b);

	Block(x+10, y+20, r, g, b);

	Block(x+10, y+25, r, g, b);
}
void Game::chU(int x, int y, int r, int g, int b)
{
	Block(x, y, r, g, b);
	Block(x+20, y, r, g, b);

	Block(x, y+5, r, g, b);
	Block(x+20, y+5, r, g, b);

	Block(x, y+10, r, g, b);
	Block(x+20, y+10, r, g, b);

	Block(x, y+15, r, g, b);
	Block(x+20, y+15, r, g, b);

	Block(x, y+20, r, g, b);
	Block(x+20, y+20, r, g, b);

	Block(x+5, y+25, r, g, b);
	Block(x+10, y+25, r, g, b);
	Block(x+15, y+25, r, g, b);
}
void Game::chV(int x, int y, int r, int g, int b)
{
	Block(x, y, r, g, b);
	Block(x+20, y, r, g, b);

	Block(x, y+5, r, g, b);
	Block(x+20, y+5, r, g, b);

	Block(x, y+10, r, g, b);
	Block(x+20, y+10, r, g, b);

	Block(x+5, y+15, r, g, b);
	Block(x+15, y+15, r, g, b);

	Block(x+5, y+20, r, g, b);
	Block(x+15, y+20, r, g, b);

	Block(x+10, y+25, r, g, b);
}
void Game::chW(int x, int y, int r, int g, int b)
{
	Block(x, y, r, g, b);
	Block(x+20, y, r, g, b);

	Block(x, y+5, r, g, b);
	Block(x+20, y+5, r, g, b);

	Block(x, y+10, r, g, b);
	Block(x+20, y+10, r, g, b);

	Block(x, y+15, r, g, b);
	Block(x+10, y+15, r, g, b);
	Block(x+20, y+15, r, g, b);

	Block(x, y+20, r, g, b);
	Block(x+10, y+20, r, g, b);
	Block(x+20, y+20, r, g, b);

	Block(x+5, y+25, r, g, b);
	Block(x+15, y+25, r, g, b);
}
void Game::chX(int x, int y, int r, int g, int b)
{
	Block(x, y, r, g, b);
	Block(x+20, y, r, g, b);

	Block(x+5, y+5, r, g, b);
	Block(x+15, y+5, r, g, b);

	Block(x+10, y+10, r, g, b);

	Block(x+10, y+15, r, g, b);

	Block(x+5, y+20, r, g, b);
	Block(x+15, y+20, r, g, b);

	Block(x, y+25, r, g, b);
	Block(x+20, y+25, r, g, b);
}
void Game::chY(int x, int y, int r, int g, int b)
{
	Block(x, y, r, g, b);
	Block(x+20, y, r, g, b);

	Block(x, y+5, r, g, b);
	Block(x+20, y+5, r, g, b);

	Block(x+5, y+10, r, g, b);
	Block(x+15, y+10, r, g, b);

	Block(x+10, y+15, r, g, b);

	Block(x+10, y+20, r, g, b);

	Block(x+10, y+25, r, g, b);
}
void Game::chZ(int x, int y, int r, int g, int b)
{
	Block(x, y, r, g, b);
	Block(x+5, y, r, g, b);
	Block(x+10, y, r, g, b);
	Block(x+15, y, r, g, b);
	Block(x+20, y, r, g, b);

	Block(x+20, y+5, r, g, b);

	Block(x+15, y+10, r, g, b);

	Block(x+10, y+15, r, g, b);

	Block(x+5, y+20, r, g, b);

	Block(x, y+25, r, g, b);
	Block(x+5, y+25, r, g, b);
	Block(x+10, y+25, r, g, b);
	Block(x+15, y+25, r, g, b);
	Block(x+20, y+25, r, g, b);
}

void Game::ch0(int x, int y, int r, int g, int b)
{
	Block(x + 5, y, r, g, b);
	Block(x + 10, y, r, g, b);
	Block(x + 15, y, r, g, b);

	Block(x, y + 5, r, g, b);
	Block(x + 15, y + 5, r, g, b);
	Block(x + 20, y + 5, r, g, b);

	Block(x, y + 10, r, g, b);
	Block(x + 10, y + 10, r, g, b);
	Block(x + 20, y + 10, r, g, b);

	Block(x, y + 15, r, g, b);
	Block(x + 10, y + 15, r, g, b);
	Block(x + 20, y + 15, r, g, b);

	Block(x, y + 20, r, g, b);
	Block(x + 5, y + 20, r, g, b);
	Block(x + 20, y + 20, r, g, b);

	Block(x + 5, y + 25, r, g, b);
	Block(x + 10, y + 25, r, g, b);
	Block(x + 15, y + 25, r, g, b);
}
void Game::ch1(int x, int y, int r, int g, int b)
{
	Block(x + 10, y, r, g, b);

	Block(x + 5, y + 5, r, g, b);
	Block(x + 10, y + 5, r, g, b);

	Block(x, y + 10, r, g, b);
	Block(x + 10, y + 10, r, g, b);

	Block(x + 10, y + 15, r, g, b);

	Block(x + 10, y + 20, r, g, b);

	Block(x, y + 25, r, g, b);
	Block(x + 5, y + 25, r, g, b);
	Block(x + 10, y + 25, r, g, b);
	Block(x + 15, y + 25, r, g, b);
	Block(x + 20, y + 25, r, g, b);
}
void Game::ch2(int x, int y, int r, int g, int b)
{
	Block(x + 5, y, r, g, b);
	Block(x + 10, y, r, g, b);
	Block(x + 15, y, r, g, b);

	Block(x, y + 5, r, g, b);
	Block(x + 20, y + 5, r, g, b);

	Block(x + 20, y + 10, r, g, b);

	Block(x + 5, y + 15, r, g, b);
	Block(x + 10, y + 15, r, g, b);
	Block(x + 15, y + 15, r, g, b);

	Block(x, y + 20, r, g, b);

	Block(x, y + 25, r, g, b);
	Block(x + 5, y + 25, r, g, b);
	Block(x + 10, y + 25, r, g, b);
	Block(x + 15, y + 25, r, g, b);
	Block(x + 20, y + 25, r, g, b);
}
void Game::ch3(int x, int y, int r, int g, int b)
{
	Block(x, y, r, g, b);
	Block(x + 5, y, r, g, b);
	Block(x + 10, y, r, g, b);
	Block(x + 15, y, r, g, b);

	Block(x + 20, y + 5, r, g, b);

	Block(x + 20, y + 10, r, g, b);

	Block(x, y + 15, r, g, b);
	Block(x + 5, y + 15, r, g, b);
	Block(x + 10, y + 15, r, g, b);
	Block(x + 15, y + 15, r, g, b);

	Block(x + 20, y + 20, r, g, b);

	Block(x, y + 25, r, g, b);
	Block(x + 5, y + 25, r, g, b);
	Block(x + 10, y + 25, r, g, b);
	Block(x + 15, y + 25, r, g, b);
	Block(x + 20, y + 25, r, g, b);
}
void Game::ch4(int x, int y, int r, int g, int b)
{
	Block(x + 15, y, r, g, b);

	Block(x + 10, y + 5, r, g, b);
	Block(x + 15, y + 5, r, g, b);

	Block(x + 5, y + 10, r, g, b);
	Block(x + 15, y + 10, r, g, b);

	Block(x, y + 15, r, g, b);
	Block(x + 15, y + 15, r, g, b);

	Block(x, y + 20, r, g, b);
	Block(x + 5, y + 20, r, g, b);
	Block(x + 10, y + 20, r, g, b);
	Block(x + 15, y + 20, r, g, b);
	Block(x + 20, y + 20, r, g, b);

	Block(x + 15, y + 25, r, g, b);
}
void Game::ch5(int x, int y, int r, int g, int b)
{
	Block(x, y, r, g, b);
	Block(x + 5, y, r, g, b);
	Block(x + 10, y, r, g, b);
	Block(x + 15, y, r, g, b);
	Block(x + 20, y, r, g, b);

	Block(x, y + 5, r, g, b);

	Block(x, y + 10, r, g, b);
	Block(x + 5, y + 10, r, g, b);
	Block(x + 10, y + 10, r, g, b);
	Block(x + 15, y + 10, r, g, b);


	Block(x + 20, y + 15, r, g, b);

	Block(x + 20, y + 20, r, g, b);

	Block(x, y + 25, r, g, b);
	Block(x + 5, y + 25, r, g, b);
	Block(x + 10, y + 25, r, g, b);
	Block(x + 15, y + 25, r, g, b);
}
void Game::ch6(int x, int y, int r, int g, int b)
{
	Block(x + 10, y, r, g, b);
	Block(x + 15, y, r, g, b);
	Block(x + 20, y, r, g, b);

	Block(x + 5, y + 5, r, g, b);

	Block(x, y + 10, r, g, b);

	Block(x, y + 15, r, g, b);
	Block(x + 5, y + 15, r, g, b);
	Block(x + 10, y + 15, r, g, b);
	Block(x + 15, y + 15, r, g, b);

	Block(x, y + 20, r, g, b);
	Block(x + 20, y + 20, r, g, b);

	Block(x + 5, y + 25, r, g, b);
	Block(x + 10, y + 25, r, g, b);
	Block(x + 15, y + 25, r, g, b);
}
void Game::ch7(int x, int y, int r, int g, int b)
{
	Block(x, y, r, g, b);
	Block(x + 5, y, r, g, b);
	Block(x + 10, y, r, g, b);
	Block(x + 15, y, r, g, b);
	Block(x + 20, y, r, g, b);

	Block(x + 20, y + 5, r, g, b);

	Block(x + 15, y + 10, r, g, b);

	Block(x + 10, y + 15, r, g, b);

	Block(x + 5, y + 20, r, g, b);

	Block(x, y + 25, r, g, b);
}
void Game::ch8(int x, int y, int r, int g, int b)
{
	Block(x + 5, y, r, g, b);
	Block(x + 10, y, r, g, b);
	Block(x + 15, y, r, g, b);

	Block(x, y + 5, r, g, b);
	Block(x + 20, y + 5, r, g, b);

	Block(x + 5, y + 10, r, g, b);
	Block(x + 10, y + 10, r, g, b);
	Block(x + 15, y + 10, r, g, b);

	Block(x, y + 15, r, g, b);
	Block(x + 20, y + 15, r, g, b);

	Block(x, y + 20, r, g, b);
	Block(x + 20, y + 20, r, g, b);

	Block(x + 5, y + 25, r, g, b);
	Block(x + 10, y + 25, r, g, b);
	Block(x + 15, y + 25, r, g, b);
}
void Game::ch9(int x, int y, int r, int g, int b)
{
	Block(x + 5, y, r, g, b);
	Block(x + 10, y, r, g, b);
	Block(x + 15, y, r, g, b);

	Block(x, y + 5, r, g, b);
	Block(x + 20, y + 5, r, g, b);

	Block(x + 5, y + 10, r, g, b);
	Block(x + 10, y + 10, r, g, b);
	Block(x + 15, y + 10, r, g, b);
	Block(x + 20, y + 10, r, g, b);

	Block(x + 20, y + 15, r, g, b);

	Block(x + 15, y + 20, r, g, b);

	Block(x + 10, y + 25, r, g, b);
}

void Game::chPoint(int x, int y, int r, int g, int b)
{
	Block(x, y + 25, r, g, b);
}
void Game::chApostrophe(int x, int y, int r, int g, int b)
{
	Block(x, y, r, g, b);

	Block(x, y + 5, r, g, b);
}
void Game::chExMark(int x, int y, int r, int g, int b)
{
	Block(x, y, r, g, b);

	Block(x, y + 5, r, g, b);

	Block(x, y + 10, r, g, b);

	Block(x, y + 15, r, g, b);

	Block(x, y + 25, r, g, b);
}
void Game::chDash(int x, int y, int r, int g, int b)
{
	Block(x, y + 10, r, g, b);
	Block(x + 5, y + 10, r, g, b);
	Block(x + 10, y + 10, r, g, b);
}
void Game::chQMark(int x, int y, int r, int g, int b)
{
	Block(x + 5, y, r, g, b);
	Block(x + 10, y, r, g, b);
	Block(x + 15, y, r, g, b);

	Block(x, y + 5, r, g, b);
	Block(x + 20, y + 5, r, g, b);

	Block(x + 15, y + 10, r, g, b);

	Block(x + 10, y + 15, r, g, b);

	Block(x + 10, y + 25, r, g, b);
}