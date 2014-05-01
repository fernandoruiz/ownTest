//
//  UIColor+Constants.m
//  ownCloud iOs Client
//
//  Created by OWNBRANDER
//
//

#import "UIColor+Constants.h"

@implementation UIColor(Constants)

//NAVIGATION AND TOOL BAR

//Tint color of navigation bar
+ (UIColor*)colorOfNavigationBar{
    return [UIColor colorWithRed:28/255.0f green:44/255.0f blue:67/255.0f alpha:1.0];
}
//Color of background view in navigation bar, only for iOS 7 for transparency
+ (UIColor*)colorOfBackgroundNavBarImage {
    return [UIColor colorWithRed:28/255.0f green:44/255.0f blue:67/255.0f alpha:0.7];
}

//Color of letters in navigation bar
+ (UIColor*)colorOfNavigationTitle{
    return [UIColor colorWithRed:255/255.0f green:255/255.0f blue:255/255.0f alpha:1.0];
}

//Color of items in navigation bar
+ (UIColor*)colorOfNavigationItems{
    return [UIColor colorWithRed:255/255.0f green:255/255.0f blue:255/255.0f alpha:1.0];
}

//Section index color
+ (UIColor*)colorOfSectionIndexColorFileList {
    return [UIColor colorWithRed:28/255.0f green:44/255.0f blue:67/255.0f alpha:0.7];
}

//Tint color of tool bar
+ (UIColor*)colorOfToolBar{
    return [UIColor colorWithRed:28/255.0f green:44/255.0f blue:67/255.0f alpha:1.0];
}
//Color of background view in toolBar bar, only for iOS 7 for transparency
+ (UIColor*)colorOfBackgroundToolBarImage {
    return [UIColor colorWithRed:28/255.0f green:44/255.0f blue:67/255.0f alpha:0.7];
}

//Tint color of tool bar buttons
+ (UIColor*)colorOfToolBarButtons {
    //To iOS 7
    if ([[[UIDevice currentDevice] systemVersion] floatValue] >= 7)
    {
        return [UIColor colorWithRed:255/255.0f green:255/255.0f blue:255/255.0f alpha:1.0];

    } else {
        //To iOS 6
        return [UIColor colorWithRed:255/255.0f green:255/255.0f blue:255/255.0f alpha:1.0];
    }
}

//TAB BAR

//Tint color of tab bar
+ (UIColor*)colorOfTintUITabBar {
    return [UIColor colorWithRed:28/255.0f green:44/255.0f blue:67/255.0f alpha:1.0];
}

//Tint color fo selected tab bar item
+ (UIColor*)colorOfTintSelectedUITabBar {
    return [UIColor colorWithRed:177/255.0f green:255/255.0f blue:117/255.0f alpha:1.0];
}

//Tint color for non selected tab bar item (only works with the labels)
+ (UIColor*)colorOfTintNonSelectedUITabBar {  
    return [UIColor colorWithRed:0/255.0f green:0/255.0f blue:0/255.0f alpha:1.0];
}

//SETTINGS VIEW

//Text color in some cells of settings view
+ (UIColor*)colorOfDetailTextSettings {
    return [UIColor whiteColor];
}

//Cell background color in some cells of settings view
+(UIColor*)colorOfBackgroundButtonOnList {
    return [UIColor colorWithRed:255/255.0f green:255/255.0f blue:255/255.0f alpha:1.0];
}

//Text color in some cells of settings view
+(UIColor*)colorOfTextButtonOnList {
    return [UIColor colorWithRed:0/255.0f green:0/255.0f blue:0/255.0f alpha:1.0];
}

//LOGIN VIEW

//Background color of login view
+ (UIColor*)colorOfLoginBackground{
    return [UIColor colorWithRed:125/255.0f green:206/255.0f blue:240/255.0f alpha:1.0];
}

//Background color of top of login view, in logo image view
+ (UIColor*)colorOfLoginTopBackground {
    return [UIColor colorWithRed:231/255.0f green:242/255.0f blue:248/255.0f alpha:1.0];
}

+ (UIColor*)colorOfLoginButtonBackground {   
    return [UIColor colorWithRed:239/255.0f green:239/255.0f blue:239/255.0f alpha:1.0];
}

//Log in button text color (UIColor+Constants.m)
+ (UIColor*)colorOfLoginButtonTextColor {
    return [UIColor colorWithRed:0/255.0f green:0/255.0f blue:0/255.0f alpha:1.0];
}

//Text color of url in login view
+ (UIColor*)colorOfURLUserPassword{
    return [UIColor colorWithRed:60/255.0f green:60/255.0f blue:59/255.0f alpha:1.0];
}

//Text color of login text
+ (UIColor*)colorOfLoginText {
     return [UIColor colorWithRed:255/255.0f green:255/255.0f blue:255/255.0f alpha:1.0];
}

//Text color of error credentials
+ (UIColor*)colorOfLoginErrorText{
    return [UIColor colorWithRed:255/255.0f green:255/255.0f blue:255/255.0f alpha:1.0];
}

//Text color of server error
+ (UIColor*)colorOfServerErrorText{
    return [UIColor colorWithRed:255/255.0f green:255/255.0f blue:255/255.0f alpha:1.0];
}

//FILE LIST
//Text color of selected folder
+ (UIColor*)colorOfTxtSelectFolderToolbar {
    return [UIColor whiteColor];
}

//WEB VIEW
//Color of webview background
+ (UIColor*)colorOfWebViewBackground{
   return [UIColor colorWithRed:26/255 green:26/255 blue:28/255 alpha:1.0];
}
+ (UIColor*)colorOfBackgroundDetailViewiPad{
    return [UIColor whiteColor];
}
@end
