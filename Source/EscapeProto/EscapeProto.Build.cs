// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class EscapeProto : ModuleRules
{
	public EscapeProto(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"EscapeProto",
			"EscapeProto/Variant_Horror",
			"EscapeProto/Variant_Horror/UI",
			"EscapeProto/Variant_Shooter",
			"EscapeProto/Variant_Shooter/AI",
			"EscapeProto/Variant_Shooter/UI",
			"EscapeProto/Variant_Shooter/Weapons"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
