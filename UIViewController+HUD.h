//
//  UIViewController+HUD.h
//
//  Created by Jamie Chapman on 12/02/2014.
//  Copyright (c) 2014 57Digital Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MBProgressHUD;

@interface UIViewController (HUD)

@property (nonatomic, strong) MBProgressHUD *hud;

#pragma mark - Show Options

- (void) showHud; // Shows "Loading" by default + animated
- (void) showHudAnimated:(BOOL)animated; // Shows "Loading" by default, optional animation
- (void) showHudWithTitle:(NSString*)title; // Animated by default
- (void) showHudWithTitle:(NSString*)title animated:(BOOL)animated;
- (void) showHudWithTitle:(NSString*)title andSubtitle:(NSString*)subtitle; // Animated by default
- (void) showHudWithTitle:(NSString*)title andSubtitle:(NSString*)subtitle animated:(BOOL)animated;

#pragma mark - Hide Options

- (void) hideHud; // Animated by default
- (void) hideHudAnimated:(BOOL)animated;

@end
