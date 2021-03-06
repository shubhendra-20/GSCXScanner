//
// Copyright 2018 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#import <UIKit/UIKit.h>

/**
 *  The name of the environment variable determining whether the overlay window forwards or does not
 *  forward hits.
 */
FOUNDATION_EXTERN NSString *const kWindowOverlayTypeKey;
/**
 *  The value of the overlay type environment variable configuring the overlay window to forward
 *  hits.
 */
FOUNDATION_EXTERN NSString *const kWindowOverlayTypeTransparent;
/**
 *  The value of the overlay type environment variable configuring the overlay window to not forward
 *  hits. The app starts on the GSCXUITestsViewController page instead of the table view page
 *  because there's no other way to navigate to the UI tests page manually with an opaque window.
 */
FOUNDATION_EXTERN NSString *const kWindowOverlayTypeOpaque;
/**
 *  The accessibility identifier of the main application window.
 */
FOUNDATION_EXTERN NSString *const kMainWindowAccessibilityId;
/**
 *  The name of the first installed check which fails elements for a given tag.
 */
FOUNDATION_EXTERN NSString *const kGSCXTestTagCheckName1;
/**
 *  The tag for which the first installed check fails elements.
 */
FOUNDATION_EXTERN const NSInteger kGSCXTestTagCheckTag1;
/**
 *  The name of the second installed check which fails elements for a given tag.
 */
FOUNDATION_EXTERN NSString *const kGSCXTestTagCheckName2;
/**
 *  The tag for which the second installed check fails elements.
 */
FOUNDATION_EXTERN const NSInteger kGSCXTestTagCheckTag2;
/**
 *  The name of the third installed check which fails elements for a given tag.
 */
FOUNDATION_EXTERN NSString *const kGSCXTestTagCheckName3;
/**
 *  The tag for which the third installed check fails elements.
 */
FOUNDATION_EXTERN const NSInteger kGSCXTestTagCheckTag3;
/**
 *  The name of the fourth installed check which fails elements for a given tag. Fails the same
 *  elements as the first installed check.
 */
FOUNDATION_EXTERN NSString *const kGSCXTestTagCheckName4;
/**
 *  The tag for which the fourth installed check fails elements. Equal to kGSCXTagCheckTag1.
 */
FOUNDATION_EXTERN const NSInteger kGSCXTestTagCheckTag4;

@interface GSCXTestAppDelegate : UIResponder <UIApplicationDelegate>

/**
 *  The main application window.
 */
@property(strong, nonatomic) UIWindow *window;
/**
 *  The overlay window presented above the main application window.
 */
@property(strong, nonatomic) UIWindow *overlayWindow;

@end
