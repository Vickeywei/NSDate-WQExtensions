//
//  NSDate+WQExtensions.h
//  NSDate
//
//  Created by 魏琦 on 16/8/11.
//  Copyright © 2016年 com.drcacom.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (WQExtensions)
/**
 *  @author vicky 2016年8月
 *  格式化时间 规则：
 *  小于1分钟显示刚刚
 *  大于一分钟小与60分钟显示多少分钟前
 *  大于60分钟小于24小时显示多少小时前
 *  大于24小时小于7天显示多少天前
 *  大于7天小于30天显示几周前
 *  大于30天显示正常日期
 *  @return 时间
 */
- (NSString *)formatterModel1;
/**
 *  @author vicky 2016年8月
 *  格式化时间 规则：
 *  小于1分钟显示刚刚
 *  大于一分钟小与60分钟显示多少分钟前
 *  大于60分钟小于24小时显示多少小时前
 *  大于24小时小于7天显示多少天前
 *  大于7天小于30天显示几周前
 *  大于30天小于24个月显示几个月前
 *  大于24个月显示多少年前
 *  @return 时间
 */
- (NSString *)formatterModel2;
/**
 *  @author vicky 2016年8月
 *  格式化规则:显示正常的xxxx年xx月xx日 xx时xx分
 *  @return 时间
 */
-(NSString *)formatterModel3;
/**
 *  @author vicky 2016年8月
 *  格式化规则:显示正常的xxxx年xx月
 *  @return 时间
 */
-(NSString *)formatterModel4;
/**
 *  @author vicky 2016年8月
 *  格式化规则 三天之内显示,今天,昨天和明天,其余显示正常日期,如果是其他年份,显示年份
 *  @return 时间
 */
-(NSString *)formatterModel5;
/**
 *  @author vicky 2016年8月
 *  格式化规则:显示年月日
 *  @return 时间
 */
-(NSString *)formatterModel6;
/**
 *  @author vicky 2016年8月
 *  格式化规则:与1类似
 *
 *  @param time 时间戳
 *
 *  @return 时间
 */
+ (NSString *)formatterModel7:(long long int)time;
@end
