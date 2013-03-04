/*
 * Copyright (c) 2013 Dan Wilcox <danomatika@gmail.com>
 *
 * BSD Simplified License.
 * For information on usage and redistribution, and for a DISCLAIMER OF ALL
 * WARRANTIES, see the file, "LICENSE.txt," in this distribution.
 *
 * See https://github.com/danomatika/PdParty for documentation
 *
 */
#import <UIKit/UIKit.h>

#import "PdBase.h"
#import "PdDispatcher.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate, PdMidiReceiverDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong) PdDispatcher *dispatcher;

@property (getter=isPlaying) BOOL playing; // a globally accesible flag to start or stop audio

@end