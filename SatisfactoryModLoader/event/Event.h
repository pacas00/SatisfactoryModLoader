#pragma once
#include <string>
#include <vector>

enum EventType {
	PlayerSuicide,
	PlayerTookDamage,
	PlayerControllerBeginPlay,
	PlayerBeginPlay,
	PlayerSentMessage,
	PlayerStunSpearKey,
	PlayerScanKey,
	PlayerUseKey,
	PlayerSprintKey,
	PlayerColorGunSecondaryKey,
	PlayerAttentionPingKey,
	PlayerC4DetonateDispenserKey,
	PlayerC4PrimaryKey,
	PlayerBuildGunPrimaryKey,
	PlayerChainsawPrimaryKey,
	PlayerConsumablePrimaryKey,
	PlayerBuildGunScrollDownKey,
	PlayerBuildGunSnapToGuideKey,
	PlayerBuildGunNoSnapModKey,
	PlayerBuildGunScrollModeKey,
	PlayerHookshotPrimaryKey,
	PlayerHookshotSecondaryKey,
	PlayerHookshotEquip,
	PlayerPortableMinerDispenserKey,
	PlayerWeaponReloadKey,
	PlayerWeaponPrimaryKey,
	UButtonPressed,
	UButtonSlateHandlePressed,
	UCheckBoxPressed,
	UAkCheckBoxPressed,
	SButtonPressed,
	GameInstanceGetWorld,
	GameGetPlayer,
	ItemDescriptorConstructor,
	END
};