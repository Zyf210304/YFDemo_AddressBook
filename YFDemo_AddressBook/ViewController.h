//
//  ViewController.h
//  YFDemo_AddressBook
//
//  Created by 亚飞 on 2018/4/17.
//  Copyright © 2018年 yafei. All rights reserved.
//

#import <UIKit/UIKit.h>
/// iOS 9前的框架
#import <AddressBook/AddressBook.h>
#import <AddressBookUI/AddressBookUI.h>
/// iOS 9的新框架
#import <ContactsUI/ContactsUI.h>

#define Is_up_Ios_9             ([[UIDevice currentDevice].systemVersion floatValue] >= 9.0)

@interface ViewController : UIViewController<ABPeoplePickerNavigationControllerDelegate,CNContactPickerDelegate>  


@end

