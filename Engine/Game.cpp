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
#include <string>

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
	std::string word = "KEVIN\n\nADAM";
	int rX = 30;
	int rXc = 0;
	int x = 100;
	int y = 100;
	int r = 155;
	int g = 255;
	int b = 255;
	for (int i = 0; i < word.length(); i++)
	{
		switch (word.at(i))
		{
			case 'A':
				gfx.chA(x + rXc * rX, y, r, g, b);
				break;
			case 'D':
				gfx.chD(x + rXc * rX, y, r, g, b);
				break;
			case 'M':
				gfx.chM(x + rXc * rX, y, r, g, b);
				break;
			case 'K':
				gfx.chK(x + rXc * rX, y, r, g, b);
				break;
			case 'E':
				gfx.chE(x + rXc * rX, y, r, g, b);
				break;
			case 'V':
				gfx.chV(x + rXc * rX, y, r, g, b);
				break;
			case 'I':
				gfx.chI(x + rXc * rX, y, r, g, b);
				break;
			case 'N':
				gfx.chN(x + rXc * rX, y, r, g, b);
				break;
			case '\n':
				y += 35;
				rXc = -1;
				break;
		}
		rXc++;
	}
}

void Game::ComposeFrame()
{
	/*chK(328 + 0 * 30, 300, 255, 255, 255);
	chE(328 + 1 * 30, 300, 255, 255, 255);
	chV(328 + 2 * 30, 300, 255, 255, 255);
	chI(328 + 3 * 30, 300, 255, 255, 255);
	chN(328 + 4 * 30, 300, 255, 255, 255);

	chL(328 + 0 * 30, 335, 255, 255, 255);
	chA(328 + 1 * 30, 335, 255, 255, 255);
	chC(328 + 2 * 30, 335, 255, 255, 255);
	chK(328 + 3 * 30, 335, 255, 255, 255);
	chO(328 + 4 * 30, 335, 255, 255, 255);*/
	
}

