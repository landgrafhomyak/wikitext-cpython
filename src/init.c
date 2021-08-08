#include <Python.h>

#include <wikitext.h>

#include <wikitext/cpython.h>

int WikiText_Cpython_Init(void)
{
    if (WikiText_Init() != 0)
    {
        return -1;
    }
    return 0;
}