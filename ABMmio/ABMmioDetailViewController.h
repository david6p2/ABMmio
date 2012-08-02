//
//  ABMmioDetailViewController.h
//  ABMmio
//
//  Created by LSR Marketing Service on 2/08/12.
//  Copyright (c) 2012 LSR Marketing Service. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ABMmioDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@property (strong, nonatomic) IBOutlet UIView *viewParentPortal;
@property (strong, nonatomic) IBOutlet UIView *studentForm;

@end
