// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UEActionAdventure : ModuleRules
{
	public UEActionAdventure(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
