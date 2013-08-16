//
//  WorkBookViewController.h
//  WorkBook
//
//  Created by hcui on 13-8-16.
//  Copyright (c) 2013年 kada. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WorkBookViewController : UIViewController<UINavigationBarDelegate>
{
    UIButton *back;
    UILabel *money;
    UILabel *testNumber;
    UILabel *type;
    UIImageView *questions;
    UILabel *answer;
}
@property (retain,nonatomic) IBOutlet UIButton *reduce;//排除
@property (retain,nonatomic) IBOutlet UIButton *prompt;//提示
@property (retain,nonatomic) IBOutlet UIButton *share;

@property (retain,nonatomic) IBOutlet UIButton *back;
@property (retain,nonatomic) IBOutlet UILabel *money;
@property (retain,nonatomic) IBOutlet UILabel *testNumber;
@property (retain,nonatomic) IBOutlet UILabel *type;
@property (retain,nonatomic) IBOutlet UIImageView *questions;
@property (retain,nonatomic) IBOutlet UILabel *answer;

-(IBAction)backAction:(id)sender;
-(IBAction)reduceAction:(id)sender;
-(IBAction)promptAction:(id)sender;
-(IBAction)shareAction:(id)sender;
-(IBAction)numberAction:(id)sender;

@end
