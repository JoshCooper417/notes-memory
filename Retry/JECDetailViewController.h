//
//  JECDetailViewController.h
//  Retry
//
//  Created by Joshua Cooper on 3/25/13.
//  Copyright (c) 2013 Joshua Cooper. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JECDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
