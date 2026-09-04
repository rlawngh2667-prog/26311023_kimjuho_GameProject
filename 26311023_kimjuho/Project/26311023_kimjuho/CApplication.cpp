#include"CApplication.h"
#include"glc2d.h"

CApplication g_app;
int AppUpdate()
{
	g_app.Update();
	
	return 0;
}

int AppRender()
{
	
	g_app.Render();
	return 0;
}
int CApplication::Init()
{
	g2_InitSdk();

	printf("Starting ...\n\n");
	g2_CreateWin(100, 100, 1024, 600, "My First Game Window");

	//CApplication app;
	g2_SetFrameMove(AppUpdate);


	g2_SetRender(AppRender);
	this->tableTexture = g2_TextureLoad("resource/Table.png");
	return 0;
}

int CApplication::Update()
{

	return 0;
}

int CApplication::Render()
{
	// 이미지 파일 로딩
	printf("이미지 로딩중...");
	g2_Draw2D(tableTexture, nullptr);
	printf("이미지 로딩완료");
	return 0;
}
int CApplication::Destroy()
{
	g2_DestroyWin();
	return 0;
}


int CApplication::Initsdk()
{

	return 0;
}