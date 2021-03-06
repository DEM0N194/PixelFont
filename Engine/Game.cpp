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
#include <cmath>

Game::Game(MainWindow& wnd)
	:
	wnd(wnd),
	gfx(wnd),
	/*------user------*/
	rng(std::random_device()()),
	cDist(0, 255)
{
	name.SetText("Adam");
	name.SetSpacing(2);

	text.SetText("KEVIN egy buzerant. de amugy nem csak\nhosszu mondatot\nakar irni -'.,?!\n0123456789");
	text.SetLineSpacing(10);
	text.SetBoxSize(100, 50, 700, 600);

	numL.SetPostion(25, 550);
	numL.SetColor(Colors::Gray);
	numL.SetNumOf0(5);

	numM.SetPostion(400, 550);
	numM.AlignMiddle();
	numM.SetNumOf0(2);

	numR.SetPostion(775, 550);
	numR.AlignRight();
	numR.SetSpacing(2);
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

	name.SetPostion(int(x), int(y));
	name.SetColor(0, cDist(rng), 0);

	text.SetColor(cDist(rng), cDist(rng), cDist(rng));
	text.SetPostion(0, int(5*sin(time*5)-25));

	numL++;
	if (numL > 999999) numL = 0;

	numM = -int(time);

	if (numL % 60 == 0)
	{
		numR++;
		numR.SetColor(cDist(rng), cDist(rng), cDist(rng));
	}
}

void Game::ComposeFrame()
{
	text.Draw(gfx);
	name.Draw(gfx);
	numL.Draw(gfx);
	numM.Draw(gfx);
	numR.Draw(gfx);
}

