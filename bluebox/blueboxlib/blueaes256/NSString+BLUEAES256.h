//
//  NSString+BLUEAES256.h
//  AES加密
//
//  Created by biubiu on 2018/2/20.
//  Copyright © 2018年 biubiu. All rights reserved.
//

#import <Foundation/Foundation.h>


#import "NSData+BLUEAES256.h"

@interface NSString (BLUEAES256)

-(NSString *) blueaes256_encrypt:(NSString *)key;
-(NSString *) blueaes256_decrypt:(NSString *)key;

@end
