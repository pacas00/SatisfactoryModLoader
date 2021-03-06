// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildableStandaloneSign.h"
#include "FGColoredInstanceMeshProxy.h"
#include "Components/SceneComponent.h"

AFGBuildableStandaloneSign::AFGBuildableStandaloneSign() : Super() {
	this->mSignDisplayRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SignDisplayRoot")); this->mSignDisplayRoot->SetupAttachment(this->RootComponent);
	this->mTextDisplayRoot = CreateDefaultSubobject<USceneComponent>(TEXT("TextDisplayRoot")); this->mTextDisplayRoot->SetupAttachment(this->mSignDisplayRoot);
	this->mBoundingBox = CreateDefaultSubobject<UBoxComponent>(TEXT("TextBoundingBox")); this->mBoundingBox->SetupAttachment(this->mTextDisplayRoot);
	this->mMeshComponentProxy = CreateDefaultSubobject<UFGColoredInstanceMeshProxy>(TEXT("SignMeshProxy")); this->mMeshComponentProxy->SetupAttachment(this->RootComponent);
	this->mGainSignificanceDistance = 1000000;
	this->MaxRenderDistance = -1;
	this->mPrimaryColor.R = -1; this->mPrimaryColor.G = -1; this->mPrimaryColor.B = -1; this->mPrimaryColor.A = 1;
	this->mSecondaryColor.R = -1; this->mSecondaryColor.G = -1; this->mSecondaryColor.B = -1; this->mSecondaryColor.A = 1;
	this->mDismantleEffectClassName = FSoftClassPath("/Game/FactoryGame/Buildable/Factory/-Shared/BP_MaterialEffect_Dismantle.BP_MaterialEffect_Dismantle_C");
	this->mBuildEffectClassName = FSoftClassPath("/Game/FactoryGame/Buildable/Factory/-Shared/BP_MaterialEffect_Build.BP_MaterialEffect_Build_C");
	this->mHighlightParticleClassName = FSoftClassPath("/Game/FactoryGame/Buildable/-Shared/Particle/NewBuildingPing.NewBuildingPing_C");
	this->SetReplicates(true);
	this->NetDormancy = DORM_Initial;
	this->NetCullDistanceSquared = 5624999936;
	this->mHologramParticleComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("HologramParticle")); this->mHologramParticleComponent->SetupAttachment(this->mSignDisplayRoot);
}
void AFGBuildableStandaloneSign::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void AFGBuildableStandaloneSign::BeginPlay(){ }
void AFGBuildableStandaloneSign::EndPlay(const EEndPlayReason::Type EndPlayReason){ }
void AFGBuildableStandaloneSign::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGBuildableStandaloneSign::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGBuildableStandaloneSign::OnConstruction(const FTransform& transform){ }
AFGBuildable* AFGBuildableStandaloneSign::GetBuildable_Implementation(){ return nullptr; }
void AFGBuildableStandaloneSign::SetSignData_Implementation(const FSignData& data, bool bUpdate){ }
FSignData AFGBuildableStandaloneSign::GetSignData_Implementation(){ return FSignData(); }
int32 AFGBuildableStandaloneSign::GetAvailableElementID_Implementation(){ return int32(); }
FVector2D AFGBuildableStandaloneSign::GetSignDimensions_Implementation(){ return FVector2D(); }
FVector2D AFGBuildableStandaloneSign::GetGridSquareDimensions_Implementation(){ return FVector2D(); }
void AFGBuildableStandaloneSign::GainedSignificance_Implementation(){ }
void AFGBuildableStandaloneSign::LostSignificance_Implementation(){ }
void AFGBuildableStandaloneSign::UpdateSignElements(){ }
void AFGBuildableStandaloneSign::UpdateBackgroundMaterial(){ }
void AFGBuildableStandaloneSign::UpdateSignText(){ }
float AFGBuildableStandaloneSign::GetCurrentNormalizedTextScale(){ return float(); }
float AFGBuildableStandaloneSign::GetCurrentNormalizedTextOffsetZ(){ return float(); }
float AFGBuildableStandaloneSign::GetTextScaleFromNormalizedValue(float value){ return float(); }
void AFGBuildableStandaloneSign::OnRep_SignData(){ }
