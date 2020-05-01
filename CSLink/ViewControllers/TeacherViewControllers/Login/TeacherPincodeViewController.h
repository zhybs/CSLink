//
//  PincodeViewController.h
//  Onjyb
//
//  Created by etech-dev on 5/21/16.
//  Copyright © 2016 eTech. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TeacherUser.h"

@interface TeacherPincodeViewController : UIViewController
{
    
    __weak IBOutlet UITextField *txtPinCode;
    __weak IBOutlet UIButton *btnLogin;
    __weak IBOutlet UIButton *btnForgotPin;
}

@property (nonatomic , assign) BOOL isForVerification;

- (IBAction)btnLoginPress:(id)sender;
- (IBAction)btnForgotPinPrees:(id)sender;


@end
