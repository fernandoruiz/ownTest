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


namespace Mirall {

class MdTheme : public Theme
{
public:
    MdTheme() {};

    QString configFileName() const { return QLatin1String("shortNameNewTito.cfg"); }
    QIcon   trayFolderIcon( const QString& ) const { return themeIcon( QLatin1String("shortNameNewTito-icon") ); }
    QIcon   folderDisabledIcon() const { return themeIcon( QLatin1String("state-pause") ); }
    QIcon   applicationIcon() const { return themeIcon( QLatin1String("shortNameNewTito-icon") ); }
    QString defaultServerFolder() const { return  QLatin1String("/"); }
	//QString overrideServerUrl() const { return QLatin1String(""); }


    QColor wizardHeaderBackgroundColor() const { return QColor("#D9E8F2"); }
    QColor wizardHeaderTitleColor() const { return QColor("#FF29B8"); }
    QPixmap wizardHeaderLogo() const { return applicationIcon().pixmap(64); }
    bool singleSyncFolder() { return true; }
};

} // namespace mirall

#endif // md_THEME_H
