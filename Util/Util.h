//
//  Util.h
//  Util
//
//  Created by evan on 12-10-4.
//  Copyright (c) 2012年 evan. All rights reserved.
//

#import <Foundation/Foundation.h>
#include <sys/stat.h>
#include <dirent.h>

@interface Util : NSObject
	// 方法1：使用NSFileManager来实现获取文件大小

+ (long long) fileSizeAtPath1:(NSString*) filePath;

	// 方法1：使用unix c函数来实现获取文件大小

+ (long long) fileSizeAtPath2:(NSString*) filePath;

	// 方法1：循环调用fileSizeAtPath1

+ (long long) folderSizeAtPath1:(NSString*) folderPath;

	// 方法2：循环调用fileSizeAtPath2

+ (long long) folderSizeAtPath2:(NSString*) folderPath;

	// 方法2：在folderSizeAtPath2基础之上，去除文件路径相关的字符串拼接工作

+ (long long) folderSizeAtPath3:(NSString*) folderPath;
@end
