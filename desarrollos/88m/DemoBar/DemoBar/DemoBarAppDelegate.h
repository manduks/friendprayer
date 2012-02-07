//
//  DemoBarAppDelegate.h
//  DemoBar
//
//  Created by Jose Armando Gonzalez on 13/09/11.
//  Copyright 2011 ExtMX. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DemoBarAppDelegate : NSObject <UIApplicationDelegate, UITabBarControllerDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet UITabBarController *tabBarController;

@end
