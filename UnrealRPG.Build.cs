//Copyright 2013 - 2016 Truing Co.,Ltd All Rights Reserved.
//Author:7Mersenne@gmail.com

using UnrealBuildTool;

public class UnrealRPG : ModuleRules
{
	public UnrealRPG(TargetInfo Target)
	{
                PublicIncludePaths.AddRange(
                        new string[] {
				// ... add public include paths required here ...
                                "UnrealRPG/Public/HUD"
                        }
                        );


                PrivateIncludePaths.AddRange(
                        new string[] {
				// ... add other private include paths required here ...
                                "UnrealRPG/Private/HUD"
                        }
                        );

                PublicDependencyModuleNames.AddRange(new string[] {
                        "Core",
                        "CoreUObject",
                        "UMG",
                        "SlateCore",
                        "Slate",
                        "Engine"
                        
                });

                MinFilesUsingPrecompiledHeaderOverride = 1;
                bFasterWithoutUnity = true;
        }
}
