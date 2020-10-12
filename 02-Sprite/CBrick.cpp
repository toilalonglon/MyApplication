#include "CBrick.h"
#include "Game.h"


CBrick::CBrick(float x, float y, float vx) : CGameObject(x, y)
{
	this->vx = vx;
}
void CBrick::Update(DWORD dt)
{
	x += dt * vx;
	int BackBufferWidth = CGame::GetInstance()->GetBackBufferWidth();
	if (x >= BackBufferWidth - Brick_Width || x <= 0)
	{
		vx = -vx;
		if (x < 0)
			x = 0;
		else if (x > BackBufferWidth - Brick_Width)
		    x = (float)BackBufferWidth- Brick_Width;
	}
}

void CBrick::Render()
{
	LPANIMATION a;
	if(vx>0)
		a= CAnimations::GetInstance()->Get(1000);
	else
		a= CAnimations::GetInstance()->Get(1001);
	a->Render(x, y);
}





CBrick::~CBrick()
{
}
