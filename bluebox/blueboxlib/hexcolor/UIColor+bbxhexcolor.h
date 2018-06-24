//
//  UIColor+bbxhexcolor.h
//  
//
//  Created by lining on 2018/6/24.
//

#import <UIKit/UIKit.h>

#define bbx_ColorByStr(hexStr)  ([UIColor bbx_byString:hexStr])
#define bbx_ColorByInt(hexInt)  ([UIColor bbx_byInt:hexNum])

@interface UIColor (bbxhexcolor)
/**
 根据字符串获取UIColor
 @param hexString 以0X或者#开头的字符串 6位或者8位 @"#0c33b5e5"或者@"#33b5e5"
 @return UIColor
 */
+ (UIColor *)bbx_byString:(NSString *)hexString;


/**
 根据十六进制数字获取UIColor
 @param hexNum 十六进制数字 6位或者8位
 @return UIColor
 */
+ (UIColor *)bbx_byInt:(NSUInteger)hexNum;
@end
