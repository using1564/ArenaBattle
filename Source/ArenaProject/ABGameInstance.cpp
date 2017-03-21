// Fill out your copyright notice in the Description page of Project Settings.

#include "ArenaProject.h"
#include "ABGameInstance.h"



UABGameInstance::UABGameInstance()
{
	AB_LOG(Warning,TEXT("%s"), TEXT("ABGameInstance Constructor!"));

	WebConnect = CreateDefaultSubobject<UWebConnect>(TEXT("WebConnect"));
}

void UABGameInstance::Init()
{
	AB_LOG_CALLONLY(Warning);
	Super::Init();
	WebConnect2 = NewObject<UWebConnect>(this);

	UClass* ClassInfo1 = WebConnect->GetClass();
	
	UClass* ClassInfo2 = UWebConnect::StaticClass();

	if (ClassInfo1 == ClassInfo2)
	{
		AB_LOG(Warning, TEXT("ClassInfo1 is same with ClassInfo2"));
	}

	for (TFieldIterator<UProperty> It(ClassInfo1); It; ++It)
	{
		AB_LOG(Warning, TEXT("Field : %s, Type : %s"), *It->GetName(), *It->GetClass()->GetName());
		UStrProperty* StrProp = FindField<UStrProperty>(ClassInfo1, *It->GetName());
		if (StrProp)
		{
			AB_LOG(Warning, TEXT("Value = %s"), *StrProp->GetPropertyValue_InContainer(WebConnect));
		}


	}



	
}
