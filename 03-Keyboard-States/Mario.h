#pragma once
#include "GameObject.h"

#define MARIO_WALKING_SPEED		0.1f
#define MARIO_JUMP_SPEED_Y		0.5f
#define MARIO_GRAVITY			0.1f
#define MARIO_WALKING_FASTER    0.3f
#define MARIO_JUMPING_HIGHER     0.9f

#define MARIO_STATE_IDLE			0
#define MARIO_STATE_WALKING_RIGHT	100
#define MARIO_STATE_WALKING_LEFT	200
#define MARIO_STATE_JUMP			300
#define MARIO_STATE_WALKING_FASTER_RIGHT  400
#define MARIO_STATE_WALKING_FASTER_LEFT 500
#define MARIO_STATE_JUMP_HIGHER 600

#define MARIO_ANI_IDLE_RIGHT		0
#define MARIO_ANI_IDLE_LEFT			1
#define MARIO_ANI_WALKING_RIGHT		2
#define MARIO_ANI_WALKING_LEFT		3

class CMario : public CGameObject
{
public: 

	void Update(DWORD dt);
	void Render();
	void SetState(int state);
};