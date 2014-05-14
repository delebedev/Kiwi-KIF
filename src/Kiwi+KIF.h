//
//  KWSpec+KIFAdditions.h
//  Kiwi-KIF
//
//  Copyright (c) 2013-2014 Denis Lebedev. All rights reserved.
//
//  The MIT License (MIT)
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy of
//  this software and associated documentation files (the "Software"), to deal in
//  the Software without restriction, including without limitation the rights to
//  use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
//  the Software, and to permit persons to whom the Software is furnished to do so,
//  subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
//  FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
//  COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
//  IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
//  CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

#import <Kiwi/Kiwi.h>
#import <KIF/KIF.h>

#define KIF_SPEC_BEGIN(x) SPEC_BEGIN(x) \
Class<KIFTestActorDelegate> actorSelf = self; \
{ \
Class<KIFTestActorDelegate> self = actorSelf; \

#define KIF_SPEC_END } SPEC_END

#undef KW_ADD_EXIST_VERIFIER
#define KW_ADD_EXIST_VERIFIER(expectationType) [KWSpec addExistVerifierWithExpectationType:expectationType callSite:KW_THIS_CALLSITE]

#undef KW_ADD_MATCH_VERIFIER
#define KW_ADD_MATCH_VERIFIER(expectationType) [KWSpec addMatchVerifierWithExpectationType:expectationType callSite:KW_THIS_CALLSITE]

#undef KW_ADD_ASYNC_VERIFIER
#define KW_ADD_ASYNC_VERIFIER(expectationType, timeOut, wait) [KWSpec addAsyncVerifierWithExpectationType:expectationType callSite:KW_THIS_CALLSITE timeout:timeOut shouldWait:wait]
