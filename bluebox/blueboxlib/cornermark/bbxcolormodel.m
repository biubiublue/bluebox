//
//  bbx_colormodel.m
//  
//
//  Created by lining on 2018/6/24.
//

#import "bbxcolormodel.h"

@implementation bbxcolormodel
+ (instancetype) createDefaultModel
{
    bbxcolormodel *cModel = [[bbxcolormodel alloc]init];
    
    cModel.margin_top    = 5;
    cModel.margin_bottom = 5;
    cModel.margin_left   = 3;
    cModel.margin_right  = 3;
    cModel.cornerRadius  = 4;
    cModel.tFont  = [UIFont systemFontOfSize:8];
    return cModel;
}
@end
