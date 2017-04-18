//
//  ViewController.h
//  login
//
//  Created by test on 3/22/17.
//  Copyright © 2017 NeoRays. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
<UITextFieldDelegate>
@property (weak, nonatomic) IBOutlet UITextField *uname;
@property (weak, nonatomic) IBOutlet UILabel *uanmelab;
@property (weak, nonatomic) IBOutlet UILabel *passwordlab;
@property (weak, nonatomic) IBOutlet UITextField *password;

- (IBAction)submit:(id)sender;

@end

