//
//  ISPangleAdapter.h
//  ISPangleAdapter
//
//  Created by Guy Lis on 20/05/2019.
//  Copyright © 2019 IronSource. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IronSource/ISBaseAdapter+Internal.h"

static NSString * const PangleAdapterVersion = @"4.3.8";
static NSString * GitHash = @"917b282c8";

//System Frameworks For Pangle Adapter

@import Accelerate;
@import AdSupport;
@import AudioToolbox;
@import AVFoundation;
@import CoreGraphics;
@import CoreImage;
@import CoreLocation;
@import CoreMedia;
@import CoreMotion;
@import CoreTelephony;
@import CoreText;
@import ImageIO;
@import JavaScriptCore;
@import MapKit;
@import MediaPlayer;
@import MobileCoreServices;
@import QuartzCore;
@import Security;
@import StoreKit;
@import SystemConfiguration;
@import UIKit;
@import WebKit;


@interface ISPangleAdapter : ISBaseAdapter

@end
