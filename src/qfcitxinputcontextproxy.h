/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -N -p qfcitxinputcontextproxy -c QFcitxInputContextProxy interfaces/org.fcitx.Fcitx.InputContext.xml -i fcitxformattedpreedit.h
 *
 * qdbusxml2cpp is Copyright (C) 2012 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef QFCITXINPUTCONTEXTPROXY_H_1334497066
#define QFCITXINPUTCONTEXTPROXY_H_1334497066

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>
#include "fcitxformattedpreedit.h"

/*
 * Proxy class for interface org.fcitx.Fcitx.InputContext
 */
class QFcitxInputContextProxy: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.fcitx.Fcitx.InputContext"; }

public:
    QFcitxInputContextProxy(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~QFcitxInputContextProxy();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> CloseIC()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("CloseIC"), argumentList);
    }

    inline QDBusPendingReply<> DestroyIC()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("DestroyIC"), argumentList);
    }

    inline QDBusPendingReply<> EnableIC()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("EnableIC"), argumentList);
    }

    inline QDBusPendingReply<> FocusIn()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("FocusIn"), argumentList);
    }

    inline QDBusPendingReply<> FocusOut()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("FocusOut"), argumentList);
    }

    inline QDBusPendingReply<int> ProcessKeyEvent(uint keyval, uint keycode, uint state, int type, uint time)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(keyval) << QVariant::fromValue(keycode) << QVariant::fromValue(state) << QVariant::fromValue(type) << QVariant::fromValue(time);
        return asyncCallWithArgumentList(QLatin1String("ProcessKeyEvent"), argumentList);
    }

    inline QDBusPendingReply<> Reset()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("Reset"), argumentList);
    }

    inline QDBusPendingReply<> SetCapacity(uint caps)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(caps);
        return asyncCallWithArgumentList(QLatin1String("SetCapacity"), argumentList);
    }

    inline QDBusPendingReply<> SetCursorLocation(int x, int y)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(x) << QVariant::fromValue(y);
        return asyncCallWithArgumentList(QLatin1String("SetCursorLocation"), argumentList);
    }

    inline QDBusPendingReply<> SetCursorRect(int x, int y, int w, int h)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(x) << QVariant::fromValue(y) << QVariant::fromValue(w) << QVariant::fromValue(h);
        return asyncCallWithArgumentList(QLatin1String("SetCursorRect"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void CloseIM();
    void CommitString(const QString &str);
    void EnableIM();
    void ForwardKey(uint keyval, uint state, int type);
    void UpdateClientSideUI(const QString &auxup, const QString &auxdown, const QString &preedit, const QString &candidateword, const QString &imname, int cursorpos);
    void UpdateFormattedPreedit(FcitxFormattedPreeditList str, int cursorpos);
    void UpdatePreedit(const QString &str, int cursorpos);
};

#endif
