#include "CustomWidgets.h"

#pragma region CustomButton
CustomButton::CustomButton(QWidget* parent)
	:QPushButton(parent)
{
	this->initWidget();
	this->show();
}

void CustomButton::setCustomStyle()
{
	QString strCommonStyle = m_strBorderRadius + m_strForeground + m_strFontFamily + m_strFontBold + m_strFontSize;
	m_strQss = "QPushButton{ border-width:0px;" + m_strBackground + strCommonStyle + " }";
	m_strQss += "QPushButton:hover{ border-width:0px;" + m_strHoverBackground + strCommonStyle + " }";
	this->setStyleSheet(m_strQss);
	this->update();
	return;
}

void CustomButton::setNormalBackground(const QColor& color)
{
	m_strBackground = "background-color:rgb(" + QString::number(color.red());
	m_strBackground += ", " + QString::number(color.green());
	m_strBackground += ", " + QString::number(color.blue());
	m_strBackground += ");";
	return;
}

void CustomButton::setHoverBackground(const QColor& color)
{
	m_strHoverBackground = "background-color:rgb(" + QString::number(color.red());
	m_strHoverBackground += ", " + QString::number(color.green());
	m_strHoverBackground += ", " + QString::number(color.blue());
	m_strHoverBackground += ");";
	return;
}

void CustomButton::setForeground(const QColor& color)
{
	m_strForeground = "color:rgb(" + QString::number(color.red());
	m_strForeground += ", " + QString::number(color.green());
	m_strForeground += ", " + QString::number(color.blue());
	m_strForeground += ");";
	return;
}

void CustomButton::setFontWeight(const QString& style)
{
	m_strFontBold = "font-weight:" + style + ";";
	return;
}

void CustomButton::setFontFamily(const QString& style)
{
	m_strFontFamily = "font-family:" + style + ";";
	return;
}

void CustomButton::setFontSize(const QString& style)
{
	m_strFontSize = "font-size:" + style + ";";
	return;
}

void CustomButton::setBorderRadius(const QString& style)
{
	m_strBorderRadius = "border-radius:" + style + ";";
	return;
}

void CustomButton::initWidget()
{
	m_strFontFamily = "font-family:\"Microsoft YaHei UI\";";
	m_strFontBold = "font-weight:bold;";
	m_strFontSize = "font-size:12px;";
	m_strBackground = "background-color:white;";
	m_strHoverBackground = "background-color:gray;";
	m_strForeground = "color:black;";
	m_strBorderRadius = "border-radius:7px";
	this->setCustomStyle();
	return;
}

#pragma endregion CustomButton