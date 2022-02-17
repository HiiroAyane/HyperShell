#pragma once
#include "CoreShell.h"
#include "HyperIni.h"

class HyperShell : public QWidget
{
    Q_OBJECT;
public:
    explicit HyperShell(QWidget *parent = Q_NULLPTR);

private:
    void initWidgets();
    void setCustomPalette();
};
