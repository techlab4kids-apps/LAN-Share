/*
    LANShare - LAN file transfer.
    Copyright (C) 2016 Abdul Aris R. <abdularisrahmanudin10@gmail.com>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef DEVICELISTMODEL_H
#define DEVICELISTMODEL_H

#include <QAbstractListModel>

#include "transfer/devicebroadcaster.h"
#include "device.h"

class DeviceListModel : public QAbstractListModel
{
public:
    DeviceListModel(DeviceBroadcaster* deviceBC, QObject* parent = nullptr);

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;
    int rowCount(const QModelIndex &parent = QModelIndex()) const override;

    void refresh();

    Device device(int index) const;
    Device device(const QString& id) const;
    Device device(const QHostAddress& address) const;

    QVector<Device> getDevices();
    void setDevices(const QVector<Device> &getDevices);

private Q_SLOTS:
    void onBCReceived(const Device &fromDevice);

private:
    DeviceBroadcaster* mDBC;
    QVector<Device> mDevices;
};

#endif // DEVICELISTMODEL_H
