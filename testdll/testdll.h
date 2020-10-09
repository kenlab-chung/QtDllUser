#ifndef TESTDLL_H
#define TESTDLL_H

#include "testdll_global.h"
#include<QString>
class TESTDLL_EXPORT Testdll
{
public:
    Testdll();
    QString Test(); //interface to be tested.
};

#endif // TESTDLL_H
