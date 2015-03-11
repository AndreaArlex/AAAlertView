//
//  AAAlertView.h
//  AAAlertViewDemo
//
//  Created by AndreaArlex on 15/3/10.
//  Copyright (c) 2015年 AndreaArlex. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AAAlertView : UIView{

    UIView *maskView;
    UIView *mtitleView;
    UIView *mcontentView;
}

/**
 *  AAAlertView的初始化
 *
 *  @param titleView   标题视图 （请不要超越屏幕的宽度和高度）不能为nil
 *  @param contentView 内容的视图 （请不要超越屏幕的宽度和高度）不能为nil
 *
 *  @return 当前view的内容
 */
- (id)initWithTitle:(UIView*)titleView contentView:(UIView*)contentView;

/**
 *  设置titleView的横向布局
 *
 *  @param vfl    布局的VFL
 *  @param metric 传入的参数，没有传nil
 */
- (void)setTitleViewHLayoutWithVFL:(NSString*)vfl metric:(NSDictionary*)metric;

/**
 *  设置titleView的纵向布局
 *
 *  @param vfl    布局的VFL
 *  @param metric 传入的参数，没有传nil
 */
- (void)setTitleViewVLayoutWithVFL:(NSString*)vfl metric:(NSDictionary*)metric;

/**
 *  设置contentView的横向布局
 *
 *  @param vfl    布局的VFL
 *  @param metric 传入的参数，没有传nil
 */
- (void)setContentViewHLayoutWithVFL:(NSString*)vfl metric:(NSDictionary*)metric;

/**
 *  设置contentView的纵向布局
 *
 *  @param vfl    布局的VFL
 *  @param metric 传入的参数，没有传nil
 */
- (void)setContentViewVLayoutWithVFL:(NSString*)vfl metric:(NSDictionary*)metric;

/**
 *  显示
 */
- (void)show;

/**
 *  不带动画效果的显示
 */
- (void)showWithoutAnimation;



@end
