//
//  View1AppDelegate.h
//  View1
//
//  Created by Perry Tribolet on 4/13/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class View1ViewController;

@interface View1AppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet View1ViewController *viewController;

@end
