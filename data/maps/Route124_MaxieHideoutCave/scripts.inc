Route124_MaxieHideoutCave_MapScripts::
	map_script ON_FRAME, Route124_MaxieHideoutCave_CheckDisableMaxie
	.byte 0
	
Route124_MaxieHideoutCave_CheckDisableMaxie::
	map_script_2 VAR_TEMP_2, 0, MHC_ShowMaxie
	.2byte 0
	
MHC_ShowMaxie::
	setvar VAR_TEMP_2, 100
	compare VAR_RYU_MAGMA, 580
	goto_if_lt ryu_end
	compare VAR_RYU_MAGMA, 590
	goto_if_gt ryu_end
	clearflag FLAG_HIDE_CHAMPIONS_ROOM_RIVAL
	addobject 1
	end


MHC_MaxieFinalEvent::
	setvar VAR_TEMP_0, 100
	compare VAR_RYU_MAGMA, 580
	goto_if_lt ryu_end
	compare VAR_RYU_MAGMA, 590
	lock
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_StepLeft
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_StepUp
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_StepLeft
	waitmovement OBJ_EVENT_ID_FOLLOWER
	applymovement 1, Common_Movement_FaceRight
	waitmovement 1
	msgbox THC_FoundYou
	closemessage
	multi_fixed_2_vs_1 TRAINER_STORY_MAXIE, MHC_MaxieDefeated, TRAINER_REL_COURTNEY_2, TRAINER_BACK_PIC_COURTNEY
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq Ryu_PlayerLostTheGame
	msgbox MHC_ToThinkThat
	closemessage
	playse SE_PIN
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_ExclamationMark
	waitmovement OBJ_EVENT_ID_FOLLOWER
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_StepLeft
	waitmovement OBJ_EVENT_ID_FOLLOWER
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_FaceUp
	waitmovement OBJ_EVENT_ID_FOLLOWER
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	msgbox MHC_IHaveAnIdea
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_FaceLeft
	msgbox MHC_StayRightThere
	closemessage
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_StepLeft
	waitmovement OBJ_EVENT_ID_FOLLOWER
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_StepDown
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_FaceRight
	waitmovement OBJ_EVENT_ID_FOLLOWER
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	msgbox MHC_BeRightBack
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, MHC_PlayerExitCave
	applymovement OBJ_EVENT_ID_FOLLOWER, MHC_CourtneyExitCave
	waitmovement OBJ_EVENT_ID_FOLLOWER
	setvar VAR_RYU_MAGMA, 590@Final Event of Magma Alternate Romance happening
	setflag FLAG_HIDE_CHAMPIONS_ROOM_RIVAL
	warpsilent MAP_ROUTE124, 255, 51, 24
	waitstate
	
MHC_MaxieDefeated:
	.string "No... This can't be the end...$"
	
THC_FoundYou:
    .string "{COLOR LIGHT_BLUE}{SHADOW BLUE}Aha!\n"
    .string "We found you!\p"
    .string "There's no escape for you now...\p"
	.string "{COLOR DARK_GREY}{SHADOW LIGHT_GREY}Maxie: I WON'T LOSE HERE!$"
	
MHC_ToThinkThat:
	.string "Bah! To think that I...the mastermind\n"
    .string "of Team Magma would be ousted by his\p"
    .string "own, traitorious kind...$"
	
MHC_IHaveAnIdea:
    .string " {COLOR LIGHT_GREEN}{SHADOW GREEN}(Courtney whispers to {PLAYER}:\p"
    .string " {COLOR LIGHT_RED}{SHADOW RED}What if we just collapse the cave\n"
    .string " on him and make it look like an\l"
    .string " accident?\p"
    .string " {COLOR LIGHT_GREEN}{SHADOW GREEN}{PLAYER} whispers back:\p"
    .string " {COLOR LIGHT_BLUE}{SHADOW BLUE}I love it. Let's do it!{COLOR LIGHT_GREEN}{SHADOW GREEN})$"
	
MHC_StayRightThere:
    .string "{COLOR LIGHT_BLUE}{SHADOW BLUE}Hey! Maxie, We have something to\n"
    .string "show you!$"
	
MHC_BeRightBack:
	.string "{COLOR LIGHT_BLUE}{SHADOW BLUE}Just wait here for a sec\n"
    .string "I'll bring it in.$"
	
MHC_PlayerExitCave:
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_down
	walk_in_place_down
	step_end
	
MHC_CourtneyExitCave:
	delay_16
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_down
	walk_in_place_down
	step_end
