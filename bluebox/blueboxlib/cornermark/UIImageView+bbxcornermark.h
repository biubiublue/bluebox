//
//  UIImageView+bbxcornermark.h
//  
//
//  Created by lining on 2018/6/24.
//

#import <UIKit/UIKit.h>
#import "bbxcolormodel.h"


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
-(void)showleftupmarkWithModel:(bbxcolormodel*)cModel;

/**
 左下角角标
 
 @param cModel 文字颜色Model
 */
-(void)showleftdownmarkWithModel:(bbxcolormodel*)cModel;

/**
 右上角角标
 
 @param cModel 文字颜色Model
 */
-(void)showrightupmarkWithModel:(bbxcolormodel*)cModel;


/**
 右下角角标
 
 @param cModel 文字颜色Model
 */
-(void)showrightdownmarkWithModel:(bbxcolormodel*)cModel;

@end
