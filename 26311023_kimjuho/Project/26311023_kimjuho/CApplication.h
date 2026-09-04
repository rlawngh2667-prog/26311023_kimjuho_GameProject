#pragma once
#include<cstdio>
class CApplication
{

public:
	int tableTexture;
	int Init();
	int Update();	
	int Render();
	int Destroy();
	
protected:
	int Initsdk();
};

int AppUpdate();
int AppRender();
