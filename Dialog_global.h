#ifndef DIALOG_GLOBAL_H
#define DIALOG_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(DIALOG_LIBRARY)
#define DIALOG_EXPORT Q_DECL_EXPORT
#else
#define DIALOG_EXPORT Q_DECL_IMPORT
#endif

#endif // DIALOG_GLOBAL_H
