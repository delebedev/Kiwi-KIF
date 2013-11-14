Kiwi-KIF
========

This little helper allows to write KIF integration tests using Kiwi framework.
Fully inspired by this [KIF issue](https://github.com/kif-framework/KIF/issues/246). 
Thanks to [@bnickel](https://github.com/bnickel) for this pretty solution.


Installation
============

```pod `Kiwi-KIF`, '~>1.0.0'```

Usage
=======


```
#import "Kiwi+KIF.h"

KIF_SPEC_BEGIN(AwesomeAppSpec)

	describe(@"Awesome app", ^{
		
		it(@"should do some party", ^{
			[[tester usingTimeout:5] waitForViewWithAccessibilityLabel:@"party"];
			[tester tapViewWithAccessibilityLabel:@"drinks"];
		});

	});
	
KIF_SPEC_END
```
