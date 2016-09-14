//Copyright 2013 - 2016 Truing Co.,Ltd All Rights Reserved.
//Author:7Mersenne@gmail.com
#pragma once

#include "UnrealRPGPrivatePCH.h"


class FUnrealRPG : public IUnrealRPG
{
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

IMPLEMENT_MODULE(FUnrealRPG, UnrealRPG)



void FUnrealRPG::StartupModule()
{
	// This code will execute after your module is loaded into memory (but after global variables are initialized, of course.)
}


void FUnrealRPG::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

