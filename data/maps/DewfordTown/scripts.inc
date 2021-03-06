DewfordTown_MapScripts:: @ 81E9507
	map_script ON_TRANSITION, DewfordTown_OnTransition
	map_script ON_FRAME, DFT_OnFrameScripts
	.byte 0

DFT_OnFrameScripts::
	map_script_2 VAR_TEMP_A, 0, RyuGlobal_CheckMissionCallStatus
	.2byte 0

DewfordTown_OnTransition: @ 81E950D
	setflag FLAG_VISITED_DEWFORD_TOWN
	end

DewfordTown_EventScript_Briney:: @ 81E9511
	goto_if_set FLAG_RYU_DT_BRINEY_BATTLE, ryu_end @@This prevents briney from approaching player if he's been defeated, i.e. not hostile.
	lockall
	playse SE_PIN
	applymovement 10, Common_Movement_ExclamationMark
	waitmovement 10
	delay 30
	getplayerxy VAR_TEMP_2, VAR_TEMP_3
	switch VAR_TEMP_2
	case 18, DewfordTown_EventScript_Briney_Move5Right
	case 17, DewfordTown_EventScript_Briney_Move4Right
	case 16, DewfordTown_EventScript_Briney_Move3Right
	case 15, DewfordTown_EventScript_Briney_Move2Right
	case 14, DewfordTown_EventScript_Briney_FaceRight
	case 12, DewfordTown_EventScript_Briney_FaceLeft
	goto DT_Briney_Battle


DewfordTown_EventScript_Briney_Move5Right::
	applymovement 10, DT_Briney_5Right
	waitmovement 10
	call DT_TurnPlayer
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	goto DT_Briney_Battle

DewfordTown_EventScript_Briney_Move4Right::
	applymovement 10, DT_Briney_4Right
	waitmovement 10
	goto DT_Briney_Battle
	
DewfordTown_EventScript_Briney_Move3Right::
	applymovement 10, DT_Briney_3Right
	waitmovement 10
	goto DT_Briney_Battle
	
DewfordTown_EventScript_Briney_Move2Right::
	applymovement 10, DT_Briney_2Right
	waitmovement 10
	goto DT_Briney_Battle
	
DewfordTown_EventScript_Briney_FaceRight::
	applymovement 10, Common_Movement_FaceRight
	waitmovement 10
	goto DT_Briney_Battle
	
DewfordTown_EventScript_Briney_FaceLeft::
	getplayerxy VAR_TEMP_2, VAR_TEMP_3
	compare VAR_TEMP_3, 110
	goto_if_ne DT_Briney_Battle
	applymovement 10, Common_Movement_FaceDown
	waitmovement 10
	goto DT_Briney_Battle

DT_Briney_Battle::
	setflag FLAG_TEMP_6
	setflag FLAG_RYU_DT_BRINEY_BATTLE
	trainerbattle_single TRAINER_BRINEY, DewfordTown_Text_BrineyIntro, DewfordTown_Text_BrineyDefeated
	release
	end
	
DT_Briney_PostBattle::
	msgbox DewfordTown_Text_BrineyPostBattle, MSGBOX_AUTOCLOSE
	release
	end

DT_Briney_PostBattleActvate::@@the script that activates when you talk directly to briney
	goto_if_unset FLAG_RYU_DT_BRINEY_BATTLE, DT_Briney_Battle                        @@Forces a fight with player when interacted
	msgbox DewfordTown_Text_BrineyPostBattle, MSGBOX_AUTOCLOSE                       @@with directly if not already defeated. 
	release                                                                         
	end

DT_TurnPlayer::
	getplayerxy VAR_TEMP_2, VAR_TEMP_3
	compare VAR_TEMP_3, 110
	goto_if_eq DT_TurnPlayerUp
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement OBJ_EVENT_ID_PLAYER
	return

DT_TurnPlayerUp::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement OBJ_EVENT_ID_PLAYER
	return

DT_Briney_5Right:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

DT_Briney_4Right:
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

DT_Briney_3Right:
	walk_right
	walk_right
	walk_right
	step_end

DT_Briney_2Right:
	walk_right
	walk_right
	step_end
	

DewfordTown_EventScript_Woman:: @ 81E95B1
	msgbox DewfordTown_Text_TinyIslandCommunity, MSGBOX_NPC
	end

DewfordTown_EventScript_TownSign:: @ 81E95BA
	msgbox DewfordTown_Text_TownSign, MSGBOX_SIGN
	end

DewfordTown_EventScript_GymSign:: @ 81E95C3
	msgbox DewfordTown_Text_GymSign, MSGBOX_SIGN
	end

