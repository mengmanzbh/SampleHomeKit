//
//  AppDelegate.h
//  SampleHomeKit
//
//  Created by Porwal, Animesh on 7/2/14.
//  Copyright (c) 2014 AP. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <HomeKit/HomeKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) NSMutableDictionary *HomeKitUUIDs;
@property (nonatomic, strong) HMHomeManager *homeManager;

@end

