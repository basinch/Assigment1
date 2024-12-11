using UnrealBuildTool;
using System.Collections.Generic;

public class Assignment1EditorTarget : TargetRules
{
    public Assignment1EditorTarget(TargetInfo Target) : base(Target)
    {
        Type = TargetType.Editor;
        DefaultBuildSettings = BuildSettingsVersion.V2;

        // Benzersiz build ortamı
        BuildEnvironment = TargetBuildEnvironment.Unique;
    }
}