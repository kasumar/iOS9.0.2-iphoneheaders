/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:13:04 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/WebSheet.app/WebSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class WebSheetAppDelegate, WebSheetView, UIApplication, WebSheetViewController, NSURLRequest;

typedef struct ShowWebSheetContext {
	WebSheetAppDelegate* delegate;
	SEL didEndSelector;
	WebSheetView* webSheet;
	UIApplication* application;
	WebSheetViewController* viewCont;
} ShowWebSheetContext;

typedef struct ProbeContext {
	NSURLRequest* request;
	WebSheetView* sheet;
	__CFString interfaceName;
	__CFString ssid;
	unsigned captiveNetworkCookie;
} ProbeContext;

typedef struct __CFString* CFStringRef;
