//
//  NSAlert+Workaround.m
//  Gureum
//
//  Created by Jeong YunWon on 2018. 9. 2..
//  Copyright © 2018년 youknowone.org. All rights reserved.
//

#import "NSAlert+Workaround.h"

@implementation NSAlert (Workaround)

- (void)beginSheetModalForEmptyWindowWithCompletionHandler:(void (^)(NSModalResponse))handler {
    NSWindow *window = nil;
    [self beginSheetModalForWindow:window modalDelegate:self didEndSelector:@selector(alertDidEnd:returnCode:contextInfo:) contextInfo:(__bridge_retained void *)handler];
}

- (void)alertDidEnd:(NSAlert *)alert returnCode:(NSModalResponse)returnCode contextInfo:(void *)contextInfo {
    void (^handler)(NSModalResponse) = (__bridge_transfer void (^)(NSModalResponse))(contextInfo);
    handler(returnCode);
}

@end
