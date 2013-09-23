//
//  CenterViewController.h
//  SliderDraw
//
//  Created by Sinosoft on 9/9/13.
//  Copyright (c) 2013 com.Sinosoft. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CenterViewController : UIViewController<UITableViewDelegate,UITableViewDataSource,UIScrollViewDelegate>

@property(strong,nonatomic) UITableView* chatTable;

@end
