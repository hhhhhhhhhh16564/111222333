//
//  JUPurchaseCell.h
//  algorithm
//
//  Created by 周磊 on 16/9/14.
//  Copyright © 2016年 Julyonline. All rights reserved.
//

#import <UIKit/UIKit.h>


#import "JUPurchaseModel.h"


@interface JUPurchaseCell : UITableViewCell


@property(nonatomic, strong) UIView *lineView;


@property(nonatomic, strong) JUPurchaseModel *purchaseModel;

@end
