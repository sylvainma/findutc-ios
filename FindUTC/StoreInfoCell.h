//
//  StoreInfoCell.h
//  FindUTC
//
//  Created by Sylvain Marchienne on 08/05/2015.
//  Copyright (c) 2015 FindUTC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface StoreInfoCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UIImageView *logo;
@property (weak, nonatomic) IBOutlet UILabel *info;

- (void)setImageName:(NSString*)imageName;

@end
