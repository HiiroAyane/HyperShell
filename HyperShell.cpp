#include "HyperShell.h"
#include <QPalette>
#include <QIcon>

HyperShell::HyperShell(QWidget *parent)
    : QWidget(parent)
{
    this->initWidgets();
}

void HyperShell::initWidgets()
{
    QString strWidgetText = readWidgetTextIni();

    this->resize(600, 400);
    this->setCustomPalette();
    this->setWindowIcon(QIcon(":/Icons/Icons/title.ico"));
    this->setWindowTitle(QString::fromUtf8("HyperShell"));
    this->setWindowFlags(this->windowFlags() & ~Qt::WindowMaximizeButtonHint);
    this->show();

    CustomButton* createSshBtn = new CustomButton(this);
    createSshBtn->setText(getWidgetText("createSshButton", strWidgetText));
    createSshBtn->setNormalBackground(QColor(14, 114, 237));
    createSshBtn->setHoverBackground(QColor(13, 104, 216));
    createSshBtn->setForeground(Qt::white);
    createSshBtn->setFontSize("20px");
    createSshBtn->setBorderRadius("20px");
    createSshBtn->setCustomStyle();
    createSshBtn->setGeometry(100, 200, 100, 100);

    return;
}

void HyperShell::setCustomPalette()
{
    QPalette palette;
    palette.setBrush(QPalette::All, QPalette::Window, QBrush(Qt::white));

    QFont font("Microsoft YaHei UI");
    this->setFont(font);

    this->setPalette(palette);
    return;
}
