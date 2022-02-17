#pragma once
#include <QPushButton>

class CustomButton : public QPushButton
{
	Q_OBJECT;
public:
	explicit CustomButton(QWidget* parent);

	void setCustomStyle();
	void setNormalBackground(const QColor& color);
	void setHoverBackground(const QColor& color);
	void setForeground(const QColor& color);
	void setFontWeight(const QString& style);
	void setFontFamily(const QString& style);
	void setFontSize(const QString& style);
	void setBorderRadius(const QString& style);
private:
	void initWidget();
private:
	QString m_strQss;
	QString m_strFontFamily;
	QString m_strFontBold;
	QString m_strFontSize;
	QString m_strBackground;
	QString m_strHoverBackground;
	QString m_strForeground;
	QString m_strBorderRadius;
};