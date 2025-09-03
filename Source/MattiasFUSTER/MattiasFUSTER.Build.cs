// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MattiasFUSTER : ModuleRules
{
	public MattiasFUSTER(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"ChaosVehicles",
			"PhysicsCore",
			"UMG",
			"Slate",
            "GeometryCollectionEngine"
        });

		PublicIncludePaths.AddRange(new string[] {
			"MattiasFUSTER",
			"MattiasFUSTER/SportsCar",
			"MattiasFUSTER/OffroadCar",
			"MattiasFUSTER/Variant_Offroad",
			"MattiasFUSTER/Variant_TimeTrial",
			"MattiasFUSTER/Variant_TimeTrial/UI"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
