#ifndef ZORG_H
#define ZORG_H

#include <QObject>

class MyZorg : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString nom
               READ nom
               WRITE setNom
               NOTIFY nomChanged)
    Q_PROPERTY(bool sexe
               READ sexe
               WRITE setSexe
               NOTIFY sexeChanged)
    Q_PROPERTY(QString titre
               READ titre
               NOTIFY titreChanged)
    Q_PROPERTY(int pv
               READ pv
               WRITE setPv
               NOTIFY pvChanged)

public:
    explicit MyZorg(QObject *parent = 0);
    MyZorg(const QString &nom, bool sexe, int pv);

signals:
    void nomChanged(QString nom);
    void sexeChanged();
    void titreChanged(QString titre);
    void pvChanged(int pv);

public slots:
    QString nom() const;
    void setNom(const QString &newNom);
    bool sexe() const;
    void setSexe(bool newSexe);
    QString titre() const;
    int pv() const;
    void setPv(int newPV);

private:
    QString getCivilite() const;
    QString m_nom;
    bool m_sexe;
    int m_pv;

};

#endif // ZORG_H
