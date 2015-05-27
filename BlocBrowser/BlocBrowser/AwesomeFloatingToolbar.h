//
//  BLCAwesomeFloatingToolbar.h
//  BlocBrowser
//
//  Created by Stephen Blair on 5/20/15.
//  Copyright (c) 2015 blairgraphix. All rights reserved.
//

#import <UIKit/UIKit.h>

//This interface communicates four things to relevant classes:
//
//It should be initialized with four titles using the custom initializer, initWithFourTitles:.
//It implements a delegate protocol, so classes can optionally be informed when one of the titles is pressed.
//It allows other classes to enable and disable its buttons.
//It is a UIView subclass, which will let us add it to another view, set its frame, etc.

@class AwesomeFloatingToolbar; //protocal declaration comes before the interface

@protocol AwesomeFloatingToolbarDelegate <NSObject> // indicates the definition of BLSAwesomeFloatingTool.. and inherits from the <NSObject> protocol

@optional

- (void) floatingToolbar:(AwesomeFloatingToolbar *)toolbar didSelectButtonWithTitle:(NSString *)title; //the optional delegate method is declared. If the delegate implements it, it will be called when a user taps a button
- (void) floatingToolbar:(AwesomeFloatingToolbar *)toolbar didTryToPanWithOffset:(CGPoint)offset;
- (void) floatingToolbar:(AwesomeFloatingToolbar *)toolbar didTryToPinch:(CGFloat)scale;

@end // definition of the delegate protocal has ended

@interface AwesomeFloatingToolbar : UIView //this is the interface for the toolbar itself

- (instancetype) initWithFourTitles:(NSArray *)titles; //custom initializer that takes an array of four titles

- (void) setEnabled:(BOOL)enabled forButtonWithTitle:(NSString *)title; //method to disable and enable buttons based on title

@property (nonatomic, weak) id <AwesomeFloatingToolbarDelegate> delegate; //delegate property to use if a delegate is desired

@end
