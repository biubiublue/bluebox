//
//  bbx_colormodel.h
//  
//
//  Created by lining on 2018/6/24.
//

#import <Foundation/Foundation.h>

@interface bbx_colormodel : NSObject
+ (instancetype) createDefaultModel;

/**
 显示的文字
 */
@property(nonatomic,copy) NSString * display_name;

/**
 文字颜色
 */
@property(nonatomic,strong) UIColor * text_color;


/**
 背景颜色
 */
@property(nonatomic,strong) UIColor * background_color;

/**
 距离顶部距离
 */
@property(nonatomic,assign) CGFloat margin_top;

/**
 距离底部距离
 */
@property(nonatomic,assign) CGFloat margin_bottom;

/**
 距离左边距离
 */
@property(nonatomic,assign) CGFloat margin_left;

/**
 距离右边距离
 */
@property(nonatomic,assign) CGFloat margin_right;

/**
 是否是自适应尺寸,默认是自适应尺寸，随着文字长度变化
 */
@property(nonatomic,assign) BOOL isNotFit;

/**
 非自适应尺寸下，mark的尺寸
 */
@property(nonatomic,assign) CGSize markSize;

/**
 圆角
 */
@property CGFloat cornerRadius;


@end
