//
//  ViewController.h
//  HelloKai
//
//  Created by Kai Niekammer on 08.12.11.
//  Copyright (c) 2011 MECON. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UILabel *lab;

- (IBAction)klickMePressed:(id)sender;
- (IBAction)deleteMePressed:(id)sender;
@end
