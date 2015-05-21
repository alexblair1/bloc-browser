//
//  ViewController.h
//  BlocBrowser
//
//  Created by Stephen Blair on 5/20/15.
//  Copyright (c) 2015 blairgraphix. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
/**
 Replaces the web view with a fresh one, erasing all history. Also updates the URL field and toolbar buttons appropriately
**/

-(void) resetWebView;

@end

