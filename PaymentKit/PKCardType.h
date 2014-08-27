//
//  PKCardType.h
//  PKPayment Example
//
//  Created by Alex MacCaw on 1/22/13.
//  Copyright (c) 2013 Stripe. All rights reserved.
//

#ifndef PKCardType_h
#define PKCardType_h

typedef NS_ENUM(NSInteger, PKCardType) {
    PKCardTypeVisa,
    PKCardTypeMasterCard,
    PKCardTypeAmex,
    PKCardTypeDiscover,
    PKCardTypeJCB,
    PKCardTypeDinersClub,
    PKCardTypeUnknown
};

#endif
