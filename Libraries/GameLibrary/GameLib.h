#pragma once
#include <DxLib.h>

#if defined(_DEBUG)
#pragma comment(lib, "GameFramework_d.lib")
#else
#pragma comment(lib, "GameFramework.lib")
#endif

enum ColorCode : unsigned int
{
	COLOR_BLACK = 0xFF000000,
	COLOR_NAVY = 0xFF000080,
	COLOR_GREEN = 0xFF008000,
	COLOR_TEAL = 0xFF008080,
	COLOR_MAROON = 0xFF800000,
	COLOR_PURPLE = 0xFF800080,
	COLOR_OLIVE = 0xFF808000,
	COLOR_GRAY = 0xFF808080,
	COLOR_SILVER = 0xFFC0C0C0,
	COLOR_BLUE = 0xFF0000FF,
	COLOR_LIME = 0xFF00FF00,
	COLOR_AQUA = 0xFF00FFFF,
	COLOR_RED = 0xFFFF0000,
	COLOR_FUCHSIA = 0xFFFF00FF,
	COLOR_YELLOW = 0xFFFFFF00,
	COLOR_WHITE = 0xFFFFFFFF,
};
extern int DrawDashedLine(int x1, int y1, int x2, int y2, unsigned int color, int length, int thickness = 1);
extern int DrawDashedLineAA(float x1, float y1, float x2, float y2, unsigned int color, float length, float thickness = 1.0f);
extern int LoadGraphWithErrorHandling(const char* filename);

#include <minwindef.h>
extern void UpdateJoypadInputState(void);
extern BOOL IsButtonDown(int button);
extern BOOL IsButtonUp(int button);
extern BOOL IsButtonPressed(int button);
extern BOOL IsButtonReleased(int button);

extern float ToRadians(float degree);
extern float ToDegrees(float radian);
extern int   ClampI(int   x, int   min, int   max);
extern float ClampF(float x, float min, float max);

#define EXIT_KEY (KEY_INPUT_ESCAPE)    // ã≠êßèIóπÉLÅ[
extern void UpdateSystem(void);
extern void ExitGame(void);

extern void  UpdateFrameTimer(void);
extern float GetFrameDeltaTime(void);
extern float GetFrameRate(void);

typedef int HGRP;
typedef int HSND;
typedef int HFNT;
typedef int HNET;

#if defined(_DEBUG)
#include <crtdbg.h>
#define _CRTDBG_MAP_ALLOC
#define new new(_NORMAL_BLOCK, __FILE__, __LINE__)
inline void SetUpMemoryLeakDetector()
{
	_CrtSetDbgFlag(_CRTDBG_LEAK_CHECK_DF | _CRTDBG_ALLOC_MEM_DF);
}
#endif
