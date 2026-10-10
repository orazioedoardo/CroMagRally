//
// window.h
//

#pragma once

void InitWindowStuff(void);
ObjNode* MakeFadeEvent(Boolean fadeIn);
void OGL_FadeOutScene(void (*drawCall)(void), void (*moveCall)(void));
void Enter2D(Boolean pauseDSp);
void Exit2D(void);
int GetNumDisplays(void);
void MoveToPreferredDisplay(void);
void SetFullscreenMode(bool enforceDisplayPref);
void SwapGameWindow(void);

#if __EMSCRIPTEN__
extern double	gAnimationFrameTime;
extern uint32_t	gAnimationFrameCount;
#endif
