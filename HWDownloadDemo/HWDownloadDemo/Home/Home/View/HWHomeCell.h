//
//  HWHomeCell.h
//  HWProject
//
//  Created by yuhanglv on 2018/4/23.
//  Copyright © 2018年 yuhanglv. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HWHomeCell : UITableViewCell

@property (nonatomic, strong) HWDownloadModel *model;

+ (instancetype)cellWithTableView:(UITableView *)tabelView;

// 更新视图
- (void)updateViewWithModel:(HWDownloadModel *)model;

@end
