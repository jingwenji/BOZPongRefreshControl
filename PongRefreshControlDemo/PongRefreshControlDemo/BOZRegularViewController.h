//
//  BOZRegularViewController.h
//  PongRefreshControlDemo
//
//  Created by Ben Oztalay on 12/7/13.
//  Copyright (c) 2013 Ben Oztalay. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BOZPongRefreshControl.h"

@interface BOZRegularViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (weak, nonatomic) IBOutlet UITableView* tableView;

@property (strong, nonatomic) BOZPongRefreshControl* pongRefreshControl;

@end
