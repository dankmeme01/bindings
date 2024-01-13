#include "Common.hpp"

#ifdef GEODE_IS_WINDOWS

using namespace geode::prelude;

GEODE_SIZE_CHECK(CCNode, 0x108);
// GEODE_MEMBER_CHECK(CCNode, m_pUserObject, 0xcc);

GEODE_SIZE_CHECK(CCSprite, 0x1fc);

GEODE_SIZE_CHECK(CCLayer, 0x13c);

GEODE_SIZE_CHECK(CCLayerColor, 0x1b8);

// GEODE_SIZE_CHECK(CCLabelBMFont, 0x194);

GEODE_SIZE_CHECK(CCDirector, 0x130);
GEODE_MEMBER_CHECK(CCDirector, m_pobOpenGLView, 0x8c);
GEODE_MEMBER_CHECK(CCDirector, m_fFrameRate, 0xac);
GEODE_MEMBER_CHECK(CCDirector, m_pRunningScene, 0xcc);
GEODE_MEMBER_CHECK(CCDirector, m_pobScenesStack, 0xd8);
GEODE_MEMBER_CHECK(CCDirector, m_obWinSizeInPoints, 0xe8);


GEODE_MEMBER_CHECK(CCTextInputNode, m_allowedChars, 0x174);
GEODE_MEMBER_CHECK(CCTextInputNode, m_maxLabelWidth, 0x18c);
GEODE_MEMBER_CHECK(CCTextInputNode, m_maxLabelScale, 0x190);
GEODE_MEMBER_CHECK(CCTextInputNode, m_placeholderScale, 0x194);
GEODE_MEMBER_CHECK(CCTextInputNode, m_placeholderColor, 0x198);

GEODE_MEMBER_CHECK(GJListLayer, m_listView, 0x1b8);

GEODE_MEMBER_CHECK(BoomListView, m_tableView, 0x144);
GEODE_MEMBER_CHECK(BoomListView, m_entries, 0x148);

GEODE_MEMBER_CHECK(TableView, m_cellArray, 0x1b0);
GEODE_MEMBER_CHECK(CCScrollLayerExt, m_cutContent, 0x16c);

GEODE_SIZE_CHECK(SliderThumb, 0x140);
GEODE_SIZE_CHECK(Slider, 0x158);
GEODE_MEMBER_CHECK(Slider, m_touchLogic, 0x13c);
GEODE_SIZE_CHECK(SliderTouchLogic, 0x178);

GEODE_MEMBER_CHECK(GameLevelManager, m_mainLevels, 0x110);
GEODE_MEMBER_CHECK(GameLevelManager, m_searchFilters, 0x114);
GEODE_MEMBER_CHECK(GameLevelManager, m_onlineLevels, 0x118);
GEODE_MEMBER_CHECK(GameLevelManager, m_followedCreators, 0x120);
GEODE_MEMBER_CHECK(GameLevelManager, m_GLM21, 0x124);
GEODE_MEMBER_CHECK(GameLevelManager, m_likedLevels, 0x12C);
GEODE_MEMBER_CHECK(GameLevelManager, m_ratedLevels, 0x130);
GEODE_MEMBER_CHECK(GameLevelManager, m_ratedDemons, 0x134);
GEODE_MEMBER_CHECK(GameLevelManager, m_reportedLevels, 0x138);
GEODE_MEMBER_CHECK(GameLevelManager, m_onlineFolders, 0x13C);
GEODE_MEMBER_CHECK(GameLevelManager, m_localLevelsFolders, 0x140);
GEODE_MEMBER_CHECK(GameLevelManager, m_dailyLevels, 0x144);
GEODE_MEMBER_CHECK(GameLevelManager, m_dailyIDUnk, 0x150);
GEODE_MEMBER_CHECK(GameLevelManager, m_weeklyIDUnk, 0x15C);
GEODE_MEMBER_CHECK(GameLevelManager, m_gauntletLevels, 0x16C);
GEODE_MEMBER_CHECK(GameLevelManager, m_availableFilters, 0x170);
GEODE_MEMBER_CHECK(GameLevelManager, m_savedGauntlets, 0x198);
GEODE_MEMBER_CHECK(GameLevelManager, m_levelManagerDelegate, 0x1ec);
GEODE_MEMBER_CHECK(GameLevelManager, m_commentUploadDelegate, 0x1f8);

