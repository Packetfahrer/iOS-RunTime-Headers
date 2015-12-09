/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKTransitDeparturesViewController : UITableViewController <MKTransitDeparturesCellDelegate, _MKPlaceTransitIncidentCellDelegate, _MKTransitConnectionCellDelegate> {
    BOOL  _allowsTransitLineSelection;
    NSMutableSet * _animatingSequences;
    BOOL  _anyIncidentAdvisoryShown;
    NSMapTable * _cachedDirectionsForSystem;
    NSMutableDictionary * _cachedImages;
    NSMapTable * _cachedSectionHeaders;
    NSMutableDictionary * _cachedSequencesForSection;
    NSTimer * _cellRefreshTimer;
    <MKTransitDepaturesViewControllerDelegate> * _delegate;
    NSDate * _departureCutoffDate;
    BOOL  _fetchingTransitInfo;
    <GEOTransitSystem> * _filterSystem;
    BOOL  _hasNoDisplayableDepartures;
    _MKPlaceTransitIncidentsController * _incidentsController;
    NSString * _infoRefreshErrorDescription;
    BOOL  _isFilteredSelection;
    NSDate * _lastCutoffDateWithValidSchedule;
    int  _lastFailureDiagnosis;
    BOOL  _lastInfoRefreshFailed;
    MKMapItem * _mapItem;
    NSMutableDictionary * _multiDepartureSequenceHeightValues;
    BOOL  _pagingAllowed;
    BOOL  _pendingRefresh;
    NSMutableDictionary * _sectionControllers;
    NSMutableArray * _sections;
    NSMutableSet * _sequencesShowingMultipleDepartures;
    BOOL  _showDisambiguation;
    NSMutableArray * _shownIncidentTitles;
}

