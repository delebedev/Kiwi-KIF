//
//  KWSpec+KIFAdditions.h
//  WOWPAssistant
//
//  Created by Denis Lebedev on 14.11.13.
//  Copyright (c) 2013 Wargaming. All rights reserved.
//

#import <Kiwi/Kiwi.h>
#import <KIF/KIF.h>

#define KIF_SPEC_BEGIN(x) SPEC_BEGIN(x) \
Class<KIFTestActorDelegate> actorSelf = self; \
{ \
Class<KIFTestActorDelegate> self = actorSelf; \

#define KIF_SPEC_END } SPEC_END
