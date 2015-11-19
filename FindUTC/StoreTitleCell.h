//
//  StoreTitleCell.h
//  FindUTC
//
//  Created by Sylvain Marchienne on 08/05/2015.
//  Copyright (c) 2015 FindUTC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface StoreTitleCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *storeName;
@property (weak, nonatomic) IBOutlet UILabel *storeCategory;
@property (weak, nonatomic) IBOutlet UILabel *storeRate;

@end
