#import "FKPathsTests.h"

@implementation FKPathsTests

- (void)testDocumentsPath {
  STAssertTrue([FKDocumentsDirectory() fkit_containsString:@"Documents"], @"Documents directory is wrong");
}

- (void)testApplicationSupportPath {
  STAssertTrue([FKApplicationSupportDirectory() fkit_containsString:@"Application Support"], @"Application Support directory is wrong");
}

- (void)testLibraryPath {
  STAssertTrue([FKLibraryDirectory() fkit_containsString:@"Library"], @"Library directory is wrong");
}

- (void)testCachePath {
  STAssertTrue([FKCacheDirectory() fkit_containsString:@"Cache"], @"Cache directory is wrong");
}

@end
