//
//  OWSpaceDataViewController.h
//  SpaceInfoUI
//
//  Created by Vinay Hegde on 7/23/15.
//  Copyright (c) 2015 Vinay Hegde. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OWSpaceObject.h"

@interface OWSpaceDataViewController : UIViewController <UITableViewDelegate ,UITableViewDataSource>

@property (strong, nonatomic) IBOutlet UITableView *tableView;

@property (strong, nonatomic) OWSpaceObject *spaceObject;

@end
