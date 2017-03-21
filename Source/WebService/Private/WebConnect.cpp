// Fill out your copyright notice in the Description page of Project Settings.
#include "WebService.h"
#include "WebConnect.h"

DEFINE_LOG_CATEGORY(WebConnect);

UWebConnect::UWebConnect()
{
	UE_LOG(WebConnect, Warning, TEXT("WebConnection Constructor Call!"));
	Host = TEXT("localhost:8000");
	URI = TEXT("/");
}
void UWebConnect::RequestToken()
{
	UE_LOG(WebConnect, Warning, TEXT("Request Token Call!"));
}