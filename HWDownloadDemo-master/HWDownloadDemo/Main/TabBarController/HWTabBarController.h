//
//  HWTabBarController.h
//  HWProject
//
//  Created by yuhanglv on 2018/4/10.
//  Copyright © 2018年 yuhanglv. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HWTabBarController : UITabBarController

//隐藏TabBar
- (void)setTabBarHiddenWithAnimaition:(BOOL)annimation;

//显示TabBar
- (void)setTabBarShowWithAnimaition:(BOOL)annimation;

@end
