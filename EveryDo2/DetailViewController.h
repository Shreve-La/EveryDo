//
//  DetailViewController.h
//  EveryDo2
//
//  Created by swcl on 2017-05-16.
//  Copyright © 2017 Shreve LaFramenta. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

