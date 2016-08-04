#ifndef MISCUTIL_H
#define MISCUTIL_H

#include <QIcon>

class QWidget;
class QByteArray;

void SetApplicationIcon(WId winId);
QByteArray & ByteReverse(QByteArray & array);
bool SimpleInputBox(QWidget* parent, const QString & title, QString defaultValue, QString & output);
void SimpleErrorBox(QWidget* parent, const QString & title, const QString & text);
void SimpleWarningBox(QWidget* parent, const QString & title, const QString & text);

struct DIcon : QIcon
{
    inline explicit DIcon(const QString & file) : QIcon(QString(":/icons/images/%1").arg(file)) {}
};

#endif // MISCUTIL_H
