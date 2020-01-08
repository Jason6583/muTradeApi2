#ifndef DLLQTVERSIONDEFINES_H
#define DLLQTVERSIONDEFINES_H
#include <qglobal.h>

#define IS_QT4_VERSION QT_VERSION < QT_VERSION_CHECK(5,0,0)
#define IS_QT5_VERSION QT_VERSION >= QT_VERSION_CHECK(5,0,0)
#define DLL_VERSION_STRING "2.4.0"

#define COLON_SEPERATOR ":"
#define EQUAL_SEPERATOR "="

#define TO_QT_COMPATIBLE_ASCII(var) var.toLatin1()

#endif // DLLQTVERSIONDEFINES_H