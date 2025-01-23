// Copyright RickYan


#include "Character/AuraCharacter.h"

#include "GameFramework/CharacterMovementComponent.h"

AAuraCharacter::AAuraCharacter()
{
	GetCharacterMovement()->bOrientRotationToMovement = true; // 确保角色的旋转方向与移动方向相同
	GetCharacterMovement()->RotationRate = FRotator(0.f, 400.f, 0.f); 
	GetCharacterMovement()->bConstrainToPlane = true; // 限制角色移动到平面上
	GetCharacterMovement()->bSnapToPlaneAtStart = true; // 角色开始时 snap to plane

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;
}
