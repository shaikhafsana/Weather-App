//
//  DetailedViewController.h
//  AsWheaterApp
//
//  Created by Student P_02 on 24/04/17.
//  Copyright © 2017 Felix ITs. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
@interface DetailedViewController : UIViewController<CLLocationManagerDelegate>
{
    CLLocationManager *locationManager;
    NSDictionary *dataDictionary;
}

@property BOOL isCurrent;
@property(strong,nonatomic)NSString *strDay;
@property(strong,nonatomic)NSString *strMin;
@property(strong,nonatomic)NSString *strMax;
@property (strong, nonatomic) IBOutlet UIActivityIndicatorView *activityIndicatorCurrentWeather;

@property (strong, nonatomic) IBOutlet UILabel *lblDay;
@property (strong, nonatomic) IBOutlet UILabel *lblMin;
@property (strong, nonatomic) IBOutlet UILabel *lblMax;
@end
