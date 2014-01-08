Kiwi-KIF
========

This little helper allows to write KIF integration tests using Kiwi framework.
Fully inspired by this [KIF issue](https://github.com/kif-framework/KIF/issues/246). 
Thanks to [@bnickel](https://github.com/bnickel) for this pretty solution.


Installation
============

```ruby
pod `Kiwi-KIF`, '~>1.0.1'
```

SenTestingKit used as default Kiwi-KIF testing framework. Definition for XCTest installation will looks as following:

```ruby
pod `Kiwi-KIF/XCTest`, '~>1.0.1'
```

Usage
=======


```objective-c
#import <Kiwi+KIF.h>

KIF_SPEC_BEGIN(AwesomeAppSpec)

	describe(@"Awesome app", ^{
		
		it(@"should do some party", ^{
			[[tester usingTimeout:5] waitForViewWithAccessibilityLabel:@"party"];
			[tester tapViewWithAccessibilityLabel:@"drinks"];
		});

	});
	
KIF_SPEC_END
```
