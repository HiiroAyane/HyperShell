#pragma once
#include <QFile>
#include <QRegularExpression>

#pragma region WidgetText
inline QString readWidgetTextIni() {
	QFile file("Text.ini");
	QString strWidgetText;

	if (!file.open(QIODevice::ReadOnly)) {
		strWidgetText = QString::fromUtf8("createSshButton=建立\n连接;\n");
		strWidgetText += QString::fromUtf8("manageSshButton=管理\n连接;\n");
		return strWidgetText;
	}

	// Text.ini Must Be UTF-8 
	QByteArray byteArray = file.readAll();
	strWidgetText = QString::fromUtf8(byteArray);
	file.close();
	return strWidgetText;
}

inline QString getWidgetText(const QString& keyWord, const QString& text) {
	// Bug
	//QString strRegExp = "(?<=(" + keyWord + "=)).*(?=;)";
	//QRegularExpression regExp(strRegExp);
	//QRegularExpressionMatch match = regExp.match(text);
	//if (match.hasMatch()) {
	//	QString strCaptured = match.captured(0);
	//	return strCaptured;
	//}
	//else return QString();
	int posStart = text.indexOf(keyWord);
	if (posStart < 0) return QString();
	posStart += keyWord.size() + 1;
	int posEnd = text.indexOf(";", posStart);
	if (posEnd < posStart) return QString();
	return text.mid(posStart, posEnd - posStart);
}

#pragma endregion WidgetText