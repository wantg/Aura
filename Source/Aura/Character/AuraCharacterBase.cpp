#include "Character/AuraCharacterBase.h"

AAuraCharacterBase::AAuraCharacterBase() {
    PrimaryActorTick.bCanEverTick = false;

    Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
    Weapon->SetupAttachment(GetMesh(), "WeaponHandSocket");
    Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

UAbilitySystemComponent* AAuraCharacterBase::GetAbilitySystemComponent() const {
    return AbilitySystemComponent;
}

void AAuraCharacterBase::BeginPlay() {
    Super::BeginPlay();
}
