//
//  ISAdapterConsentProtocol.h
//  IronSource
//
//  Created by Yonti Makmel on 16/06/2021.
//  Copyright © 2021 IronSource. All rights reserved.
//
#import <Foundation/Foundation.h>

#ifndef ISAdapterConsentProtocol_h
#define ISAdapterConsentProtocol_h

@protocol ISAdapterConsentProtocol <NSObject>

-(void)setConsent:(BOOL)consent;

@end

#endif /* ISAdapterConsentProtocol_h */