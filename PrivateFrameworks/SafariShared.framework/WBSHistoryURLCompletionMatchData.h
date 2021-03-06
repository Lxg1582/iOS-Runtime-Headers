/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSHistoryURLCompletionMatchData : NSObject <WBSURLCompletionMatchData> {
    struct RefPtr<SafariShared::HistoryURLCompletionItem> { 
        struct HistoryURLCompletionItem {} *m_ptr; 
    }  _item;
}

@property (nonatomic, readonly) BOOL containsBookmark;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL lastVisitWasFailure;
@property (nonatomic, readonly) double lastVisitedTimeInterval;
@property (nonatomic, readonly) NSString *originalURLString;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)containsBookmark;
- (void)enumeratePageTitlesUsingBlock:(id /* block */)arg1;
- (void)enumerateUserVisibleURLsUsingBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithCompletionItem:(struct HistoryURLCompletionItem { struct atomic<int> { int x_1_1_1; } x1; int x2; int x3; int x4; struct vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem>, std::__1::allocator<WTF::RefPtr<SafariShared::HistoryURLCompletionItem> > > { struct RefPtr<SafariShared::HistoryURLCompletionItem> {} *x_5_1_1; struct RefPtr<SafariShared::HistoryURLCompletionItem> {} *x_5_1_2; struct __compressed_pair<WTF::RefPtr<SafariShared::HistoryURLCompletionItem> *, std::__1::allocator<WTF::RefPtr<SafariShared::HistoryURLCompletionItem> > > { struct RefPtr<SafariShared::HistoryURLCompletionItem> {} *x_3_2_1; } x_5_1_3; } x5; struct HistoryURLCompletionItem {} *x6; id x7; double x8; int x9; struct vector<int, std::__1::allocator<int> > { int *x_10_1_1; int *x_10_1_2; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x_3_2_1; } x_10_1_3; } x10; struct vector<int, std::__1::allocator<int> > { int *x_11_1_1; int *x_11_1_2; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x_3_2_1; } x_11_1_3; } x11; id x12; bool x13; }*)arg1;
- (BOOL)lastVisitWasFailure;
- (double)lastVisitedTimeInterval;
- (id)matchDataByMergingWithMatchData:(id)arg1;
- (BOOL)matchesAutocompleteTrigger:(id)arg1;
- (id)originalURLString;
- (id)pageTitleAtIndex:(unsigned int)arg1;
- (id)pageTitleForUserVisibleURLStringAtIndex:(unsigned int)arg1;
- (float)topSitesScoreForPageTitleAtIndex:(unsigned int)arg1 atTime:(double)arg2;
- (float)topSitesScoreForURLStringAtIndex:(unsigned int)arg1 atTime:(double)arg2;
- (id)userVisibleURLStringAtIndex:(unsigned int)arg1;
- (id)userVisibleURLStringForPageTitleAtIndex:(unsigned int)arg1;

@end
