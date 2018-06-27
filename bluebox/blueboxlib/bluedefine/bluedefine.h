//
//  bluedefine.h
//  
//
//  Created by lining on 2018/6/24.
// 常用的宏定义

#ifndef bluedefine_h
#define bluedefine_h

//字符串判空等
#define StringValid(f)      (f&&[f isKindOfClass:[NSString class]]&&![f isEqualToString:@""])
#define StringSafe(f)       (StringValid(f)?f:@"")
#define StringCheckNull(f)  ([(f) isEqual:[NSNull null]]||(f == nil))?@"":[NSString stringWithFormat:@"%@", (f)]

//字典判断
#define DictValid(f)      (f&&[f isKindOfClass:[NSDictionary class]])
#define DictEffective(f)  (DictValid(f)&&[f count]!=0)

//数组判断
#define ArrayValid(f)         (f&&[f isKindOfClass:[NSArray class]]&&[(NSArray* )f count]>0)
#define ArrayValidCanEmpty(f) (f&&[f isKindOfClass:[NSArray class]]&&[(NSArray* )f count]>=0)

//NSNumber判断
#define NumValid(f)  (f&&[f isKindOfClass:[NSNumber class]])

#endif /* bluedefine_h */
