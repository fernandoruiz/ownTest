//
//  UIColor+Constants.h
//  ownCloud iOs Client
//
//  Created by OWNBRANDER
//
//

#import <Foundation/Foundation.h>

@interface UIColor(Constants)

//NAVIGATION AND TOOL BAR

//Tint color of navigation bar
+ (UIColor*)colorOfNavigationBar;
//Color of background view in navigation bar, only for iOS 7 for transparency
+ (UIColor*)colorOfBackgroundNavBarImage;
//Color of letters in navigation bar
+ (UIColor*)colorOfNavigationTitle;
//Color of items in navigation bar
+ (UIColor*)colorOfNavigationItems;
//Color of letter separator
+ (UIColor*)colorOfSectionIndexColorFileList;
//Tint color of tool bar
+ (UIColor*)colorOfToolBar;
//Color of background view in toolBar bar, only for iOS 7 for transparency
+ (UIColor*)colorOfBackgroundToolBarImage;
//Tint color of tool bar buttons
+ (UIColor*)colorOfToolBarButtons;

//STATUS BAR
//Color of background in custom status bar, only for iOS 7
+ (UIColor*)colorOfBackgroundStatusBarNotification;

//TAB BAR

//Tint color of tab bar
+ (UIColor*)colorOfTintUITabBar;
//Tint color fo selected tab bar item
+ (UIColor*)colorOfTintSelectedUITabBar;
//Tint color fo non selected tab bar item
+ (UIColor*)colorOfTintNonSelectedUITabBar;

//SETTINGS VIEW

//Text color in some cells of settings view
+ (UIColor*)colorOfDetailTextSettings;
//Cell background color in some cells of settings view
+(UIColor*)colorOfBackgroundButtonOnList;
//Text color in some cells of settings view
+(UIColor*)colorOfTextButtonOnList;

//LOGIN VIEW

//Background color of login view
+ (UIColor*)colorOfLoginBackground;
//Background color of top of login view, in logo image view
+ (UIColor*)colorOfLoginTopBackground;
//Background color of login button
+ (UIColor*)colorOfLoginButtonBackground;
//Text color of login button
+ (UIColor*)colorOfLoginButtonTextColor;
//Text color of url in login view
+ (UIColor*)colorOfURLUserPassword;
//Text color of login text
+ (UIColor*)colorOfLoginText;
//Text color of error credentials
+ (UIColor*)colorOfLoginErrorText;
//Text color of server error
+ (UIColor*)colorOfServerErrorText;


//FILE LIST

//Text color of selected folder
+ (UIColor*)colorOfTxtSelectFolderToolbar;

//WEB VIEW

//Color of webview background
+ (UIColor*)colorOfWebViewBackground;

//DETAIL VIEW (iPAD)

+ (UIColor*)colorOfBackgroundDetailViewiPad;


@end