GEODE_MEMBER_CHECK(GameStatsManager, m_dailyChests, 0x144);
GEODE_MEMBER_CHECK(GameStatsManager, m_worldAdvertChests, 0x148);
GEODE_MEMBER_CHECK(GameStatsManager, m_activeChallenges, 0x14C);
GEODE_MEMBER_CHECK(GameStatsManager, m_upcomingChallenges, 0x150);
GEODE_MEMBER_CHECK(GameStatsManager, m_playerStats, 0x160);
GEODE_MEMBER_CHECK(GameStatsManager, m_completedLevels, 0x174);
GEODE_MEMBER_CHECK(GameStatsManager, m_verifiedUserCoins, 0x178);
GEODE_MEMBER_CHECK(GameStatsManager, m_pendingUserCoins, 0x17C);
GEODE_MEMBER_CHECK(GameStatsManager, m_purchasedItems, 0x180);
GEODE_MEMBER_CHECK(GameStatsManager, m_onlineCurrencyScores, 0x184);
GEODE_MEMBER_CHECK(GameStatsManager, m_mainCurrencyScores, 0x188);
GEODE_MEMBER_CHECK(GameStatsManager, m_gauntletCurrencyScores, 0x18C);
GEODE_MEMBER_CHECK(GameStatsManager, m_timelyCurrencyScores, 0x190);
GEODE_MEMBER_CHECK(GameStatsManager, m_onlineStars, 0x194);
GEODE_MEMBER_CHECK(GameStatsManager, m_timelyStars, 0x198);
GEODE_MEMBER_CHECK(GameStatsManager, m_gauntletDiamondScores, 0x19C);
GEODE_MEMBER_CHECK(GameStatsManager, m_timelyDiamondScores, 0x1A0);
GEODE_MEMBER_CHECK(GameStatsManager, m_unusedCurrencyAwardDict, 0x1A4);
GEODE_MEMBER_CHECK(GameStatsManager, m_challengeDiamonds, 0x1A8);
GEODE_MEMBER_CHECK(GameStatsManager, m_completedMappacks, 0x1AC);
GEODE_MEMBER_CHECK(GameStatsManager, m_completedLists, 0x1B0);
GEODE_MEMBER_CHECK(GameStatsManager, m_weeklyChest, 0x1B4);
GEODE_MEMBER_CHECK(GameStatsManager, m_treasureRoomChests, 0x1B8);
GEODE_MEMBER_CHECK(GameStatsManager, m_miscChests, 0x1C8);
GEODE_MEMBER_CHECK(GameStatsManager, m_enabledItems, 0x1CC);
GEODE_MEMBER_CHECK(GameStatsManager, m_activePath, 0x1EC);

GEODE_MEMBER_CHECK(GJBaseGameLayer, m_gameState, 0x148);
GEODE_MEMBER_CHECK(GJBaseGameLayer, m_level, 0x5e0);
GEODE_MEMBER_CHECK(GJBaseGameLayer, m_player1, 0x878);
GEODE_MEMBER_CHECK(GJBaseGameLayer, m_player2, 0x87c);
GEODE_MEMBER_CHECK(GJBaseGameLayer, m_objectLayer, 0x9b8);
GEODE_MEMBER_CHECK(GJBaseGameLayer, m_massiveFloatArray, 0xa2c);
// unverified in 2.203
// GEODE_MEMBER_CHECK(GJBaseGameLayer, m_queuedButtons, 0x2b48);



