//
//  AKWeiboSDKModuleTrigger.h
//  Pods
//
//  Created by 李翔宇 on 2017/3/17.
//
//

/**
 ModuleTrigger说明
 在Xcode7之后，编译环境开始要求Modular。但是如果在podA中引用了静态库(.a)或者未使用module的framework，Xcode会报错
 报错信息：Include of non-modular header inside framework module
 如果主工程(项目工程)是Swift类型，这个错误是无法通过设置(CLANG_ALLOW_NON_MODULAR_INCLUDES_IN_FRAMEWORK_MODULES)=YES来解决的
 有效的博客：http://www.jianshu.com/p/a1d2d148fdd3
 上文中的方法是可行的，但是大量的ruby代码对于工程来说并不友好
 当前的解决方法是使用自定义的Pod包裹静态库(.a)或者未使用module的framework，添加ModuleTrigger文件，使cocoaPod主动生成module文件
 */

#import <Foundation/Foundation.h>

@interface AKWeiboSDKModuleTrigger : NSObject

@end
