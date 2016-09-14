# UnrealRPG
A module of unreal engine that can support RPG features and based-UMG classes.

# How to use

##add the code to *.uproject
		{
			"Name": "UnrealRPG",
			"Type": "Runtime",
			"LoadingPhase": "Default",
			"AdditionalDependencies": [
				"CoreUObject",
				"Engine"
			]
		},


## make sure you add "OutExtraModuleNames.Add("UnrealRPG");" in the *.Target.cs and *Editor.Target.cs