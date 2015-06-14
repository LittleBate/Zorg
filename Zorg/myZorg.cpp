#include "myZorg.h"

MyZorg::MyZorg(QObject *parent) :
    QObject(parent)
{
}


MyZorg::MyZorg(const QString &nom, bool sexe, int pv)
    :m_nom(nom), m_sexe(sexe), m_pv(pv)
{
}


QString MyZorg::nom() const
{
    return m_nom;
}

void MyZorg::setNom(const QString &newNom)
{
    m_nom = newNom;
    emit nomChanged(m_nom);
    emit titreChanged(getCivilite() + " " + m_nom);
}

bool MyZorg::sexe() const
{
    return m_sexe;
}

void MyZorg::setSexe(bool newSexe)
{
    m_sexe = newSexe;
    emit sexeChanged();
    emit titreChanged(getCivilite() + " " + m_nom);
}

QString MyZorg::getCivilite() const
{
    if(m_sexe)
        return "Mr";
    else
        return "Mme";
}

int MyZorg::pv() const
{
    return m_pv;
}

void MyZorg::setPv(int newPv)
{
    m_pv = newPv;
    emit pvChanged(m_pv);
}

QString MyZorg::titre() const
{
    return getCivilite() + " " + m_nom;
}
