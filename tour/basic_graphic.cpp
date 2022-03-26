#include <windows.h>

int main()
{
    HDC hdc = GetDC(GetConsoleWindow());
    for (int x = 0; x < 256; ++x)
        for (int y = 0; y < 256; ++y)
            SetPixel(hdc, x, y, RGB(127, x, y));
}