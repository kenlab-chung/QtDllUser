#include "testdll.h"
#include<QDebug>
Testdll::Testdll()
{
}

QString Testdll::Test()
{
    QString name = "this is dll test";
    return  name;
}