@property (nonatomic, readonly) BOOL allowsTransitLineSelection;
@property (nonatomic, retain) NSTimer *cellRefreshTimer;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MKTransitDepaturesViewControllerDelegate> *delegate;
@property (nonatomic, retain) NSDate *departureCutoffDate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <GEOTransitSystem> *filterSystem;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isFilteredSelection;
@property (nonatomic, retain) NSDate *lastCutoffDateWithValidSchedule;
@property (nonatomic) int lastFailureDiagnosis;
@property (nonatomic, retain) MKMapItem *mapItem;
@property (nonatomic) BOOL pagingAllowed;
@property (nonatomic) BOOL pendingRefresh;
@property (nonatomic) BOOL showDisambiguation;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_blockedLines;
- (id)_cellForRowAtIndexPath:(id)arg1;
- (float)_columnCenteringImageWidth;
- (void)_configureDeparturesCell:(id)arg1 forIndexPath:(id)arg2;
- (id)_connectionCellForRow:(int)arg1;
- (id)_controllerForSection:(int)arg1;
- (id)_departureCutoffDateForSequence:(id)arg1;
- (id)_departureSequenceForIndexPath:(id)arg1;
- (id)_departureSequenceForIndexPath:(id)arg1 outDepartureIndex:(unsigned int*)arg2 outIsNewLine:(BOOL*)arg3 outNextLineIsSame:(BOOL*)arg4;
- (int)_departureSequenceFrequencyTypeForAllDeparturesSections;
- (int)_departureSequenceFrequencyTypeForSection:(int)arg1;
- (id)_departureSequencesForSection:(int)arg1;
- (id)_descriptionForDepartureDate:(id)arg1 canIncludeDate:(BOOL)arg2;
- (id)_directionForSection:(int)arg1;
- (id)_directionsForSystem:(id)arg1 hasSequencesWithNoDirection:(out BOOL*)arg2;
- (id)_dominantIncidentForLine:(id)arg1;
- (BOOL)_hasConnectionsSection;
- (BOOL)_hasIncidentsSection;
- (BOOL)_hasMessageSection;
- (float)_heightForFooterInSection:(int)arg1;
- (float)_heightForRows;
- (id)_identifierForSection:(int)arg1;
- (id)_identifierForSequence:(id)arg1;
- (id)_imageForLine:(id)arg1;
- (id)_imageForLine:(id)arg1 size:(int)arg2;
- (id)_imageForSystem:(id)arg1;
- (id)_imageKeyForLine:(id)arg1 size:(int)arg2;
- (id)_imageWithArtworkDataSource:(id)arg1;
- (id)_incidentCellForRow:(int)arg1;
- (id)_incidents;
- (void)_incrementPageControlValueForSection:(id)arg1;
- (id)_indexPathWithHeader:(id)arg1;
- (id)_indexPathWithoutHeader:(id)arg1;
- (BOOL)_isCompressed;
- (BOOL)_isCompressedWithTraits:(id)arg1;
- (BOOL)_isDateLastDeparture:(id)arg1 withNextDepartureDate:(id)arg2 forSequence:(id)arg3;
- (BOOL)_isImageCandidateForColumnCentering:(id)arg1;
- (BOOL)_isInfoExpired;
- (BOOL)_isStuckWithExpiredInfo;
- (int)_lineImageSize;
- (void)_localeDidChange;
- (float)_maxImageWidth;
- (float)_maxImageWidthPassingTest:(id /* block */)arg1;
- (id)_messageCell;
- (void)_multiSystemRefreshCellsIfNecessary:(id)arg1;
- (id)_nextLastDepartureDateForSequence:(id)arg1 afterDate:(id)arg2;
- (int)_numberOfRowsInSection:(int)arg1;
- (int)_numberOfSectionsForSystem:(id)arg1;
- (void)_pageControlButtonPressed:(id)arg1;
- (id)_pagingPromptForSection:(int)arg1;
- (void)_rebuildSections;
- (void)_refresh;
- (void)_refreshCells;
- (void)_refreshCellsWithCutoffUpdate:(BOOL)arg1;
- (void)_refreshTransitInfo;
- (int)_sectionForIdentifier:(id)arg1;
- (BOOL)_sectionHasFooter:(int)arg1;
- (BOOL)_sectionHasHeader:(int)arg1;
- (int)_sectionTypeForSection:(int)arg1;
- (int)_sectionsCount;
- (id)_separatorColor;
- (id)_serviceGapDescriptionForDepartureDates:(id)arg1 inSequence:(id)arg2;
- (BOOL)_shouldPageSection:(int)arg1;
- (id)_smallerImageWithArtworkDataSource:(id)arg1;
- (id)_startEndDatesForSequence:(id)arg1 date:(id)arg2;
- (id)_systemForSection:(int)arg1;
- (id)_systemForSection:(int)arg1 firstSection:(int*)arg2;
- (id)_timestampFormatterForTimeZoneDisplay:(BOOL)arg1;
- (void)_toggleShowingMultipleDeparturesForCell:(id)arg1 atIndexPath:(id)arg2;
- (int)_transitCategoryForSection:(int)arg1;
- (int)_transitCategoryForSequence:(id)arg1;
- (void)_updateDepartureCutoffDate;
- (void)_updateScheduleInfoIfNeeded;
- (void)_updateSecondaryTextForHighFrequencyCell:(id)arg1 withSequence:(id)arg2;
- (BOOL)_updateSecondaryTextForOperatingHours:(id)arg1 withSequence:(id)arg2;
- (id)_viewForFooterInSection:(int)arg1;
- (id)_viewForHeaderInSection:(int)arg1;
- (BOOL)allowsTransitLineSelection;
- (id)cellRefreshTimer;
- (int)currentTransitCategory;
- (void)dealloc;
- (id)delegate;
- (id)departureCutoffDate;
- (void)dragDidBeginInDeparturesCell:(id)arg1;
- (void)dragDidEndInDeparturesCell:(id)arg1;
- (id)filterSystem;
- (void)incidentButtonSelectedInDeparturesCell:(id)arg1;
- (void)infoButtonSelectedInConnectionCell:(id)arg1;
- (void)infoButtonSelectedInIncidentCell:(id)arg1;
- (id)initWithMapItem:(id)arg1 allowTransitLineSelection:(BOOL)arg2;
- (id)initWithMapItem:(id)arg1 allowTransitLineSelection:(BOOL)arg2 filterSystem:(id)arg3;
- (BOOL)isFilteredSelection;
- (id)lastCutoffDateWithValidSchedule;
- (int)lastFailureDiagnosis;
- (id)mapItem;
- (int)numberOfSectionsInTableView:(id)arg1;
- (BOOL)pagingAllowed;
- (BOOL)pendingRefresh;
- (void)recordIncidentShown:(id)arg1 system:(id)arg2;
- (void)setCellRefreshTimer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDepartureCutoffDate:(id)arg1;
- (void)setFilterSystem:(id)arg1;
- (void)setLastCutoffDateWithValidSchedule:(id)arg1;
- (void)setLastFailureDiagnosis:(int)arg1;
- (void)setMapItem:(id)arg1;
- (void)setPagingAllowed:(BOOL)arg1;
- (void)setPendingRefresh:(BOOL)arg1;
- (void)setShowDisambiguation:(BOOL)arg1;
- (BOOL)showDisambiguation;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 estimatedHeightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 estimatedHeightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)timesTappedInDeparturesCell:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (int)transitCategoryForFrequencyType:(int)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
