//
//  AAAlertView.m
//  AAAlertViewDemo
//
//  Created by AndreaArlex on 15/3/10.
//  Copyright (c) 2015年 AndreaArlex. All rights reserved.
//

#import "AAAlertView.h"

@implementation AAAlertView

#pragma mark- AAAlertView的初始化
- (id)initWithTitle:(UIView *)titleView contentView:(UIView *)contentView{

    self = [super init];
    
    if (self) {
        
        mtitleView = titleView;
        mcontentView = contentView;
    }
    
    return self;
}

#pragma mark- 设置titleView的布局
- (void)setTitleViewHLayoutWithVFL:(NSString *)vfl metric:(NSDictionary *)metric{

    
}

- (void)setTitleViewVLayoutWithVFL:(NSString *)vfl metric:(NSDictionary *)metric{

    
}

#pragma mark- 设置contentView的布局
- (void)setContentViewHLayoutWithVFL:(NSString *)vfl metric:(NSDictionary *)metric{

    
}

- (void)setContentViewVLayoutWithVFL:(NSString *)vfl metric:(NSDictionary *)metric{

    
}

#pragma mark- 显示
- (void)show{

}

#pragma mark- 不带动画效果的显示
- (void)showWithoutAnimation{

}

/*
// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect {
    // Drawing code
}
*/


@end
