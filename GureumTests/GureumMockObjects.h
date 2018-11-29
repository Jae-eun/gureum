//
//  GureumMockObjects.h
//  CharmIM
//
//  Created by Jeong YunWon on 2014. 2. 19..
//  Copyright (c) 2014년 youknowone.org. All rights reserved.
//

@import Cocoa;

@interface CIMMockClient : NSTextView<IMKTextInput>

- (NSString *)markedString;
- (NSString *)selectedString;

@end


@interface VirtualApp: NSObject

@property(nonatomic,strong) CIMInputController *controller;
@property(nonatomic,strong) CIMMockClient *client;
- (BOOL)inputText:(NSString *)text key:(NSInteger)keyCode modifiers:(NSEventModifierFlags)flags;

@end


@interface ModerateApp: VirtualApp

@end


@interface TerminalApp: VirtualApp

@end


@interface GreedyApp: VirtualApp

@end

@interface NSPrefPaneBundle: NSObject

- (instancetype)initWithPath:(id)arg1;
- (BOOL)instantiatePrefPaneObject;
//- (NSPreferencePane *)prefPaneObject;

@end
