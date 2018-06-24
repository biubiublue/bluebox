//
//  UIImageView+bbxcornermark.h
//  
//
//  Created by lining on 2018/6/24.
//

#import <UIKit/UIKit.h>
#import "bbx_colormodel.h"
@class bbx_colormodel;

@interface UIImageView (bbxcornermark)

//↖ leftup
//↗ rightup
//↙ leftdown
//↘ rightdown

/**
 隐藏所有角标
 */
-(void)hideAllMarks;

/**
 左上角角标
 
 @param cModel 文字颜色Model
 */
-(void)showleftupmarkWithModel:(bbx_colormode*)cModel;

/**
 左下角角标
 
 @param cModel 文字颜色Model
 */
-(void)showleftdownmarkWithModel:(bbx_colormode*)cModel;

/**
 右上角角标
 
 @param cModel 文字颜色Model
 */
-(void)showrightupmarkWithModel:(bbx_colormode*)cModel;


/**
 右下角角标
 
 @param cModel 文字颜色Model
 */
-(void)showrightdownmarkWithModel:(bbx_colormode*)cModel;

@end
