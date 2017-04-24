//
//  ViewController.h
//  AsWheaterApp
//
//  Created by Student P_02 on 24/04/17.
//  Copyright © 2017 Felix ITs. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

@interface ViewController : UIViewController<CLLocationManagerDelegate,UITableViewDataSource,UITableViewDelegate>
{
    CLLocationManager *locationManager;
    NSArray *arrayList;
    NSDictionary *tempArray;
}

@property (strong, nonatomic) IBOutlet UITableView *tblView;

@property (strong, nonatomic) IBOutlet UIActivityIndicatorView *activityIndicator;
- (IBAction)goToNext:(id)sender;


@end