DewfordTown_EventScript_HallSign:: @ 81E95CC
	msgbox DewfordTown_Text_HallSign, MSGBOX_SIGN
	end

DewfordTown_EventScript_OldRodFisherman:: @ 81E95D5
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_OLD_ROD, DewfordTown_EventScript_HowsFishing
	msgbox DewfordTown_Text_GettingItchToFish, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq DewfordTown_EventScript_GiveOldRod
	compare VAR_RESULT, NO
	goto_if_eq DewfordTown_EventScript_NotGettingItchToFish
	end

DewfordTown_EventScript_GiveOldRod:: @ 81E95FF
	msgbox DewfordTown_Text_GiveYouOneOfMyRods, MSGBOX_DEFAULT
	giveitem ITEM_OLD_ROD
	setflag FLAG_RECEIVED_OLD_ROD
	msgbox DewfordTown_Text_ThrowInFishingAdvice, MSGBOX_DEFAULT
	release
	end

DewfordTown_EventScript_NotGettingItchToFish:: @ 81E9620
	msgbox DewfordTown_Text_ThatsTooBadThen, MSGBOX_DEFAULT
	release
	end

DewfordTown_EventScript_HowsFishing:: @ 81E962A
	message DewfordTown_Text_HowsYourFishing
	waitmessage
	multichoice 20, 8, MULTI_HOWS_FISHING, 1
	compare VAR_RESULT, 0
	goto_if_eq DewfordTown_EventScript_FishingExcellent
	compare VAR_RESULT, 1
	goto_if_eq DewfordTown_EventScript_FishingNotSoGood
	end

DewfordTown_EventScript_FishingExcellent:: @ 81E964C
	msgbox DewfordTown_Text_GreatHaulInSomeBigOnes, MSGBOX_DEFAULT
	release
	end

DewfordTown_EventScript_FishingNotSoGood:: @ 81E9656
	msgbox DewfordTown_Text_FishingAdvice, MSGBOX_DEFAULT
	release
	end

DewfordTown_EventScript_TrendyPhraseBoy:: @ 81E9922
	lock
	faceplayer
	call Common_EventScript_BufferTrendyPhrase
	msgbox DewfordTown_Text_XIsTheBiggestHappeningThingRight, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq DewfordTown_EventScript_ConfirmTrendyPhrase
	compare VAR_RESULT, NO
	goto_if_eq DewfordTown_EventScript_RejectTrendyPhrase
	end

DewfordTown_EventScript_ConfirmTrendyPhrase:: @ 81E9948
	msgbox DewfordTown_Text_YeahDefinitionOfInRightNow, MSGBOX_DEFAULT
	release
	end

DewfordTown_EventScript_RejectTrendyPhrase:: @ 81E9952
	msgbox DewfordTown_Text_TellMeWhatsNewAndIn, MSGBOX_DEFAULT
	setvar VAR_0x8004, EASY_CHAT_TYPE_TRENDY_PHRASE
	call Common_ShowEasyChatScreen
	lock
	faceplayer
	compare VAR_RESULT, 1
	goto_if_eq DewfordTown_EventScript_GiveNewTrendyPhrase
	compare VAR_RESULT, 0
	goto_if_eq DewfordTown_EventScript_CancelNewTrendyPhrase
	end

DewfordTown_EventScript_GiveNewTrendyPhrase:: @ 81E997D
	incrementgamestat GAME_STAT_STARTED_TRENDS
	compare VAR_0x8004, 0
	goto_if_eq DewfordTown_EventScript_PhraseNotTrendyEnough
	msgbox DewfordTown_Text_OfCourseIKnowAboutThat, MSGBOX_DEFAULT
	release
	end

DewfordTown_EventScript_CancelNewTrendyPhrase:: @ 81E9994
	msgbox DewfordTown_Text_HearOfAnyTrendsComeShareWithMe, MSGBOX_DEFAULT
	release
	end

DewfordTown_EventScript_PhraseNotTrendyEnough:: @ 81E999E
	msgbox DewfordTown_Text_XHuhIThinkYIsCool, MSGBOX_DEFAULT
	release
	end

DewfordTown_Text_TinyIslandCommunity: @ 81E99A8
	.string "Dewford is a tiny island community.\n"
	.string "If something gets trendy here,\l"
	.string "everyone picks up on it right away.$"

DewfordTown_Text_TownSign: @ 81E9A0F
	.string "Dewford Town\n"
	.string "“A tiny island in the blue sea.”$"

DewfordTown_Text_GymSign: @ 81E9A3D
	.string "Dewford Town Pokémon Gym\n"
	.string "Leader: Brawly\l"
	.string "“A big wave in fighting!”$"

