//
//  bluedefine.h
//  
//
//  Created by lining on 2018/6/24.
// 常用的宏定义

#ifndef bluedefine_h
#define bluedefine_h

//字符串判空等
#define bbx_StringValid(f)      (f&&[f isKindOfClass:[NSString class]]&&![f isEqualToString:@""])
#define bbx_StringSafe(f)       (bbx_StringValid(f)?f:@"")
#define bbx_StringCheckNull(f)  ([(f) isEqual:[NSNull null]]||(f == nil))?@"":[NSString stringWithFormat:@"%@", (f)]

//字典判断
#define bbx_DictValid(f)      (f&&[f isKindOfClass:[NSDictionary class]])
#define bbx_DictEffective(f)  (bbx_DictValid(f)&&[f count]!=0)

//数组判断
#define bbx_ArrayValid(f)         (f&&[f isKindOfClass:[NSArray class]]&&[(NSArray* )f count]>0)
#define bbx_ArrayValidCanEmpty(f) (f&&[f isKindOfClass:[NSArray class]]&&[(NSArray* )f count]>=0)

//NSNumber判断
#define bbx_NumValid(f)  (f&&[f isKindOfClass:[NSNumber class]])

//是否是iphoneX
#define bbx_IS_IPHONE_X    ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? \
CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) : NO)

#define bbx_IPHONE_NAVIGATIONBAR_HEIGHT  (bbx_IS_IPHONE_X ? 88 : 64)
#define bbx_IPHONE_STATUSBAR_HEIGHT      (bbx_IS_IPHONE_X ? 44 : 20)
#define bbx_IPHONE_SAFEBOTTOMAREA_HEIGHT (bbx_IS_IPHONE_X ? 34 : 0)
#define bbx_IPHONE_TOPSENSOR_HEIGHT      (bbx_IS_IPHONE_X ? 32 : 0)
//状态栏高度
#define bbx_StatusBar_Height    ([UIApplication sharedApplication].statusBarFrame.size.height + 44)
//底部Tabbar高度
#define bbx_Tabbar_Height       (bbx_IS_IPHONE_X ? (49 + 34) : 49)
//iPhone X底部高度
#define bbx_Tabbar_Bottom_Margin  (bbx_IS_IPHONE_X ? 34 : 0)

//动态获取设备宽度
#define bbx_IPHONE_WIDTH [UIScreen mainScreen].bounds.size.width
#define bbx_IPHONE_HEIGHT [UIScreen mainScreen].bounds.size.height



//字体
#define  bbx_PingFangSCRegular(kk)    ([UIFont fontWithName:@"PingFangSC-Regular" size:kk]?:[UIFont systemFontOfSize:kk])
#define  bbx_PingFangSCBold(kk)    ([UIFont fontWithName:@"PingFangSC-Bold" size:kk]?:[UIFont boldSystemFontOfSize:kk])
#define  bbx_PingFangSemibold(kk)    ([UIFont fontWithName:@"PingFangSC-Semibold" size:kk]?:[UIFont boldSystemFontOfSize:kk])
#define  bbx_PingFangMedium(kk)    ([UIFont fontWithName:@"PingFangSC-Medium" size:kk]?:[UIFont boldSystemFontOfSize:kk])

//苹果震动反馈，震动一下
#define  bbx_ImpactFeedback_Light     if (@available(iOS 10.0,*))\
{\
    UIImpactFeedbackGenerator *generator = [[UIImpactFeedbackGenerator alloc] initWithStyle: UIImpactFeedbackStyleLight];\
    [generator prepare];\
    [generator impactOccurred];\
}\

#define  bbx_ImpactFeedback_Medium     if (@available(iOS 10.0,*))\
{\
UIImpactFeedbackGenerator *generator = [[UIImpactFeedbackGenerator alloc] initWithStyle: UIImpactFeedbackStyleMedium];\
[generator prepare];\
[generator impactOccurred];\
}\

#define  bbx_ImpactFeedback_Heavy     if (@available(iOS 10.0,*))\
{\
UIImpactFeedbackGenerator *generator = [[UIImpactFeedbackGenerator alloc] initWithStyle: UIImpactFeedbackStyleHeavy];\
[generator prepare];\
[generator impactOccurred];\
}\

#endif /* bluedefine_h */
