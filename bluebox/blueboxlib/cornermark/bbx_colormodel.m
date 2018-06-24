//
//  bbx_colormodel.m
//  
//
//  Created by lining on 2018/6/24.
//

#import "bbx_colormodel.h"

@implementation bbx_colormodel
+ (instancetype) createDefaultModel
{
    bbx_colormodel *cModel = [[bbx_colormodel alloc]init];
    
    cModel.margin_top    = 5;
    cModel.margin_bottom = 5;
    cModel.margin_left   = 3;
    cModel.margin_right  = 3;
    cModel.cornerRadius  = 4;
    
    return cModel;
}
@end
