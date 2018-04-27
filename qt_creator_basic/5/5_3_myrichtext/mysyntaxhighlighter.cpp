#include "mysyntaxhighlighter.h"

MySyntaxHighlighter::MySyntaxHighlighter(QTextDocument *parent):
    QSyntaxHighlighter(parent)
{

}

void MySyntaxHighlighter::highlightBlock(const QString &text)
{
    QTextCharFormat myFormat;
    myFormat.setFontWeight(QFont::Bold);
    myFormat.setForeground(Qt::green);
    QString pattern = "\\bchar\\b";
    QRegExp expression(pattern);
    int index = text.indexOf(expression);
    while(index >= 0)
    {
        int length = expression.matchedLength();
        setFormat(index,length,myFormat);
        index = text.indexOf(expression, index + length);
    }
}