DewfordTown_Text_HallSign: @ 81E9A7F
	.string "Dewford Hall\n"
	.string "“Everyone's information exchange!”$"

DewfordTown_Text_GettingItchToFish: @ 81E9DD1
	.string "This is a renowned fishing spot.\n"
	.string "Are you getting the itch to fish?$"

DewfordTown_Text_GiveYouOneOfMyRods: @ 81E9E14
	.string "I hear you, and I like what\n"
	.string "you're saying!\p"
	.string "I'll give you one of my fishing Rods.$"

DewfordTown_Text_ThrowInFishingAdvice: @ 81E9E65
	.string "And, as an added bonus, I'll even throw\n"
	.string "in a little fishing advice!\p"
	.string "First, you want to face the water,\n"
	.string "then use the Rod.\p"
	.string "Focus your mind…\n"
	.string "If you get a bite, pull on the Rod.\p"
	.string "Sometimes you can snag something\n"
	.string "immediately, but with bigger catches,\l"
	.string "you need to time the pulls on your Rod\l"
	.string "to haul them in.$"

DewfordTown_Text_ThatsTooBadThen: @ 81E9F92
	.string "Oh, is that so?\n"
	.string "That's too bad, then.$"

DewfordTown_Text_HowsYourFishing: @ 81E9FB8
	.string "Yo!\n"
	.string "How's your fishing?$"

DewfordTown_Text_GreatHaulInSomeBigOnes: @ 81E9FD0
	.string "Is that right! That's great!\n"
	.string "Haul in some big ones!$"

DewfordTown_Text_FishingAdvice: @ 81EA004
	.string "Oh, hey, don't get down on yourself!\n"
	.string "I'll give you a little fishing advice.\p"
	.string "First, you want to face the water,\n"
	.string "then use the Rod.\p"
	.string "Focus your mind…\n"
	.string "If you get a bite, pull the Rod.\p"
	.string "Sometimes you can snag something\n"
	.string "immediately, but with bigger catches,\l"
	.string "you need to time the pulls on your Rod\l"
	.string "to haul them in.$"

DewfordTown_Text_XIsTheBiggestHappeningThingRight: @ 81EA136
	.string "I like what's hip, happening, and trendy.\n"
	.string "I'm always checking it out.\p"
	.string "Listen, have you heard about this new\n"
	.string "“{STR_VAR_1}”?\p"
	.string "That's right!\n"
	.string "Of course you know!\p"
	.string "I mean, sheesh,\n"
	.string "“{STR_VAR_1}”…\l"
	.string "It's the hottest thing in cool!\p"
	.string "Wherever you're from,\n"
	.string "“{STR_VAR_1}”\l"
	.string "is the biggest happening thing, right?$"

DewfordTown_Text_TellMeWhatsNewAndIn: @ 81EA242
	.string "Hunh?\n"
	.string "It's not the hip and happening thing?\p"
	.string "Well, hey, you have to tell me,\n"
	.string "what's new and what's “in”?$"

DewfordTown_Text_OfCourseIKnowAboutThat: @ 81EA2AA
	.string "Hunh?\n"
	.string "“{STR_VAR_2}”?\p"
	.string "… …\p"
	.string "…Uh… Yeah! That's right!\n"
	.string "Yeah, I knew that! Knew it all along!\p"
	.string "Of course I know about that!\n"
	.string "“{STR_VAR_2},” right?\p"
	.string "Yeah, that's it, it's there!\n"
	.string "Isn't “{STR_VAR_2}”\l"
	.string "the coolest, or what?\p"
	.string "It's the hippest thing in hip.\n"
	.string "You think I'd not know about it?\p"
	.string "“{STR_VAR_1}”…\n"
	.string "It's, like, so five minutes ago.\p"
	.string "Now, “{STR_VAR_2}” is\n"
	.string "what's vital and in tune with the times!$"

DewfordTown_Text_XHuhIThinkYIsCool: @ 81EA3FE
	.string "Hmm…\n"
	.string "“{STR_VAR_2},” huh?\p"
	.string "But personally, I think\n"
	.string "“{STR_VAR_1}”\l"
	.string "is what's real in cool.$"

DewfordTown_Text_HearOfAnyTrendsComeShareWithMe: @ 81EA443
	.string "Well, if you hear of any happening new\n"
	.string "trends, come share them with me, okay?$"

DewfordTown_Text_YeahDefinitionOfInRightNow: @ 81EA491
	.string "Yeah, absolutely right!\p"
	.string "“{STR_VAR_1}” is the\n"
	.string "definition of “in” right now.$"
