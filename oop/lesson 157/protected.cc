#include <iostream>

class Parent {
public:
    int m_public;
private:
    int m_private;
protected:
    int m_protected;
};
 
class Pub: public Parent // открытое наследование
{
    // Открытое наследование означает, что:
    // - public-члены остаются public в дочернем классе;
    // - protected-члены остаются protected в дочернем классе;
    // - private-члены остаются недоступными в дочернем классе.
public:
    Pub()
    {
        m_public = 1; // разрешено: доступ к m_public открыт
        // m_private = 2; // запрещено: доступ к m_private в дочернем классе из родительского класса закрыт
        m_protected = 3; // разрешено: доступ к m_protected в дочернем классе из родительского класса открыт
    }
};
 
int main() {
    Parent parent;
    parent.m_public = 1; // разрешено: m_public доступен извне через родительский класс
    // parent.m_private = 2; // запрещено: m_private недоступен извне через родительский класс
    // parent.m_protected = 3; // запрещено: m_protected недоступен извне через родительский класс
 
    Pub pub;
    pub.m_public = 1; // разрешено: m_public доступен извне через дочерний класс
    // pub.m_private = 2; // запрещено: m_private недоступен извне через дочерний класс
    // pub.m_protected = 3; // запрещено: m_protected недоступен извне через дочерний класс

    return 0;
}
