// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildableLightSource.h"
#include "FGPowerInfoComponent.h"

AFGBuildableLightSource::AFGBuildableLightSource() : Super() {
	this->mIsEnabled = true;
	this->mCurrentLightColor.R = 1; this->mCurrentLightColor.G = 1; this->mCurrentLightColor.B = 1; this->mCurrentLightColor.A = 1;
	this->mPowerConsumption = 1;
	this->mPowerInfo = CreateDefaultSubobject<UFGPowerInfoComponent>(TEXT("powerInfo"));
	this->MaxRenderDistance = -1;
	this->mFactoryTickFunction.TickGroup = TG_PrePhysics; this->mFactoryTickFunction.EndTickGroup = TG_PrePhysics; this->mFactoryTickFunction.bTickEvenWhenPaused = false; this->mFactoryTickFunction.bCanEverTick = false; this->mFactoryTickFunction.bStartWithTickEnabled = true; this->mFactoryTickFunction.bAllowTickOnDedicatedServer = true; this->mFactoryTickFunction.TickInterval = 0;
	this->mPrimaryColor.R = -1; this->mPrimaryColor.G = -1; this->mPrimaryColor.B = -1; this->mPrimaryColor.A = 1;
	this->mSecondaryColor.R = -1; this->mSecondaryColor.G = -1; this->mSecondaryColor.B = -1; this->mSecondaryColor.A = 1;
	this->mDismantleEffectClassName = FSoftClassPath("/Game/FactoryGame/Buildable/Factory/-Shared/BP_MaterialEffect_Dismantle.BP_MaterialEffect_Dismantle_C");
	this->mBuildEffectClassName = FSoftClassPath("/Game/FactoryGame/Buildable/Factory/-Shared/BP_MaterialEffect_Build.BP_MaterialEffect_Build_C");
	this->mHighlightParticleClassName = FSoftClassPath("/Game/FactoryGame/Buildable/-Shared/Particle/NewBuildingPing.NewBuildingPing_C");
	this->SetReplicates(true);
	this->NetDormancy = DORM_Initial;
	this->NetCullDistanceSquared = 5624999936;
}
void AFGBuildableLightSource::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void AFGBuildableLightSource::BeginPlay(){ }
void AFGBuildableLightSource::EndPlay(const EEndPlayReason::Type EndPlayReason){ }
bool AFGBuildableLightSource::GetPoolHandleInitialState() const{ return bool(); }
void AFGBuildableLightSource::SetLightEnabled(bool isEnabled){ }
void AFGBuildableLightSource::SetLightControlData(FLightSourceControlData data){ }
bool AFGBuildableLightSource::IsLightEnabled() const{ return bool(); }
FLightSourceControlData AFGBuildableLightSource::GetLightControlData() const{ return FLightSourceControlData(); }
void AFGBuildableLightSource::OnLightColorSlotsUpdated(const TArray< FLinearColor >& colors){ }
void AFGBuildableLightSource::OnTimeOfDayChanged(bool isDay){ }
void AFGBuildableLightSource::OnHasPowerChanged( UFGPowerInfoComponent* info){ }
void AFGBuildableLightSource::OnRep_IsEnabled(){ }
void AFGBuildableLightSource::OnRep_LightControlData(){ }
void AFGBuildableLightSource::OnRep_HasPower(){ }
void AFGBuildableLightSource::OnRep_IsDay(){ }
void AFGBuildableLightSource::UpdateMeshDataAndHandles(){ }
void AFGBuildableLightSource::UpdateCurrentLightColor(){ }