#import <Cordova/CDVPlugin.h>

@interface IGStory : CDVPlugin {
}


@property (assign) NSString* callbackId;

// The hooks for our plugin commands
- (void)isInstalled:(CDVInvokedUrlCommand*)command;
- (void)shareToStory:(CDVInvokedUrlCommand *)command;

@end
