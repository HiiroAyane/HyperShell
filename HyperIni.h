#pragma once
#include <QFile>
#include <QRegularExpression>

inline QString readWidgetTextIni() {
	QFile file("Text.ini");
	QString strWidgetText;

	if (!file.exists() || !file.open(QIODevice::ReadOnly)) {
		strWidgetText = "createSshButton=建立\n连接;\n";

		return strWidgetText;
	}

	// Text.ini Must Be UTF-8 
	QByteArray byteArray = file.readAll();
	strWidgetText = QString::fromUtf8(byteArray);
	file.close();
	return strWidgetText;
}

inline QString getWidgetText(const QString& keyWord, const QString& text) {
	QString strRegExp = "(?<=(" + keyWord + "=)).*(?=;)";
	QRegularExpression regExp(strRegExp);
	QRegularExpressionMatch match = regExp.match(text);
	if (match.hasMatch()) {
		QString strCaptured = match.captured(0);
		return strCaptured;
	}
	else return QString();
}