#include <iostream>
#include <QtWidgets>

int main(int argc, char *argv[])
{
     QApplication a(argc, argv);
//    std::cout << "Hello, " << std::endl;
//    std::string name;
//    std::cin >> name;
//    std::cout << name << std::endl;
//    std::cout << "QT version " << qVersion() << std::endl;

//    QTextStream out(stdout);
//    QString string = "love";
//    string.append(" badminton.");
//    string.prepend("I ");
//    out << string << Qt::endl;

//    out << "String has " << string.count() << Qt::endl;
//    out << "String length " << string.length() << Qt::endl;
//    out << "String size " << string.size() << Qt::endl;

//    out << string.toUpper() << Qt::endl;

//    std::string s1 = "A frog";
//    QString str = QString::fromLatin1(s1.data(), s1.size());
//    out << str << Qt::endl;

//    out << str.at(3) << Qt::endl;

//    QString s = "I have %1 cats and %2 dogs";
//    int i = 15;
//    int j = 20;
//    out << "string before" << s << Qt::endl;
//    out << "string after" << s.arg(i).arg(j) << Qt::endl;
//    out << s.mid(7, 6) << Qt::endl;

//    QString str2("The big apple");
//    QStringRef sub(&str2, 0, 7);
//    out << sub.toString() << Qt::endl;
//    foreach (QChar qc, s1) {
//        out << qc << " ";
//    }

//    out << Qt::endl;

//    for (int i = 0; i < s1.size(); ++i)
//        out << s1.at(i) << " ";

//    out << Qt::endl;

//    int digits = 0;
//    QString strins = "I have 3 cats and 2 dogs";
//    for(QChar s : strins) {
//        if (s.isDigit())
//            digits++;
//    }

//    out << digits << Qt::endl;

//    QString s4 = "lovely cat";
//    out << s4 << Qt::endl;
//    s4.replace(7, 3, "dog");
//    out << s4 << Qt::endl;

//    QString field1 = "Name: ";
//    QString field2 = "Occupation: ";
//    QString field3 = "Residence: ";

//    int width = field3.size();

//    out << field1.rightJustified(width, ' ') << "Robert" << Qt::endl;
//    out << field2.rightJustified(width, ' ') << "programmer" <<Qt::endl;
//    out << field3.rightJustified(width, ' ') << "New York" << Qt::endl;


    return a.exec();
}
