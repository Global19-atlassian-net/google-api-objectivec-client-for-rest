// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Search Console API (searchconsole/v1)
// Description:
//   The Search Console API provides access to both Search Console data
//   (verified users only) and to public information on an URL basis (anyone)
// Documentation:
//   https://developers.google.com/webmaster-tools/search-console-api/

#if SWIFT_PACKAGE || GTLR_USE_MODULAR_IMPORT
  @import GoogleAPIClientForRESTCore;
#elif GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRSearchConsole_RunMobileFriendlyTestRequest;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Parent class for other Search Console query classes.
 */
@interface GTLRSearchConsoleQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Runs Mobile-Friendly Test for a given URL.
 *
 *  Method: searchconsole.urlTestingTools.mobileFriendlyTest.run
 */
@interface GTLRSearchConsoleQuery_UrlTestingToolsMobileFriendlyTestRun : GTLRSearchConsoleQuery
// Previous library name was
//   +[GTLQuerySearchConsole queryForUrlTestingToolsMobileFriendlyTestRunWithObject:]

/**
 *  Fetches a @c GTLRSearchConsole_RunMobileFriendlyTestResponse.
 *
 *  Runs Mobile-Friendly Test for a given URL.
 *
 *  @param object The @c GTLRSearchConsole_RunMobileFriendlyTestRequest to
 *    include in the query.
 *
 *  @return GTLRSearchConsoleQuery_UrlTestingToolsMobileFriendlyTestRun
 */
+ (instancetype)queryWithObject:(GTLRSearchConsole_RunMobileFriendlyTestRequest *)object;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
