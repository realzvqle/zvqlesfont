#ifndef TEXT_H_INCLUDED
#define TEXT_H_INCLUDED







#include "typedef.h"



VOID DrawCharacter(CHAR c, UINT16 x, UINT16 y, UINT16 size, UINT64 color);
VOID DrawString(PCHAR string, UINT16 x, UINT16 y, UINT16 size, UINT64 color);
VOID TestFont();
#endif