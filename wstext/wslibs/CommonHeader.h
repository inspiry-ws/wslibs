//
//  CommonHeader.h
//  ITEST
//
//  Created by wangsen on 14-6-6.
//  Copyright (c) 2014年 wangsen. All rights reserved.
//

//定义常用宏
//NSLog
//release模式通常会定义 __OPTIMIZE__，当然debug模式不会。
#ifndef __OPTIMIZE__
# define NSLog(...) NSLog(__VA_ARGS__)
#else
# define NSLog(...) {}
#endif
