#ifndef ZORGMODEL_H
#define ZORGMODEL_H

#include <QAbstractListModel>
#include "myZorg.h"


class ZorgModel : public QAbstractListModel
{
    Q_OBJECT

public:
    enum ZorgRoles{
        NomRole = Qt::UserRole + 1,
        SexeRole,
        TitreRole,
        PvRole
    };

    explicit ZorgModel(QObject *parent = 0);
    void addZorg(MyZorg *zorg);
    int rowCount(const QModelIndex &parent = QModelIndex()) const;
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;
    bool setData(const QModelIndex &index, const QVariant &value, int role = Qt::DisplayRole);

    Q_INVOKABLE bool removeRows(int row, int count = 1, const QModelIndex &parent = QModelIndex());
    Q_INVOKABLE bool insertRows(int row, int count = 1, const QModelIndex &parent = QModelIndex());
    Q_INVOKABLE MyZorg* getZorgAtIndex(int row) const;

protected:
    QHash<int, QByteArray> roleNames() const;

private:
    QList<MyZorg*> m_zorgs;

};

#endif // ZORGMODEL_H
