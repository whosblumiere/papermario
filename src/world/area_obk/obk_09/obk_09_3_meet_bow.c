#include "obk_09.h"
#include "sprite.h"

#include "world/common/util/ChangeNpcToPartner.inc.c"

EvtScript N(EVS_Scene_MeetBow) = {
    EVT_IF_GE(GB_StoryProgress, STORY_CH3_BOW_JOINED_PARTY)
        EVT_RETURN
    EVT_END_IF
    EVT_SET(GB_StoryProgress, STORY_CH3_BOW_JOINED_PARTY)
    EVT_CALL(DisablePlayerInput, TRUE)
    EVT_CALL(SetMusicTrack, 0, SONG_CHEERFUL_BOOS_MANSION, 0, 8)
    EVT_THREAD
        EVT_WAIT(10)
        EVT_CALL(SetPlayerPos, -180, 0, 344)
        EVT_CALL(SetNpcPos, NPC_PARTNER, -180, 20, 344)
        EVT_CALL(PlayerMoveTo, 0, 190, 60)
        EVT_CALL(SetPlayerAnimation, ANIM_Mario_8001E)
    EVT_END_THREAD
    EVT_WAIT(10)
    EVT_CALL(SetCamType, CAM_DEFAULT, 4, TRUE)
    EVT_CALL(SetCamSpeed, CAM_DEFAULT, EVT_FLOAT(90.0))
    EVT_CALL(SetCamPitch, CAM_DEFAULT, EVT_FLOAT(5.0), EVT_FLOAT(-9.0))
    EVT_CALL(SetCamDistance, CAM_DEFAULT, 500)
    EVT_CALL(SetCamPosA, CAM_DEFAULT, 200, 280)
    EVT_CALL(SetCamPosB, CAM_DEFAULT, 0, 110)
    EVT_CALL(SetCamPosC, CAM_DEFAULT, 0, 0)
    EVT_CALL(PanToTarget, CAM_DEFAULT, 0, 1)
    EVT_WAIT(48)
    EVT_CALL(ShowMessageAtScreenPos, MSG_CH3_0042, 160, 40)
    EVT_KILL_THREAD(LVarA)
    EVT_CALL(InterpPlayerYaw, 40, 0)
    EVT_CALL(SetPlayerAnimation, SPRITE_ID_BACK_FACING | ANIM_Mario_10002)
    EVT_CALL(SetCamSpeed, CAM_DEFAULT, EVT_FLOAT(2.0))
    EVT_CALL(SetCamPitch, CAM_DEFAULT, EVT_FLOAT(4.0), EVT_FLOAT(-9.0))
    EVT_CALL(SetCamDistance, CAM_DEFAULT, 400)
    EVT_CALL(SetCamPosA, CAM_DEFAULT, 200, 300)
    EVT_CALL(SetCamPosB, CAM_DEFAULT, -20, 10)
    EVT_CALL(SetCamPosC, CAM_DEFAULT, 0, 60)
    EVT_CALL(PanToTarget, CAM_DEFAULT, 0, 1)
    EVT_CALL(WaitForCam, CAM_DEFAULT, EVT_FLOAT(1.0))
    EVT_WAIT(20)
    EVT_CALL(SetNpcPos, NPC_Bow, -10, 80, -35)
    EVT_CALL(SetNpcPos, NPC_Bootler, 30, 70, -75)
    EVT_CALL(SetNpcYaw, NPC_Bow, 270)
    EVT_CALL(SetNpcYaw, NPC_Bootler, 270)
    EVT_CALL(PlaySoundAtNpc, NPC_Bow, SOUND_BOO_VANISH, SOUND_SPACE_MODE_0)
    EVT_SETF(LVar0, EVT_FLOAT(0.0))
    EVT_LOOP(20)
        EVT_ADDF(LVar0, EVT_FLOAT(12.0))
        EVT_CALL(func_802CFD30, NPC_Bow, FOLD_TYPE_7, LVar0, 0, 0, 0)
        EVT_CALL(func_802CFD30, NPC_Bootler, FOLD_TYPE_7, LVar0, 0, 0, 0)
        EVT_WAIT(1)
    EVT_END_LOOP
    EVT_WAIT(40)
    EVT_CALL(UseSettingsFrom, CAM_DEFAULT, 0, 50, -70)
    EVT_CALL(SetCamDistance, CAM_DEFAULT, EVT_FLOAT(300.0))
    EVT_CALL(SetCamPitch, CAM_DEFAULT, EVT_FLOAT(3.0), EVT_FLOAT(-10.0))
    EVT_CALL(SetCamSpeed, CAM_DEFAULT, EVT_FLOAT(90.0))
    EVT_CALL(SetPanTarget, CAM_DEFAULT, 0, 50, -70)
    EVT_WAIT(20)
    EVT_CALL(SpeakToPlayer, NPC_Bow, ANIM_WorldBow_Talk, ANIM_WorldBow_Idle, 0, MSG_CH3_0043)
    EVT_CALL(SpeakToPlayer, NPC_Bootler, ANIM_Bootler_Talk, ANIM_Bootler_Idle, 0, MSG_CH3_0044)
    EVT_WAIT(10)
    EVT_CALL(SpeakToPlayer, NPC_Bow, ANIM_WorldBow_Talk, ANIM_WorldBow_Idle, 0, MSG_CH3_0045)
    EVT_WAIT(20)
    EVT_CALL(InterpNpcYaw, NPC_Bow, 225, 0)
    EVT_CALL(SpeakToPlayer, NPC_Bootler, ANIM_Bootler_Talk, ANIM_Bootler_Idle, 0, MSG_CH3_0046)
    EVT_CALL(SetCamSpeed, CAM_DEFAULT, EVT_FLOAT(2.0))
    EVT_CALL(SetPanTarget, CAM_DEFAULT, 20, 50, -70)
    EVT_WAIT(10)
    EVT_CALL(SpeakToPlayer, NPC_Bootler, ANIM_Bootler_Talk, ANIM_Bootler_Idle, 0, MSG_CH3_0047)
    EVT_CALL(SetCamType, CAM_DEFAULT, 4, TRUE)
    EVT_CALL(SetCamSpeed, CAM_DEFAULT, EVT_FLOAT(90.0))
    EVT_CALL(SetCamPitch, CAM_DEFAULT, EVT_FLOAT(15.5), EVT_FLOAT(-9.5))
    EVT_CALL(SetCamDistance, CAM_DEFAULT, 550)
    EVT_CALL(SetCamPosA, CAM_DEFAULT, 200, 300)
    EVT_CALL(SetCamPosB, CAM_DEFAULT, 0, 80)
    EVT_CALL(SetCamPosC, CAM_DEFAULT, 0, 0)
    EVT_CALL(PanToTarget, CAM_DEFAULT, 0, 1)
    EVT_WAIT(10)
    EVT_CALL(SpeakToPlayer, NPC_Bootler, ANIM_Bootler_Dejected, ANIM_Bootler_Quaver, 0, MSG_CH3_0048)
    EVT_CALL(UseSettingsFrom, CAM_DEFAULT, 0, 50, -70)
    EVT_CALL(SetCamDistance, CAM_DEFAULT, 300)
    EVT_CALL(SetCamPitch, CAM_DEFAULT, EVT_FLOAT(3.0), EVT_FLOAT(-10.0))
    EVT_CALL(SetCamSpeed, CAM_DEFAULT, EVT_FLOAT(90.0))
    EVT_CALL(SetPanTarget, CAM_DEFAULT, 20, 50, -70)
    EVT_WAIT(10)
    EVT_CALL(SpeakToPlayer, NPC_Bootler, ANIM_Bootler_Talk, ANIM_Bootler_Idle, 0, MSG_CH3_0049)
    EVT_CALL(SetCamSpeed, CAM_DEFAULT, EVT_FLOAT(2.0))
    EVT_CALL(SetPanTarget, CAM_DEFAULT, 0, 50, -70)
    EVT_WAIT(10)
    EVT_CALL(InterpNpcYaw, NPC_Bow, 270, 0)
    EVT_WAIT(10)
    EVT_CALL(SpeakToPlayer, NPC_Bow, ANIM_WorldBow_Talk, ANIM_WorldBow_Idle, 5, MSG_CH3_004A)
    EVT_CALL(InterpNpcYaw, NPC_Bow, 90, 0)
    EVT_CALL(SpeakToPlayer, NPC_Bow, ANIM_WorldBow_Talk, ANIM_WorldBow_Idle, 5, MSG_CH3_004B)
    EVT_CALL(SetCamDistance, CAM_DEFAULT, 550)
    EVT_CALL(SetCamPitch, CAM_DEFAULT, EVT_FLOAT(3.0), EVT_FLOAT(-12.0))
    EVT_CALL(PanToTarget, CAM_DEFAULT, 0, 1)
    EVT_WAIT(10)
    EVT_CALL(EnableGroup, MODEL_ori, TRUE)
    EVT_CALL(SetNpcPos, NPC_Skolar, 1, 650, 80)
    EVT_CALL(EnableNpcShadow, NPC_Skolar, FALSE)
    EVT_CALL(PlaySoundAtNpc, NPC_Skolar, SOUND_8000000F, SOUND_SPACE_MODE_0)
    EVT_CALL(MakeLerp, -280, -480, 100, EASING_QUADRATIC_IN)
    EVT_LOOP(0)
        EVT_CALL(UpdateLerp)
        EVT_CALL(TranslateGroup, MODEL_ori, 0, LVar0, 0)
        EVT_ADD(LVar0, 650)
        EVT_CALL(SetNpcPos, NPC_Skolar, 1, LVar0, 80)
        EVT_WAIT(1)
        EVT_IF_EQ(LVar1, 0)
            EVT_BREAK_LOOP
        EVT_END_IF
    EVT_END_LOOP
    EVT_CALL(StopSound, SOUND_8000000F)
    EVT_CALL(PlaySoundAtNpc, NPC_Skolar, SOUND_9B, SOUND_SPACE_MODE_0)
    EVT_CALL(ShakeCam, CAM_DEFAULT, 0, 15, EVT_FLOAT(0.2))
    EVT_WAIT(40)
    EVT_CALL(SetCamType, CAM_DEFAULT, 4, TRUE)
    EVT_CALL(SetCamSpeed, CAM_DEFAULT, EVT_FLOAT(90.0))
    EVT_CALL(SetCamPitch, CAM_DEFAULT, EVT_FLOAT(30.0), EVT_FLOAT(-18.0))
    EVT_CALL(SetCamDistance, CAM_DEFAULT, 500)
    EVT_CALL(SetCamPosA, CAM_DEFAULT, 0, 350)
    EVT_CALL(SetCamPosB, CAM_DEFAULT, 0, 0)
    EVT_CALL(SetCamPosC, CAM_DEFAULT, 0, 0)
    EVT_CALL(PanToTarget, CAM_DEFAULT, 0, 1)
    EVT_WAIT(20)
    EVT_CALL(SpeakToPlayer, NPC_Skolar, ANIM_WorldSkolar_TalkRelaxed, ANIM_WorldSkolar_IdleSad, 0, MSG_CH3_004C)
    EVT_CALL(UseSettingsFrom, CAM_DEFAULT, 0, 50, -70)
    EVT_CALL(SetCamDistance, CAM_DEFAULT, 300)
    EVT_CALL(SetCamPitch, CAM_DEFAULT, EVT_FLOAT(3.0), EVT_FLOAT(-10.0))
    EVT_CALL(SetCamSpeed, CAM_DEFAULT, EVT_FLOAT(90.0))
    EVT_CALL(SetPanTarget, CAM_DEFAULT, 0, 50, -70)
    EVT_WAIT(20)
    EVT_THREAD
        EVT_WAIT(30)
        EVT_CALL(SetNpcPos, NPC_Skolar, 1, 620, 80)
        EVT_CALL(EnableNpcShadow, NPC_Skolar, FALSE)
        EVT_CALL(PlaySoundAtNpc, NPC_Skolar, SOUND_8000000F, SOUND_SPACE_MODE_0)
        EVT_CALL(MakeLerp, -480, -280, 100, EASING_QUADRATIC_IN)
        EVT_LOOP(0)
            EVT_CALL(UpdateLerp)
            EVT_CALL(TranslateGroup, MODEL_ori, 0, LVar0, 0)
            EVT_ADD(LVar0, 640)
            EVT_CALL(SetNpcPos, NPC_Skolar, 1, LVar0, 80)
            EVT_WAIT(1)
            EVT_IF_EQ(LVar1, 0)
                EVT_BREAK_LOOP
            EVT_END_IF
        EVT_END_LOOP
        EVT_CALL(StopSound, SOUND_8000000F)
        EVT_CALL(EnableGroup, MODEL_ori, FALSE)
    EVT_END_THREAD
    EVT_CALL(SpeakToPlayer, NPC_Bow, ANIM_WorldBow_Talk, ANIM_WorldBow_Idle, 0, MSG_CH3_004D)
    EVT_CALL(SpeakToPlayer, NPC_Bootler, ANIM_Bootler_Panic, ANIM_Bootler_Shock, 0, MSG_CH3_004E)
    EVT_CALL(SpeakToNpc, NPC_Bow, ANIM_WorldBow_Talk, ANIM_WorldBow_Idle, 0, NPC_Bootler, MSG_CH3_004F)
    EVT_CALL(SpeakToPlayer, NPC_Bootler, ANIM_Bootler_Flail, ANIM_Bootler_Quaver, 0, MSG_CH3_0050)
    EVT_CALL(SpeakToPlayer, NPC_Bow, ANIM_WorldBow_SpookLoop, ANIM_WorldBow_Idle, 0, MSG_CH3_0051)
    EVT_CALL(SpeakToPlayer, NPC_Bootler, ANIM_Bootler_Dejected, ANIM_Bootler_Quaver, 0, MSG_CH3_0052)
    EVT_CALL(SetCamSpeed, CAM_DEFAULT, EVT_FLOAT(2.0))
    EVT_CALL(GetPlayerPos, LVar0, LVar1, LVar2)
    EVT_CALL(UseSettingsFrom, CAM_DEFAULT, LVar0, LVar1, LVar2)
    EVT_CALL(SetPanTarget, CAM_DEFAULT, LVar0, LVar1, LVar2)
    EVT_CALL(PanToTarget, CAM_DEFAULT, 0, 1)
    EVT_CALL(WaitForCam, CAM_DEFAULT, EVT_FLOAT(1.0))
    EVT_CALL(PanToTarget, CAM_DEFAULT, 0, 0)
    EVT_CALL(SetNpcJumpscale, NPC_Bow, 0)
    EVT_CALL(GetNpcPos, NPC_Bow, LVar0, LVar1, LVar2)
    EVT_SUB(LVar1, 40)
    EVT_ADD(LVar2, 150)
    EVT_CALL(NpcJump0, NPC_Bow, LVar0, LVar1, LVar2, 25)
    EVT_CALL(SpeakToPlayer, NPC_Bow, ANIM_WorldBow_Talk, ANIM_WorldBow_Idle, 0, MSG_CH3_0053)
    EVT_CALL(N(ChangeNpcToPartner), 0, 9)
    EVT_CALL(N(LoadPartyImage))
    EVT_EXEC(N(EVS_PlayNewPartnerSong))
    EVT_WAIT(15)
    EVT_CALL(ShowMessageAtScreenPos, MSG_Menus_018D, 160, 40)
    EVT_EXEC(N(EVS_ResetMusic))
    EVT_WAIT(10)
    EVT_WAIT(10)
    EVT_CALL(DisablePartnerAI, 0)
    EVT_CALL(SpeakToPlayer, NPC_PARTNER, ANIM_WorldBow_Celebrate, ANIM_WorldBow_Celebrate, 0, MSG_CH3_0054)
    EVT_CALL(EnablePartnerAI)
    EVT_CALL(DisablePlayerInput, FALSE)
    EVT_RETURN
    EVT_END
};
