//
//  OWSpaceImageViewController.h
//  SpaceInfoUI
//
//  Created by Vinay Hegde on 7/23/15.
//  Copyright (c) 2015 Vinay Hegde. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OWSpaceObject.h"


@interface OWSpaceImageViewController : UIViewController <UIScrollViewDelegate>

@property (strong, nonatomic) IBOutlet UIScrollView *scrollView;

@property (strong, nonatomic) UIImageView *imageView;

@property (strong, nonatomic) OWSpaceObject *spaceObject;

@end
