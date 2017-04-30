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
#include <cmath>

Game::Game(MainWindow& wnd)
	:
	wnd(wnd),
	gfx(wnd),
	text(gfx),
	origi(gfx),
	rng(rd()),
	cDist(0, 255)
{
	text.SetText("Adam");
	text.SetColor(255,154,124);
	text.SetSpacing(2);
	text.SetPostion(400, 300);

	origi.SetText("KEVIN egy buzerant.de amugy nem csak\nhosszu mondatot\nakar irni -'.,?!\n0123456789");
	origi.SetColor(255, 200, 100);
	origi.SetBoxSize(100, 50, 700, 600);
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
	time += 0.08;
	x = 350 + (200*cos(time)) + 55*cos(time/2);
	y = 350 + (100*sin(time)) + 55*sin(time*2);
	text.SetPostion(int(x), int(y));
	text.SetColor(0, cDist(rng), 0);
	//origi.SetColor(cDist(rng), cDist(rng), cDist(rng));
	//origi.SetPostion(0, int(5*sin(time*5)-25));
}

void Game::ComposeFrame()
{
	origi.Draw();
	text.Draw();
}

