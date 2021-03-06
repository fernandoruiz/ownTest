/*
 * Copyright (C) by Daniel Molkentin <danimo@owncloud.com>, ownCloud Inc.
 */

#ifndef MD_THEME_H
#define MD_THEME_H

#include "mirall/theme.h"

#include <QString>
#include <QDebug>
#include <QPixmap>
#include <QIcon>
#include <QApplication>

#include "mirall/version.h"
#include "config.h"

namespace Mirall {

class MdTheme : public Theme
{
public:
    MdTheme() {};

    QString configFileName() const { return QLatin1String("holacaracalaquertytito.cfg"); }
    QIcon   trayFolderIcon( const QString& ) const { return themeIcon( QLatin1String("holacaracalaquertytito-icon") ); }
    QIcon   folderDisabledIcon() const { return themeIcon( QLatin1String("state-pause") ); }
    QIcon   applicationIcon() const { return themeIcon( QLatin1String("holacaracalaquertytito-icon") ); }
    QString defaultServerFolder() const { return  QLatin1String("/"); }
	//QString overrideServerUrl() const { return QLatin1String(""); }


    QColor wizardHeaderBackgroundColor() const { return QColor("#73FFAB"); }
    QColor wizardHeaderTitleColor() const { return QColor("#ffffff"); }
    QPixmap wizardHeaderLogo() const { return applicationIcon().pixmap(64); }
    bool singleSyncFolder() { return true; }

    QString about() const { return tr("<p>Version %1 For more information please visit <a href='%2'>%3</a>.</p>") .arg(MIRALL_VERSION_STRING).arg("http://"MIRALL_STRINGIFY(APPLICATION_DOMAIN)) .arg(MIRALL_STRINGIFY(APPLICATION_DOMAIN)).arg(APPLICATION_VENDOR).arg(APPLICATION_NAME); }};

} // namespace mirall

#endif // md_THEME_H
