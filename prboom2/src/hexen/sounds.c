//
// Copyright(C) 1993-1996 Id Software, Inc.
// Copyright(C) 1993-2008 Raven Software
// Copyright(C) 2005-2014 Simon Howard
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//

#include "doomtype.h"
#include "sounds.h"

// Hexen map music is set dynamically in SNDINFO
musicinfo_t hexen_S_music[HEXEN_NUMMUSIC] = {
    [hexen_mus_hexen] = { "HEXEN", 0 },
    [hexen_mus_hub]   = { "HUB", 0 },
    [hexen_mus_hall]  = { "HALL", 0 },
    [hexen_mus_orb]   = { "ORB", 0 },
    [hexen_mus_chess] = { "CHESS", 0 },
};

sfxinfo_t hexen_S_sfx[] = {
    { "", false, 0, 0, 0, -1, 0, 0, 0, 0, "" },
    { "", false, 256, 0, 1, -1, 0, 0, 0, 2, "PlayerFighterNormalDeath" },
    { "", false, 256, 0, 1, -1, 0, 0, 0, 2, "PlayerFighterCrazyDeath" },
    { "", false, 256, 0, 1, -1, 0, 0, 0, 2, "PlayerFighterExtreme1Death" },
    { "", false, 256, 0, 1, -1, 0, 0, 0, 2, "PlayerFighterExtreme2Death" },
    { "", false, 256, 0, 1, -1, 0, 0, 0, 2, "PlayerFighterExtreme3Death" },
    { "", false, 256, 0, 1, -1, 0, 0, 0, 2, "PlayerFighterBurnDeath" },
    { "", false, 256, 0, 1, -1, 0, 0, 0, 2, "PlayerClericNormalDeath" },
    { "", false, 256, 0, 1, -1, 0, 0, 0, 2, "PlayerClericCrazyDeath" },
    { "", false, 256, 0, 1, -1, 0, 0, 0, 2, "PlayerClericExtreme1Death" },
    { "", false, 256, 0, 1, -1, 0, 0, 0, 2, "PlayerClericExtreme2Death" },
    { "", false, 256, 0, 1, -1, 0, 0, 0, 2, "PlayerClericExtreme3Death" },
    { "", false, 256, 0, 1, -1, 0, 0, 0, 2, "PlayerClericBurnDeath" },
    { "", false, 256, 0, 0, -1, 0, 0, 0, 2, "PlayerMageNormalDeath" },
    { "", false, 256, 0, 0, -1, 0, 0, 0, 2, "PlayerMageCrazyDeath" },
    { "", false, 256, 0, 0, -1, 0, 0, 0, 2, "PlayerMageExtreme1Death" },
    { "", false, 256, 0, 0, -1, 0, 0, 0, 2, "PlayerMageExtreme2Death" },
    { "", false, 256, 0, 0, -1, 0, 0, 0, 2, "PlayerMageExtreme3Death" },
    { "", false, 256, 0, 0, -1, 0, 0, 0, 2, "PlayerMageBurnDeath" },
    { "", false, 256, 0, 1, -1, 0, 0, 0, 2, "PlayerFighterPain" },
    { "", false, 256, 0, 1, -1, 0, 0, 0, 2, "PlayerClericPain" },
    { "", false, 256, 0, 0, -1, 0, 0, 0, 2, "PlayerMagePain" },
    { "", false, 256, 0, 1, -1, 0, 0, 0, 2, "PlayerFighterGrunt" },
    { "", false, 256, 0, 1, -1, 0, 0, 0, 2, "PlayerClericGrunt" },
    { "", false, 256, 0, 0, -1, 0, 0, 0, 2, "PlayerMageGrunt" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "PlayerLand" },
    { "", false, 256, 0, 1, -1, 0, 0, 0, 2, "PlayerPoisonCough" },
    { "", false, 256, 0, 1, -1, 0, 0, 0, 2, "PlayerFighterFallingScream" },
    { "", false, 256, 0, 1, -1, 0, 0, 0, 2, "PlayerClericFallingScream" },
    { "", false, 256, 0, 0, -1, 0, 0, 0, 2, "PlayerMageFallingScream" },
    { "", false, 256, 0, 1, -1, 0, 0, 0, 2, "PlayerFallingSplat" },
    { "", false, 256, 0, 1, -1, 0, 0, 0, 1, "PlayerFighterFailedUse" },
    { "", false, 256, 0, 1, -1, 0, 0, 0, 1, "PlayerClericFailedUse" },
    { "", false, 256, 0, 0, -1, 0, 0, 0, 1, "PlayerMageFailedUse" },
    { "", false, 36, 0, 1, -1, 0, 0, 0, 2, "PlatformStart" },
    { "", false, 36, 0, 1, -1, 0, 0, 0, 2, "PlatformStartMetal" },
    { "", false, 40, 0, 1, -1, 0, 0, 0, 2, "PlatformStop" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "StoneMove" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "MetalMove" },
    { "", false, 36, 0, 1, -1, 0, 0, 0, 2, "DoorOpen" },
    { "", false, 36, 0, 1, -1, 0, 0, 0, 2, "DoorLocked" },
    { "", false, 36, 0, 1, -1, 0, 0, 0, 2, "DoorOpenMetal" },
    { "", false, 36, 0, 1, -1, 0, 0, 0, 2, "DoorCloseMetal" },
    { "", false, 36, 0, 1, -1, 0, 0, 0, 2, "DoorCloseLight" },
    { "", false, 36, 0, 1, -1, 0, 0, 0, 2, "DoorCloseHeavy" },
    { "", false, 36, 0, 1, -1, 0, 0, 0, 2, "DoorCreak" },
    { "", false, 36, 0, 0, -1, 0, 0, 0, 2, "PickupWeapon" },
    { "", false, 36, 0, 1, -1, 0, 0, 0, 2, "PickupArtifact" },
    { "", false, 36, 0, 1, -1, 0, 0, 0, 2, "PickupKey" },
    { "", false, 36, 0, 1, -1, 0, 0, 0, 2, "PickupItem" },
    { "", false, 36, 0, 0, -1, 0, 0, 0, 2, "PickupPiece" },
    { "", false, 36, 0, 0, -1, 0, 0, 0, 2, "WeaponBuild" },
    { "", false, 36, 0, 1, -1, 0, 0, 0, 2, "UseArtifact" },
    { "", false, 36, 0, 1, -1, 0, 0, 0, 2, "BlastRadius" },
    { "", false, 256, 0, 1, -1, 0, 0, 0, 2, "Teleport" },
    { "", false, 30, 0, 1, -1, 0, 0, 0, 2, "ThunderCrash" },
    { "", false, 80, 0, 1, -1, 0, 0, 0, 2, "FighterPunchMiss" },
    { "", false, 80, 0, 1, -1, 0, 0, 0, 2, "FighterPunchHitThing" },
    { "", false, 80, 0, 1, -1, 0, 0, 0, 2, "FighterPunchHitWall" },
    { "", false, 80, 0, 1, -1, 0, 0, 0, 2, "FighterGrunt" },
    { "", false, 80, 0, 1, -1, 0, 0, 0, 2, "FighterAxeHitThing" },
    { "", false, 80, 0, 1, -1, 0, 0, 0, 2, "FighterHammerMiss" },
    { "", false, 80, 0, 1, -1, 0, 0, 0, 2, "FighterHammerHitThing" },
    { "", false, 80, 0, 1, -1, 0, 0, 0, 2, "FighterHammerHitWall" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "FighterHammerContinuous" },
    { "", false, 80, 0, 1, -1, 0, 0, 0, 2, "FighterHammerExplode" },
    { "", false, 80, 0, 1, -1, 0, 0, 0, 2, "FighterSwordFire" },
    { "", false, 80, 0, 1, -1, 0, 0, 0, 2, "FighterSwordExplode" },
    { "", false, 80, 0, 1, -1, 0, 0, 0, 2, "ClericCStaffFire" },
    { "", false, 40, 0, 1, -1, 0, 0, 0, 2, "ClericCStaffExplode" },
    { "", false, 80, 0, 1, -1, 0, 0, 0, 2, "ClericCStaffHitThing" },
    { "", false, 80, 0, 1, -1, 0, 0, 0, 2, "ClericFlameFire" },
    { "", false, 80, 0, 1, -1, 0, 0, 0, 2, "ClericFlameExplode" },
    { "", false, 80, 0, 1, -1, 0, 0, 0, 2, "ClericFlameCircle" },
    { "", false, 80, 0, 1, -1, 0, 0, 0, 2, "MageWandFire" },
    { "", false, 80, 0, 1, -1, 0, 0, 0, 2, "MageLightningFire" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "MageLightningZap" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "MageLightningContinuous" },
    { "", false, 30, 0, 1, -1, 0, 0, 0, 2, "MageLightningReady" },
    { "", false, 80, 0, 1, -1, 0, 0, 0, 2, "MageShardsFire" },
    { "", false, 36, 0, 1, -1, 0, 0, 0, 2, "MageShardsExplode" },
    { "", false, 80, 0, 1, -1, 0, 0, 0, 2, "MageStaffFire" },
    { "", false, 40, 0, 1, -1, 0, 0, 0, 2, "MageStaffExplode" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "Switch1" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "Switch2" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "SerpentSight" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "SerpentActive" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "SerpentPain" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "SerpentAttack" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "SerpentMeleeHit" },
    { "", false, 40, 0, 1, -1, 0, 0, 0, 2, "SerpentDeath" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "SerpentBirth" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "SerpentFXContinuous" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "SerpentFXHit" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "PotteryExplode" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "Drip" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "CentaurSight" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "CentaurActive" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "CentaurPain" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "CentaurAttack" },
    { "", false, 40, 0, 1, -1, 0, 0, 0, 2, "CentaurDeath" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "CentaurLeaderAttack" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "CentaurMissileExplode" },
    { "", false, 1, 0, 1, -1, 0, 0, 0, 2, "Wind" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "BishopSight" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "BishopActive" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "BishopPain" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "BishopAttack" },
    { "", false, 40, 0, 1, -1, 0, 0, 0, 2, "BishopDeath" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "BishopMissileExplode" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "BishopBlur" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "DemonSight" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "DemonActive" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "DemonPain" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "DemonAttack" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "DemonMissileFire" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "DemonMissileExplode" },
    { "", false, 40, 0, 1, -1, 0, 0, 0, 2, "DemonDeath" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "WraithSight" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "WraithActive" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "WraithPain" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "WraithAttack" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "WraithMissileFire" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "WraithMissileExplode" },
    { "", false, 40, 0, 1, -1, 0, 0, 0, 2, "WraithDeath" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "PigActive1" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "PigActive2" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "PigPain" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "PigAttack" },
    { "", false, 40, 0, 1, -1, 0, 0, 0, 2, "PigDeath" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "MaulatorSight" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "MaulatorActive" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "MaulatorPain" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "MaulatorHamSwing" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "MaulatorHamHit" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "MaulatorMissileHit" },
    { "", false, 40, 0, 1, -1, 0, 0, 0, 2, "MaulatorDeath" },
    { "", false, 40, 0, 1, -1, 0, 0, 0, 2, "FreezeDeath" },
    { "", false, 40, 0, 1, -1, 0, 0, 0, 2, "FreezeShatter" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "EttinSight" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "EttinActive" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "EttinPain" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "EttinAttack" },
    { "", false, 40, 0, 1, -1, 0, 0, 0, 2, "EttinDeath" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "FireDemonSpawn" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "FireDemonActive" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "FireDemonPain" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "FireDemonAttack" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "FireDemonMissileHit" },
    { "", false, 40, 0, 1, -1, 0, 0, 0, 2, "FireDemonDeath" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "IceGuySight" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "IceGuyActive" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "IceGuyAttack" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "IceGuyMissileExplode" },
    { "", false, 256, 0, 1, -1, 0, 0, 0, 2, "SorcererSight" },
    { "", false, 256, 0, 1, -1, 0, 0, 0, 2, "SorcererActive" },
    { "", false, 256, 0, 1, -1, 0, 0, 0, 2, "SorcererPain" },
    { "", false, 256, 0, 1, -1, 0, 0, 0, 2, "SorcererSpellCast" },
    { "", false, 256, 0, 1, -1, 0, 0, 0, 4, "SorcererBallWoosh" },
    { "", false, 256, 0, 1, -1, 0, 0, 0, 2, "SorcererDeathScream" },
    { "", false, 80, 0, 1, -1, 0, 0, 0, 2, "SorcererBishopSpawn" },
    { "", false, 80, 0, 1, -1, 0, 0, 0, 2, "SorcererBallPop" },
    { "", false, 80, 0, 1, -1, 0, 0, 0, 3, "SorcererBallBounce" },
    { "", false, 80, 0, 1, -1, 0, 0, 0, 3, "SorcererBallExplode" },
    { "", false, 80, 0, 1, -1, 0, 0, 0, 3, "SorcererBigBallExplode" },
    { "", false, 256, 0, 1, -1, 0, 0, 0, 2, "SorcererHeadScream" },
    { "", false, 64, 0, 1, -1, 0, 0, 0, 2, "DragonSight" },
    { "", false, 64, 0, 1, -1, 0, 0, 0, 2, "DragonActive" },
    { "", false, 64, 0, 1, -1, 0, 0, 0, 2, "DragonWingflap" },
    { "", false, 64, 0, 1, -1, 0, 0, 0, 2, "DragonAttack" },
    { "", false, 64, 0, 1, -1, 0, 0, 0, 2, "DragonPain" },
    { "", false, 64, 0, 1, -1, 0, 0, 0, 2, "DragonDeath" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "DragonFireballExplode" },
    { "", false, 256, 0, 1, -1, 0, 0, 0, 2, "KoraxSight" },
    { "", false, 256, 0, 1, -1, 0, 0, 0, 2, "KoraxActive" },
    { "", false, 256, 0, 1, -1, 0, 0, 0, 2, "KoraxPain" },
    { "", false, 256, 0, 1, -1, 0, 0, 0, 2, "KoraxAttack" },
    { "", false, 256, 0, 1, -1, 0, 0, 0, 2, "KoraxCommand" },
    { "", false, 256, 0, 1, -1, 0, 0, 0, 2, "KoraxDeath" },
    { "", false, 128, 0, 1, -1, 0, 0, 0, 2, "KoraxStep" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "ThrustSpikeRaise" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "ThrustSpikeLower" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "GlassShatter" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "FlechetteBounce" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "FlechetteExplode" },
    { "", false, 36, 0, 1, -1, 0, 0, 0, 2, "LavaMove" },
    { "", false, 36, 0, 1, -1, 0, 0, 0, 2, "WaterMove" },
    { "", false, 36, 0, 1, -1, 0, 0, 0, 2, "IceStartMove" },
    { "", false, 36, 0, 1, -1, 0, 0, 0, 2, "EarthStartMove" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "WaterSplash" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "LavaSizzle" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "SludgeGloop" },
    { "", false, 64, 0, 1, -1, 0, 0, 0, 2, "HolySymbolFire" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "SpiritActive" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "SpiritAttack" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "SpiritDie" },
    { "", false, 36, 0, 1, -1, 0, 0, 0, 2, "ValveTurn" },
    { "", false, 36, 0, 1, -1, 0, 0, 0, 2, "RopePull" },
    { "", false, 20, 0, 1, -1, 0, 0, 0, 2, "FlyBuzz" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "Ignite" },
    { "", false, 256, 0, 1, -1, 0, 0, 0, 2, "PuzzleSuccess" },
    { "", false, 256, 0, 1, -1, 0, 0, 0, 2, "PuzzleFailFighter" },
    { "", false, 256, 0, 1, -1, 0, 0, 0, 2, "PuzzleFailCleric" },
    { "", false, 256, 0, 1, -1, 0, 0, 0, 2, "PuzzleFailMage" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "Earthquake" },
    { "", false, 32, 0, 0, -1, 0, 0, 0, 2, "BellRing" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "TreeBreak" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "TreeExplode" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "SuitofArmorBreak" },
    { "", false, 20, 0, 1, -1, 0, 0, 0, 2, "PoisonShroomPain" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "PoisonShroomDeath" },
    { "", false, 1, 0, 1, -1, 0, 0, 0, 1, "Ambient1" },
    { "", false, 1, 0, 1, -1, 0, 0, 0, 1, "Ambient2" },
    { "", false, 1, 0, 1, -1, 0, 0, 0, 1, "Ambient3" },
    { "", false, 1, 0, 1, -1, 0, 0, 0, 1, "Ambient4" },
    { "", false, 1, 0, 1, -1, 0, 0, 0, 1, "Ambient5" },
    { "", false, 1, 0, 1, -1, 0, 0, 0, 1, "Ambient6" },
    { "", false, 1, 0, 1, -1, 0, 0, 0, 1, "Ambient7" },
    { "", false, 1, 0, 1, -1, 0, 0, 0, 1, "Ambient8" },
    { "", false, 1, 0, 1, -1, 0, 0, 0, 1, "Ambient9" },
    { "", false, 1, 0, 1, -1, 0, 0, 0, 1, "Ambient10" },
    { "", false, 1, 0, 1, -1, 0, 0, 0, 1, "Ambient11" },
    { "", false, 1, 0, 1, -1, 0, 0, 0, 1, "Ambient12" },
    { "", false, 1, 0, 1, -1, 0, 0, 0, 1, "Ambient13" },
    { "", false, 1, 0, 1, -1, 0, 0, 0, 1, "Ambient14" },
    { "", false, 1, 0, 1, -1, 0, 0, 0, 1, "Ambient15" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "StartupTick" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "SwitchOtherLevel" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "Respawn" },
    { "", false, 512, 0, 1, -1, 0, 0, 0, 2, "KoraxVoiceGreetings" },
    { "", false, 512, 0, 1, -1, 0, 0, 0, 2, "KoraxVoiceReady" },
    { "", false, 512, 0, 1, -1, 0, 0, 0, 2, "KoraxVoiceBlood" },
    { "", false, 512, 0, 1, -1, 0, 0, 0, 2, "KoraxVoiceGame" },
    { "", false, 512, 0, 1, -1, 0, 0, 0, 2, "KoraxVoiceBoard" },
    { "", false, 512, 0, 1, -1, 0, 0, 0, 2, "KoraxVoiceWorship" },
    { "", false, 512, 0, 1, -1, 0, 0, 0, 2, "KoraxVoiceMaybe" },
    { "", false, 512, 0, 1, -1, 0, 0, 0, 2, "KoraxVoiceStrong" },
    { "", false, 512, 0, 1, -1, 0, 0, 0, 2, "KoraxVoiceFace" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "BatScream" },
    { "", false, 512, 0, 1, -1, 0, 0, 0, 2, "Chat" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "MenuMove" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "ClockTick" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 2, "Fireball" },
    { "", false, 30, 0, 1, -1, 0, 0, 0, 2, "PuppyBeat" },
    { "", false, 32, 0, 1, -1, 0, 0, 0, 4, "MysticIncant" },
};
