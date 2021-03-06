/*
 * MyMoves - Configurable gestures for Harmattan
 * Copyright (C) 2011 Topi Santakivi <topi.santakivi@gmail.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */
#include "appitem.h"

AppItem::AppItem(const QString& name, const QString& command, const QString& icon, QObject *parent) :
    ListItem(parent),
    m_name(name),
    m_command(command),
    m_icon(icon)
{
}

QVariant AppItem::data(int role) const
{
    switch (role)
    {
        case NameRole:
            return name();
        break;

        case CommandRole:
            return command();
        break;

        case IconRole:
            return icon();
        break;

        default:
            return QVariant();
        break;
    }

}

QHash<int, QByteArray> AppItem::roleNames() const
{
    QHash<int, QByteArray> names;
    names[NameRole] = "name";
    names[CommandRole] = "command";
    names[IconRole] = "icon";
    return names;
}