// vvv correct 2.203 offsets
// GEODE_MEMBER_CHECK(PlayerObject, m_hasCustomGlowColor, 0x770);
// GEODE_MEMBER_CHECK(PlayerObject, m_isPlatformer, 0x900);
// vvv 2.200 offsets, please adjust them for whatever the newest ver is
// GEODE_MEMBER_CHECK(PlayerObject, m_unk518, 0x518);
// GEODE_MEMBER_CHECK(PlayerObject, m_unk568, 0x568);
// GEODE_MEMBER_CHECK(PlayerObject, m_unk56c, 0x56c);
// GEODE_MEMBER_CHECK(PlayerObject, m_particleSystems, 0x590);
// GEODE_MEMBER_CHECK(PlayerObject, m_unk594, 0x594);
// GEODE_MEMBER_CHECK(PlayerObject, m_unk5b4, 0x5b4);
// GEODE_MEMBER_CHECK(PlayerObject, m_rotationSpeed, 0x5d8);
// GEODE_MEMBER_CHECK(PlayerObject, m_isRotating, 0x5e0);
// GEODE_MEMBER_CHECK(PlayerObject, m_isHidden, 0x5e3);
// GEODE_MEMBER_CHECK(PlayerObject, m_iconSprite, 0x5ec);
// GEODE_MEMBER_CHECK(PlayerObject, m_rotationSpeed, 0x5d8);
// GEODE_MEMBER_CHECK(PlayerObject, m_regularTrail, 0x620);
// GEODE_MEMBER_CHECK(PlayerObject, m_waveTrail, 0x628);
// GEODE_MEMBER_CHECK(PlayerObject, m_unk644, 0x644);
// GEODE_MEMBER_CHECK(PlayerObject, m_unk658, 0x658);
// GEODE_MEMBER_CHECK(PlayerObject, m_unk688, 0x688);
// GEODE_MEMBER_CHECK(PlayerObject, m_unk68c, 0x68c);
// GEODE_MEMBER_CHECK(PlayerObject, m_unk6ac, 0x6ac);
// GEODE_MEMBER_CHECK(PlayerObject, m_unk6bc, 0x6bc);
// GEODE_MEMBER_CHECK(PlayerObject, m_objectSnappedTo, 0x6c4);
// GEODE_MEMBER_CHECK(PlayerObject, m_robotSprite, 0x6d0);
// GEODE_MEMBER_CHECK(PlayerObject, m_spiderSprite, 0x6d4);
// GEODE_MEMBER_CHECK(PlayerObject, m_unk708, 0x708);
// GEODE_MEMBER_CHECK(PlayerObject, m_hasCustomGlowColor, 0x778);
// GEODE_MEMBER_CHECK(PlayerObject, m_glowColor, 0x779);
// GEODE_MEMBER_CHECK(PlayerObject, m_yVelocity, 0x798);
// GEODE_MEMBER_CHECK(PlayerObject, m_isShip, 0x7a9);
// GEODE_MEMBER_CHECK(PlayerObject, m_isGoingLeft, 0x7b2);
// GEODE_MEMBER_CHECK(PlayerObject, m_isSwing, 0x7b4);
// GEODE_MEMBER_CHECK(PlayerObject, m_isDashing, 0x7d4);
// GEODE_MEMBER_CHECK(PlayerObject, m_vehicleSize, 0x7e0);
// GEODE_MEMBER_CHECK(PlayerObject, m_playerSpeed, 0x7e4);
// GEODE_MEMBER_CHECK(PlayerObject, m_unk7c8, 0x7c8);
// GEODE_MEMBER_CHECK(PlayerObject, m_unk7d0, 0x7d0);
// GEODE_MEMBER_CHECK(PlayerObject, m_isLocked, 0x7ff);
// GEODE_MEMBER_CHECK(PlayerObject, m_lastGroundedPos, 0x804);
// GEODE_MEMBER_CHECK(PlayerObject, m_lastActivatedPortal, 0x810);
// GEODE_MEMBER_CHECK(PlayerObject, m_playerColor1, 0x816);
// GEODE_MEMBER_CHECK(PlayerObject, m_playerColor2, 0x819);
// GEODE_MEMBER_CHECK(PlayerObject, m_position, 0x81c);
// GEODE_MEMBER_CHECK(PlayerObject, m_unk838, 0x838);
// GEODE_MEMBER_CHECK(PlayerObject, m_isPlatformer, 0x8e8);
// GEODE_MEMBER_CHECK(PlayerObject, m_gravityMod, 0x8fc);
// GEODE_MEMBER_CHECK(PlayerObject, m_unk930, 0x930);
// GEODE_MEMBER_CHECK(PlayerObject, m_unk950, 0x950);
// GEODE_MEMBER_CHECK(PlayerObject, m_parentLayer, 0x968);
// GEODE_MEMBER_CHECK(PlayerObject, m_actionManager, 0x96c);


GEODE_MEMBER_CHECK(FMODAudioEngine, m_system, 0x190);

GEODE_MEMBER_CHECK(GameManager, m_playLayer, 0x198);
GEODE_MEMBER_CHECK(GameManager, m_gameLayer, 0x1a0);

GEODE_SIZE_CHECK(SimplePlayer, 0x22c);
GEODE_SIZE_CHECK(GJBaseGameLayer, 0x2d80);
GEODE_SIZE_CHECK(PlayLayer, 0x2f78);
GEODE_SIZE_CHECK(GJGameLevel, 0x48c);
// GEODE_SIZE_CHECK(PlayerObject, 0x980); // 0x998 in 2.203
GEODE_SIZE_CHECK(GameObject, 0x498); // crying

GEODE_MEMBER_CHECK(GJDropDownLayer, m_delegate, 0x1dc);
GEODE_MEMBER_CHECK(GJSongBrowser, m_page, 0x1ec);
GEODE_MEMBER_CHECK(GJSongBrowser, m_songID, 0x1f0);

GEODE_MEMBER_CHECK(LevelInfoLayer, m_level, 0x168);
GEODE_MEMBER_CHECK(LevelInfoLayer, m_challenge, 0x1d0);
GEODE_MEMBER_CHECK(LevelInfoLayer, m_playSprite, 0x1d8);
GEODE_MEMBER_CHECK(LevelInfoLayer, m_songWidget, 0x1e0);

GEODE_MEMBER_CHECK(ItemInfoPopup, m_accountID, 0x1f8);

#endif
