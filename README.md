UIViewController-HUD
====================

A nicer way to show HUD's on your ViewControllers (using Cocoapods).

## Installation

Add this line to your `Podfile`:

```
pod 'UIViewController+HUD', '~> 1.0.0'
```

then run `pod install`.

## Usage

### To Show a HUD
From within any `UIViewController` subclass, simply call these methods:

`[self showHud];` or `[self showHudAnimated:NO];`

### To Hide a HUD

`[self hideHud]` or `[self hideHudAnimated:NO];`

## Advanced

This category includes several overloaded options, allowing you to specify a title in your HUD, etc.

### Show Options
* `- (void) showHud;`
* `- (void) showHudAnimated:(BOOL)animated;`
* `- (void) showHudWithTitle:(NSString*)title;`
* `- (void) showHudWithTitle:(NSString*)title animated:(BOOL)animated;`
* `- (void) showHudWithTitle:(NSString*)title andSubtitle:(NSString*)subtitle;`
* `- (void) showHudWithTitle:(NSString*)title andSubtitle:(NSString*)subtitle animated:(BOOL)animated;`

### Hide Options

* `- (void) hideHud;`
* `- (void) hideHudAnimated:(BOOL)animated;`

## License
MIT license.

## Dependencies

This Objective-C category makes use of [MBProgressHUD](https://github.com/jdg/MBProgressHUD).