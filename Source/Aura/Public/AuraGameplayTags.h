// Copyright RickYan

#pragma once

#include "CoreMinimal.h"

/**
 * AuraGameplayTags
 *
 * 单例模式
 * Singleton containing native Gameplay Tags
 */

struct FAuraGameplayTags
{
public:
	static const FAuraGameplayTags& Get() { return GameplayTags;}
	static void InitializeNativeGameplayTags();
protected:
	
private:
	static FAuraGameplayTags GameplayTags;
};
