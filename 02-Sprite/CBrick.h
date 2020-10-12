#pragma once
#include "GameObject.h"

#define Brick_Width 14
class CBrick : public CGameObject
{ protected:
	 float vx;
public:
	CBrick(float x, float y, float vx);
	void Render();
	void Update(DWORD dt);
	CBrick();
	~CBrick();
};

