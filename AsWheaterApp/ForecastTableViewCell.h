//
//  ForecastTableViewCell.h
//  AsWheaterApp
//
//  Created by Student P_02 on 24/04/17.
//  Copyright © 2017 Felix ITs. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ForecastTableViewCell : UITableViewCell
@property (strong, nonatomic) IBOutlet UILabel *lblDay;
@property (strong, nonatomic) IBOutlet UILabel *lblMin;
@property (strong, nonatomic) IBOutlet UILabel *lblMax;
@end
