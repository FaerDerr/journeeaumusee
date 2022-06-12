#pragma once

#include "Serialization/Archive.h"
#include "UDPData.generated.h"

USTRUCT(BlueprintType)
struct FUDPData {
	GENERATED_USTRUCT_BODY()
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "UDPCommunication")
		FString fstring1 = "";
	FUDPData() {
	}
};

FORCEINLINE FArchive& operator<<(FArchive &Ar, FUDPData &Structure)
{
	Ar << Structure.fstring1;
	return Ar;
}