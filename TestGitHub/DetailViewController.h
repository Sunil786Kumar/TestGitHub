//
//  DetailViewController.h
//  TestGitHub
//
//  Created by Parbati Tamang on 4/01/13.
//  Copyright (c) 2013 Sunil Kumar. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
