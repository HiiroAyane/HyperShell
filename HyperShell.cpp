#include "HyperShell.h"
#include <QScrollArea>
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

    QScrollArea* fastConnectArea = new QScrollArea(this);
    fastConnectArea->setGeometry(10, 10, 580, 250);

    CustomButton* createSshBtn = new CustomButton(this);
    createSshBtn->setText(getWidgetText("createSshButton", strWidgetText));
    createSshBtn->setNormalBackground(QColor(14, 114, 237));
    createSshBtn->setHoverBackground(QColor(13, 104, 216));
    createSshBtn->setForeground(Qt::white);
    createSshBtn->setFontSize("20px");
    createSshBtn->setBorderRadius("20px");
    createSshBtn->setCustomStyle();
    createSshBtn->setGeometry(20, 280, 100, 100);

    CustomButton* manageSshBtn = new CustomButton(this);
    manageSshBtn->setText(getWidgetText("manageSshButton", strWidgetText));
    manageSshBtn->setNormalBackground(QColor(14, 114, 237));
    manageSshBtn->setHoverBackground(QColor(13, 104, 216));
    manageSshBtn->setForeground(Qt::white);
    manageSshBtn->setFontSize("20px");
    manageSshBtn->setBorderRadius("20px");
    manageSshBtn->setCustomStyle();
    manageSshBtn->setGeometry(140, 280, 100, 100);

    CustomButton* optionBtn = new CustomButton(this);
    optionBtn->setText(getWidgetText("optionButton", strWidgetText));
    optionBtn->setNormalBackground(QColor(14, 114, 237));
    optionBtn->setHoverBackground(QColor(13, 104, 216));
    optionBtn->setForeground(Qt::white);
    optionBtn->setFontSize("20px");
    optionBtn->setBorderRadius("20px");
    optionBtn->setCustomStyle();
    optionBtn->setGeometry(360, 280, 100, 100);

    CustomButton* settingBtn = new CustomButton(this);
    settingBtn->setText(getWidgetText("settingButton", strWidgetText));
    settingBtn->setNormalBackground(QColor(14, 114, 237));
    settingBtn->setHoverBackground(QColor(13, 104, 216));
    settingBtn->setForeground(Qt::white);
    settingBtn->setFontSize("20px");
    settingBtn->setBorderRadius("20px");
    settingBtn->setCustomStyle();
    settingBtn->setGeometry(480, 280, 100, 100);

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
