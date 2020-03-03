//
//  AppDelegate.h
//  HWDownloadDemo
//
//  Created by yuhanglv on 2018/5/21.
//  Copyright © 2018年 hw. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (nonatomic, copy) void (^ backgroundSessionCompletionHandler)(void);  // 后台所有下载任务完成回调

@end

