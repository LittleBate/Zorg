#include "zorgmodel.h"
#include <QDebug>

ZorgModel::ZorgModel(QObject *parent) :
    QAbstractListModel(parent)
{
}

void ZorgModel::addZorg(MyZorg *zorg){
    beginInsertRows(QModelIndex(), rowCount(), rowCount());

    m_zorgs << zorg;

    endInsertRows();
}

int ZorgModel::rowCount(const QModelIndex &parent) const{
    return m_zorgs.count();
}

QVariant ZorgModel::data(const QModelIndex &index, int role) const{
    if(index.row() < 0 || index.row() >= m_zorgs.count())
        return QVariant();

    MyZorg *zorg = m_zorgs[index.row()];
    if(role == NomRole)
    {
        return zorg->nom();
    }
    else if(role == SexeRole)
    {
        return zorg->sexe();
    }
    else if(role == TitreRole)
    {
        return zorg->titre();
    }
    else if(role == PvRole)
    {
        return zorg->pv();
    }
    return QVariant();

}

bool ZorgModel::setData(const QModelIndex &index, const QVariant &value, int role){
    if(index.row() < 0 || index.row() > m_zorgs.count() || role == TitreRole)
        return false;
    if(data(index, role) == value)
        return true;

    MyZorg *zorg = m_zorgs[index.row()];
    if(role == NomRole) {
        zorg->setNom(value.toString());
    }
    else if(role == SexeRole){
        zorg->setSexe(value.toBool());
    }
    else if(role == PvRole){
        zorg->setPv(value.toInt());
    }

    QVector<int> roles;
    roles.append(role);

    QModelIndex topLeft = index.sibling(0,0);
    QModelIndex bottomRight = index.sibling(m_zorgs.count()-1, 0);;

    emit dataChanged(topLeft, bottomRight, roles);

    return true;
}

bool ZorgModel::removeRows(int row, int count, const QModelIndex &parent){
    if(row < 0 || row + count >= m_zorgs.count())
        return false;

    beginRemoveRows(parent, row, row + count - 1);

    for(int nb = 0; nb < count; nb++)
    {
        m_zorgs.removeAt(row);
    }

    endRemoveRows();

    return true;
}

bool ZorgModel::insertRows(int row, int count, const QModelIndex &parent){
    beginInsertRows(parent, row, row + count - 1);

    for(int nb = 0; nb < count; nb++)
    {
        m_zorgs.insert(row, new MyZorg("totoZozo", false, 35));
    }

    endInsertRows();
    return true;
}

QHash<int, QByteArray> ZorgModel::roleNames() const{
    QHash<int, QByteArray> roles;
    roles[NomRole] = "nom";
    roles[PvRole] = "pv";
    roles[TitreRole] = "titre";
    roles[SexeRole] = "sexe";
    return roles;
}

MyZorg* ZorgModel::getZorgAtIndex(int row) const{
    Q_ASSERT(row > 0 && row < m_zorgs.count());
    return m_zorgs.at(row);
}
