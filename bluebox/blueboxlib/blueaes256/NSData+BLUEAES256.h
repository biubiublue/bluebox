//
//  NSData+BLUEAES256.h
//  AES加密
//
//  Created by HarrySun on 2017/2/23.
//  Copyright © 2017年 Mobby. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CommonCrypto/CommonDigest.h>
#import <CommonCrypto/CommonCryptor.h>


@interface NSData (BLUEAES256)

-(NSData *) blueaes256_encrypt:(NSString *)key;
-(NSData *) blueaes256_decrypt:(NSString *)key;

@end
